// Targets: iOS, macOS
// A class with 2 different ways of solving FizzBuzz
// 1. a switch statement in the initializer using instance methods, and
// 2. if/else statements in class (type) functions

class FizzBuzz {
    
    var _values: [Int: String] = [:]

    init(start: Int = 1, end: Int = 100) {
        if start > end {
            return
        }
        
        for i in start...end {
            let (fizz, buzz) = calcFizzBuzz(num: i)
            switch (fizz, buzz) {
            case (true, true):
                _values[i] = "FizzBuzz"
            case (true, false):
                _values[i] = "Fizz"
            case (false, true):
                _values[i] = "Buzz"
            default:
                _values[i] = "\(i)"
            }
        }
    }
    
    func calcFizzBuzz(num: Int) -> (Bool, Bool) {
        return (num % 3 == 0, num % 5 == 0)
    }
    
    func printValues() {
        // copy the dictionary into a sorted array for printing
        for (k,v) in Array(_values).sorted(by: { $0.key < $1.key }) {
            print("\(k)\t\(v)")
        }
    }
    
    class func fizzBuzz(start: Int = 1, end: Int = 100) {
        if start > end {
            return
        }
        
        for i in start...end {
            let fizz = isFizz(num: i)
            let buzz = isBuzz(num: i)
            if fizz || buzz {
                if fizz {
                    print("\(i)\tFizz", terminator: "")
                }
                if buzz {
                    if fizz {
                        print("Buzz", terminator: "")
                    } else {
                        print("\(i)\tBuzz", terminator: "")
                    }
                }
                print()
            } else {
                print("\(i)")
            }
        }
    }
    
    class func isFizz(num: Int) -> Bool { return num % 3 == 0 }
    class func isBuzz(num: Int) -> Bool { return num % 5 == 0 }
}

// create a FizzBuzz object for values 1-15
var fizzBuzz = FizzBuzz(start: 1, end: 15)
fizzBuzz.printValues()

// use the class method for values 16-100
FizzBuzz.fizzBuzz(start: 16, end: 100)

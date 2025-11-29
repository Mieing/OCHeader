@class NSNumber, AFDWCTConditionWrapper;

@interface AFDLocalDataSelectOption : NSObject

@property (retain, nonatomic) AFDWCTConditionWrapper *conditionWrapper;
@property (retain, nonatomic) AFDWCTConditionWrapper *orderWrapper;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) AFDWCTConditionWrapper *propertyWrapper;

- (void).cxx_destruct;

@end

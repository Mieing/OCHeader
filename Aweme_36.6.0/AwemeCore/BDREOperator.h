@class NSString;

@interface BDREOperator : NSObject

@property (retain, nonatomic) NSString *symbol;
@property (nonatomic) int priority;
@property (nonatomic) int argsLength;

- (id)paramsInvalidateErrorWithSelectorName:(id)a0;
- (id)execute:(id)a0;
- (void).cxx_destruct;
- (id)execute:(id)a0 error:(id *)a1;

@end

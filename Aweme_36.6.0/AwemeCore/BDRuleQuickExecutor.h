@class NSString;

@interface BDRuleQuickExecutor : NSObject

@property (copy, nonatomic) NSString *cel;

- (void)logEventWithCost:(double)a0 envCost:(double)a1 code:(long long)a2;
- (void)logEventWithCost:(double)a0 envCost:(double)a1;
- (id)initWithCel:(id)a0;
- (BOOL)evaluateWithEnv:(id)a0 error:(id *)a1;
- (id)valueOfKey:(id)a0 env:(id)a1 error:(id *)a2;
- (void)logEventWithCost:(double)a0;
- (void).cxx_destruct;

@end

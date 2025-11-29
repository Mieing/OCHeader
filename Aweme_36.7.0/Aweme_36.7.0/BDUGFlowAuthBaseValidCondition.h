@class NSString;

@interface BDUGFlowAuthBaseValidCondition : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long validOperator;
@property (retain, nonatomic) id value;

+ (id)modelCustomPropertyMapper;
+ (id)currentIgnoreVerifyConditionKeyList;
+ (void)updateIgnoreVerifyConditionKeyList:(id)a0;

- (BOOL)intValidatorForOperator:(unsigned long long)a0 input:(long long)a1 ruleValue:(long long)a2;
- (BOOL)stringValidatorForOperator:(unsigned long long)a0 input:(id)a1 ruleValue:(id)a2;
- (BOOL)operatorSupported:(unsigned long long)a0;
- (BOOL)ruleValidWithEnvContext:(id)a0 bizParams:(id)a1;
- (BOOL)stringArrayValidatorForOperator:(unsigned long long)a0 input:(id)a1 ruleValue:(id)a2;
- (BOOL)ruleConfigCorrected;
- (void).cxx_destruct;

@end

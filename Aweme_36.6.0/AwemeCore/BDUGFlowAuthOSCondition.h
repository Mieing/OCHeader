@class NSArray;

@interface BDUGFlowAuthOSCondition : BDUGFlowAuthBaseValidCondition

@property (copy, nonatomic) NSArray *value;

- (BOOL)operatorSupported:(unsigned long long)a0;
- (BOOL)ruleValidWithEnvContext:(id)a0 bizParams:(id)a1;
- (BOOL)ruleConfigCorrected;

@end

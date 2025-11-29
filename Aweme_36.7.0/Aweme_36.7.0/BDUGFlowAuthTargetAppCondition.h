@class NSArray;

@interface BDUGFlowAuthTargetAppCondition : BDUGFlowAuthBaseValidCondition

@property (retain, nonatomic) NSArray *value;

- (BOOL)operatorSupported:(unsigned long long)a0;
- (BOOL)ruleValidWithEnvContext:(id)a0 bizParams:(id)a1;
- (BOOL)ruleConfigCorrected;

@end

@class NSString;

@interface BDUGFlowAuthLastCertCondition : BDUGFlowAuthBaseValidCondition

@property (retain, nonatomic) NSString *value;

- (BOOL)operatorSupported:(unsigned long long)a0;
- (BOOL)ruleValidWithEnvContext:(id)a0 bizParams:(id)a1;
- (BOOL)ruleConfigCorrected;

@end

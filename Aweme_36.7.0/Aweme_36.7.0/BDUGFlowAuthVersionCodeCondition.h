@class NSNumber;

@interface BDUGFlowAuthVersionCodeCondition : BDUGFlowAuthBaseValidCondition

@property (retain, nonatomic) NSNumber *value;

+ (long long)appVersionCode;
+ (id)versionName;

- (BOOL)operatorSupported:(unsigned long long)a0;
- (BOOL)ruleValidWithEnvContext:(id)a0 bizParams:(id)a1;
- (BOOL)ruleConfigCorrected;

@end

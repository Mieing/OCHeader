@interface AWESECAppJumpSettings : NSObject

+ (BOOL)globalSwitch;
+ (BOOL)enableABTest;
+ (id)ABTestDict;
+ (BOOL)enableDetectAllSceneBeforeReport;
+ (unsigned long long)userExceptionRate;
+ (unsigned long long)appLogRate;
+ (BOOL)enableWebContext;
+ (unsigned long long)performanceRate;
+ (BOOL)traceCollectSwitch;
+ (id)fetchArbiterWithAppJumpRisk:(unsigned long long)a0;
+ (id)fetchArbiterRulesWithArbiter:(id)a0;
+ (unsigned long long)secLinkTimeout;
+ (id)eventFlowDetectAllRule;
+ (BOOL)enableEventFlowEngine;
+ (id)defaultWhiteListScheme;
+ (id)gatewayConfig;
+ (id)ABTestRiskControl;
+ (id)riskControl;
+ (id)arbiterControl;
+ (id)secLinkCheckRules;
+ (id)uncaughtCheckConfig;
+ (id)probeCheckRules;
+ (long long)statementNotMatchedRisk;
+ (long long)certEmptyRisk;
+ (long long)defaultRisk;
+ (unsigned long long)engineType;
+ (id)allowList;

@end

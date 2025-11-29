@interface AWESECRouteSettings : NSObject

+ (unsigned long long)performanceSample;
+ (BOOL)reportToSlardar;
+ (BOOL)routeSecurityEventFlowDetectAllEnable;
+ (unsigned long long)maxLengthOfTracesToReport;
+ (id)itemFeatureSample;
+ (id)traceFeatureSample;
+ (BOOL)appendSQRIDEnabled;
+ (BOOL)appendSQRIDEnabledWithID:(id)a0;
+ (id)appendSQRIDLimitWithID:(id)a0;
+ (id)appendExemptList;
+ (BOOL)appendSessionEnabled;
+ (id)routeNavigationFocusScheme;
+ (BOOL)routeSecurityWebPluginSettings;
+ (id)routeSettings;
+ (id)routeSamples;
+ (id)routerModificationSettings;
+ (id)appendSQRIDDict;

@end

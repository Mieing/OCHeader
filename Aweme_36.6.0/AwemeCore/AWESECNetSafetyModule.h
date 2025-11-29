@interface AWESECNetSafetyModule : NSObject

+ (id)reportableReqHeaders;
+ (id)maskReqHeaders;
+ (id)reportableRespHeaders;
+ (id)maskRespHeaders;
+ (id)ttnetReportSamples;
+ (unsigned long long)ttnetLogStrategy;
+ (id)pnsReferKey;
+ (BOOL)pnsReferMock;
+ (unsigned long long)pnsReferSampleRate;
+ (void)setupSettings;
+ (void)setupURLTracer;
+ (BOOL)interestLogEnabled;
+ (id)setupABTestForRulerDetector;
+ (id)setupABTestForNet3rd;
+ (id)setupABTestForNetProtect;
+ (BOOL)useTTNetReqAspect;
+ (BOOL)useTTNetRespAspect;
+ (unsigned long long)performanceSample;
+ (BOOL)enableTTNetLogReporter;
+ (id)ttnetLogReportPathConfig;
+ (void)setupABTestForNA:(id)a0;
+ (void)setupABTestForWeb:(id)a0;
+ (id)netRules;
+ (BOOL)enableNativeSafety;
+ (BOOL)enableWebPageSafety;
+ (BOOL)enableWebResourceSafety;
+ (BOOL)pnsReferEnabled;
+ (BOOL)logDetectorEnabled;
+ (BOOL)enablePiperURLParamsDetector;
+ (BOOL)enablePiperURLParamsExtractor;
+ (BOOL)enableRouterURLParamsDetector;
+ (BOOL)enableRouterURLParamsExtractor;
+ (double)syncURLLogCleanupInterval;
+ (double)asyncURLLogCleanupInterval;
+ (id)urlTraceSettings;
+ (BOOL)reportToSlardar;
+ (id)settings;
+ (void)setup;

@end

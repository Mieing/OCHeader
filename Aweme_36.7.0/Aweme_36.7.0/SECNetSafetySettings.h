@class NSArray, NSDictionary;

@interface SECNetSafetySettings : NSObject

@property (copy) NSArray *reportableReqHeaders;
@property (copy) NSArray *reportableRespHeaders;
@property (copy) NSArray *maskReqHeaders;
@property (copy) NSArray *maskRespHeaders;
@property BOOL webContentSafetyEnabled;
@property BOOL webSafetyEnabled;
@property BOOL nativeSafetyEnabled;
@property BOOL nativeProtection;
@property BOOL webPageProtection;
@property BOOL webContentProtection;
@property unsigned long long webPageBacktraceSampleRate;
@property BOOL useTTNetReqAspects;
@property BOOL useTTNetRespAspects;
@property BOOL ttnetReporterEnabled;
@property (copy) NSDictionary *ttnetReportSamples;
@property unsigned long long ttnetLogStrategy;
@property (copy) NSDictionary *ttnetLogPathConfig;
@property unsigned long long perfSample;

+ (id)sharedSettings;

- (void).cxx_destruct;

@end

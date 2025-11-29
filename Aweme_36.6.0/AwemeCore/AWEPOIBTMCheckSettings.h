@interface AWEPOIBTMCheckSettings : NSObject

+ (BOOL)isUseBtmAppendInterceptor;
+ (id)getAppendEventConfig;
+ (BOOL)isEnableBTMCoverInterceptor;
+ (BOOL)isEnableBTMValidInterceptor;
+ (id)btmCheckerSettings;
+ (double)getBTMCoverSampleRatio;
+ (double)getBTMValidSampleRatio;
+ (id)getSkipCoverIntercept;
+ (id)getValidConfig;
+ (id)getReqIdFallbackEventConfig;
+ (long long)getReqIdFallbackStrategy;

@end

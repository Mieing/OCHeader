@interface AWEPOIContentSettingsManager : NSObject

+ (BOOL)gcjLocation;
+ (id)poiCommentSettings;
+ (id)videoCompressParams;
+ (id)progressParams;
+ (BOOL)disableALogReport;
+ (BOOL)disableVideoCompress;
+ (long long)videoCompressThreshold;
+ (BOOL)enableProgressBroadcast;
+ (long long)videoFrameRate;
+ (long long)videoResolution;

@end

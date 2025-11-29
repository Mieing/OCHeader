@interface AWEMVBannerCommonRecorder : NSObject

+ (long long)bannerMaxShowTimesInOneDay;
+ (id)recordModelOfBanner:(id)a0;
+ (long long)todayShownTimesOfBanner:(id)a0;
+ (id)allShownBannerIDs;
+ (void)recordBannerShown:(id)a0;
+ (void)recordBannerCloseStateWithBanner:(id)a0 isClosed:(BOOL)a1;

@end

@interface AWEMVChannelRealTimeBannerManager : NSObject

+ (BOOL)enableRealTimeBannerCapacityInAppendMode;
+ (BOOL)enableRealTimeBannerCapacityInReplaceMode;
+ (BOOL)enableRealTimeBannerCapacity;
+ (BOOL)largeBannerEnableShowInRealTime;
+ (BOOL)smallBannerEnableShowInRealTime;
+ (unsigned long long)realTimeBannerValidStrategy;
+ (id)sharedInstance;

@end

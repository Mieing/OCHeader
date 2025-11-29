@interface BDARVSDKSettings : NSObject

+ (id)deviceModelScore;
+ (id)geckoChannel;
+ (BOOL)mainTemplateUseForestEnabled;
+ (BOOL)lynxControllerLeaksFix;
+ (id)requestLoadingConfig;
+ (BOOL)disableBackToNative;
+ (id)keepScreenOnConfig;
+ (BOOL)enableDouyinAccountStatus;
+ (id)rewardAgainPitayaBusinessName;
+ (id)dislikePageURL;
+ (id)reportPageURL;
+ (id)reportPageLynxURL;
+ (id)feedbackSuccessToast;
+ (double)videoPreloadCacheSize;
+ (id)alertAdSheoConfig;
+ (BOOL)enableRunTimeGecko;
+ (id)videoAudioEffectConfig;
+ (BOOL)nextRewardJSBSwitchToMainThreadEnabled;
+ (BOOL)isVideoPreloadEnable;
+ (double)videoPreloadItemSize;
+ (long long)videoPreloadResolution;
+ (BOOL)isSupportByteVC1;
+ (BOOL)enableNewRewardVideo;
+ (BOOL)fixMediaPlayInBackgroundEnabled;
+ (id)videoBmfConfig;
+ (BOOL)isVideoPrerenderEnable;
+ (BOOL)preloadGeckoSourceEnabled;
+ (double)cacheExpirationTime;
+ (double)fontScale;

@end

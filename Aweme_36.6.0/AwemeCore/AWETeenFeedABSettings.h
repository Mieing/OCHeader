@interface AWETeenFeedABSettings : NSObject

+ (BOOL)preloadedBanCancel;
+ (id)preloadConfig;
+ (BOOL)downloadCompletePreloadOpen;
+ (BOOL)preloadMultiUrls;
+ (BOOL)usePreloaded302Url;
+ (BOOL)preloadWhenPlayFinish;
+ (BOOL)bitrateSelectOnce;
+ (BOOL)videoBufferThresholdV2Enable;
+ (long long)videoBufferShowThreshold;
+ (BOOL)loadControlOpen;
+ (BOOL)enableVideoModelDescBS;
+ (id)loadControlConfig;
+ (BOOL)bitrateChangeOptimize;
+ (BOOL)dynamicFinishBlockWithSpeedStrategy;
+ (double)dynamicFinishBlockWithSpeedThreshold;
+ (long long)dynamicFinishBlockStrategyType;
+ (double)dynamicFinishBlockDurationInitial;
+ (double)dynamicFinishBlockFactor;
+ (double)dynamicFinishBlockDurationMax;
+ (double)videoBuffer;
+ (long long)videoBufferThreshold;
+ (double)audioBuffer;

@end

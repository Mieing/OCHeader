@interface IESLiveMultiRoomPreloadHelper : NSObject

+ (id)_preloadConfig;
+ (BOOL)trackerFirstScreenDurationOpt;
+ (id)ptrWithObject:(id)a0;
+ (double)preloadContainerShowDuration;
+ (BOOL)innerPreloadEnable;
+ (BOOL)preloadContainerShowWithAnimation;
+ (BOOL)streamPlayerPreloadEnable;
+ (BOOL)playerAddToPreloadContainerWhenAppear;
+ (unsigned long long)preloadContainerShowType;
+ (long long)fixPopupVCContainerType;
+ (id)bootloaderPreloadCompConfig;
+ (id)bootloaderPreloadStrategyConfig;
+ (BOOL)blockLoadBootloaderEnable;
+ (id)innerPreloadConfig;
+ (id)streamPlayerPreloadConfig;
+ (id)blockPreloadPluginList;
+ (BOOL)innerPreloadDebugToast;
+ (id)requestPreloadConfig;
+ (BOOL)breakUpInvokePreloadTasks;
+ (BOOL)playerDelayAfterBootloaderPreload;
+ (void)toastTestInfo:(id)a0 type:(long long)a1;

@end

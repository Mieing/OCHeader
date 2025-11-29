@interface AWEPayNFCABUtil : NSObject

+ (void)_aweLazyRegisterStaticLoad;
+ (void)registerABExperiment;
+ (id)dcCacheConfig;
+ (BOOL)canFrontierPreConnect;
+ (BOOL)canUseNFCAutoScan;
+ (BOOL)canDCCachePreload;
+ (double)getDCCacheExpireTime;
+ (double)getDCCachePreloadDelay;
+ (double)getDCCacheMinCheckGapTime;
+ (BOOL)canTimorPrepare;
+ (BOOL)canTimorPrepareAsync;
+ (BOOL)canTimorPreloadPKG;
+ (BOOL)canTTNetOpt;
+ (BOOL)canTTNetThreadPriorityUp;
+ (BOOL)canPreRequestAsync;

@end

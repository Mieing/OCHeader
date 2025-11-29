@interface BDPCutLossesService : NSObject

+ (BOOL)isCutLossesInEffect:(id)a0;
+ (id)cutLossesInfoInEffect:(id)a0;
+ (id)createCutLossesVCWithUniqueID:(id)a0 info:(id)a1 type:(unsigned long long)a2;
+ (BOOL)cutLossesIfNeedWithUniqueID:(id)a0 timing:(unsigned long long)a1 pagePath:(id)a2;
+ (id)cutLossesPromise:(id)a0;
+ (void)stopCutLossesWithUniqueID:(id)a0 isFulfilled:(BOOL)a1;
+ (BOOL)shouldForceColdBootWhenWarmBootWithLaunchParam:(id)a0 uniqueID:(id)a1;
+ (void)updateWhenWarmBootWithUniqueID:(id)a0;
+ (id)sharedLock;

@end

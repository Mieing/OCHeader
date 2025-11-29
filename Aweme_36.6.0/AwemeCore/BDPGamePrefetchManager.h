@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPGamePrefetchManager : NSObject <BDPBootLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *prefetchers;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (id)getSettings;
- (void)applicationPkgUpdateFinishWithMeta:(id)a0;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (BOOL)tryUsePrefetch:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)shouldPrefetch:(id)a0 model:(id)a1 timing:(long long)a2 timeout:(double)a3;
- (void)requestPreloadDataList:(id)a0 completion:(id /* block */)a1;
- (void)prefetch:(id)a0 uniqueID:(id)a1;
- (BOOL)checkAndUpdateModel:(id)a0;
- (void)reportPrefetchHit:(BOOL)a0 model:(id)a1 uniqueID:(id)a2;
- (void)getPreloadDatalist:(id)a0 config:(id)a1;
- (void)getPreloadDataListWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end

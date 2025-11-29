@class BDPUnisusMergeBundleModel, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPUnisusFrontendSDKManager : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _hasInit;
}

@property (retain, nonatomic) BDPUnisusMergeBundleModel *baseBundleModel;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *gBaseBundleModelSemaphore;
@property BOOL needClearCacheAndReload;
@property BOOL isFeedRenderFinished;
@property (nonatomic) long long useV2Value;
@property (nonatomic) long long useV2PresetValue;

+ (void)bootstrapLoad;
+ (void)updateRelativeDataIfNeed;
+ (void)bootstrapLaunch;
+ (id)updateVersionString;
+ (void)tryPreloadAfterUpdateLibIfNeed;
+ (void)clearPreloadMemoryCache;
+ (id)sharedManager;

- (id)getFilePath:(id)a0;
- (id)updateVersionString;
- (id)getBizBundleVersionMap;
- (BOOL)localLibExisted;
- (long long)getBaseBundleV2Value;
- (long long)getBaseBundleV2PresetValue;
- (id)getConfigVersionMap;
- (id)getLocalExistVersionMap;
- (id)getNotifyAndSelectRecordDict;
- (id)annieUpdateVersionString;
- (id)getFilePath:(id)a0 fromBiz:(id)a1;
- (void)resetLocalLibVersionCache;
- (void)checkUpdateWithCompletion:(id /* block */)a0;
- (void)downloadLibWithURL:(id)a0 bundleType:(id)a1 completion:(id /* block */)a2;
- (id)selectBestBaseBundle;
- (void)excuteAfterUnzip:(id /* block */)a0;
- (void)clearCacheAndReloadIfNeeded;
- (id)localBaseVersionString;
- (void)tryInitBaseBundle;
- (void)recordNotifyUpdateTime;
- (id)p_getMergeBundleModel;
- (BOOL)checkBundleModelUpdate:(id)a0 newModel:(id)a1;
- (void)recordSelectTimeOrFailReason:(id)a0;
- (id)getBizVersionIntMapFrom:(id)a0;
- (BOOL)checkBizMapUpdate:(id)a0 newBizMap:(id)a1;
- (void)selectBestBaseBundleAfterCheckUpdate;
- (void)rollBack;
- (void).cxx_destruct;
- (id)init;
- (void)setupManager;

@end

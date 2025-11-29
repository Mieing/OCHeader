@class BDPAnnieBackgroundRuntimePreloadService, NSString, BDPThreadSafeDictionary, BDPPromise, BDPUniqueID, NSObject;
@protocol OS_dispatch_queue;

@interface BDPAnnieViewManager : NSObject <BDPAnnieViewService, BDPWarmBootMessage, BDPAppPreloadMessage, BDPBootLifeCycleMessage> {
    BDPAnnieBackgroundRuntimePreloadService *_lynxRuntimeCacheService;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timelineQueue;
@property (copy, nonatomic) BDPThreadSafeDictionary *lynxPageDict;
@property (copy, nonatomic) BDPThreadSafeDictionary *bgRuntimeModelDic;
@property (copy, nonatomic) BDPThreadSafeDictionary *timelineDict;
@property (retain, nonatomic) BDPAnnieBackgroundRuntimePreloadService *lynxRuntimeCacheService;
@property (weak, nonatomic) BDPPromise *appConfigPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)applicationWarmBootErrorWithUniqueID:(id)a0;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)prepareAnniePageInfoWithModel:(id)a0 uniqueID:(id)a1 startPage:(id)a2;
- (void)preloadAnniePageWithAnnieSchema:(id)a0 enablePrefetch:(BOOL)a1;
- (id)anniePageInfoWithUniqueID:(id)a0;
- (void)addAnnieLoadTimelineWithName:(id)a0 date:(id)a1 uniqueID:(id)a2;
- (void)addAnnieLoadTimelineWithParam:(id)a0 uniqueID:(id)a1;
- (void)uploadAnnieTimelineWithUniqueID:(id)a0;
- (void)appPreloadHasMetaRequestWithModel:(id)a0 preloadSchemaList:(id)a1 error:(id)a2;
- (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
- (void)p_processPreloadAnnieResourceWithModel:(id)a0 schema:(id)a1 error:(id)a2;
- (BOOL)enablePreloadLynxBackgroundRuntime;
- (id)getRuntimeModelUniqueID:(id)a0;
- (id)createLynxBackgroundRuntimeWithUniqueID:(id)a0 groupName:(id)a1;
- (void).cxx_destruct;
- (void)setupManager;

@end

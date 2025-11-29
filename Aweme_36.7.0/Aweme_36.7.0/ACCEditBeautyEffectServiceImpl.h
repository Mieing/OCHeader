@class AWERecordBeautyDataManager, NSArray, ACCCameraSubscription, AWEVideoPublishViewModel, ACCEditBeautyEffectCacheManager, ACCRecordViewControllerInputData, ACCEditBeautyEffectDataManager, NSString;
@protocol IESServiceProvider, ACCCameraService;

@interface ACCEditBeautyEffectServiceImpl : NSObject <ACCEditBeautyEffectDataManagerSubscriberProtocol, AWERecordBeautyDataManagerSubscriberProtocol, ACCEditBeautyEffectService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) ACCEditBeautyEffectDataManager *dataManager;
@property (retain, nonatomic) AWERecordBeautyDataManager *beautyDataManager;
@property (retain, nonatomic) ACCEditBeautyEffectCacheManager *cacheManager;
@property (nonatomic) BOOL isSidebarFloatingViewAppearing;
@property (nonatomic) long long adjustedValue;
@property (copy, nonatomic) NSArray *adjustedEffectIds;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) long long takingEffectGender;
@property (readonly, nonatomic) long long latestDetectedGender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateRenderingData:(id)a0 oldAppliedItemModels:(id)a1;
- (void)didChangeBeautyOnState:(BOOL)a0;
- (void)updateBeautyAvailabilities;
- (void)reloadBeautyInCamera;
- (void)removeBeautyFromCamera;
- (BOOL)isUsingBeauty;
- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)notifySidebarFloatingViewDidAppear;
- (void)notifySidebarFloatingViewDidDisappear;
- (void)notifyBeautyPanelViewDidAppear;
- (void)notifyBeautyPanelViewDidDisappear;
- (BOOL)isBeautyOn;
- (void)markAlgorithmDetectGender:(long long)a0;
- (void)downloadAndUpdateSourceData:(id /* block */)a0 preUseCacheSucceedCallback:(id /* block */)a1;
- (void)checkUpdateSourceDataWithCompletion:(id /* block */)a0 didPreUseCache:(BOOL)a1;
- (void)handleFinishGenerateTree;
- (void)handleFinishDownloadAllItemsAction;
- (void)preUseCacheIfEnableWithGenerateTreeCallback:(id /* block */)a0 didFinishDownloadAllItemsCallback:(id /* block */)a1;
- (id)p_generateDataFilterConfig;
- (BOOL)p_hasValidCache;
- (void)p_migrateDataIfNeeded;
- (void)p_updateStateAfterUpdatingSourceData:(id)a0;
- (BOOL)p_isBeautyAvailableWithResourcePath:(id)a0 tag:(id)a1;
- (BOOL)p_updateComposerNodesIfNeededWithAppliedItemModels:(id)a0 oldAppliedItemModels:(id)a1;
- (void)p_replaceComposerNodesWithAppliedItemModels:(id)a0 oldAppliedItemModels:(id)a1;
- (void)APMApplyEffect:(id)a0;
- (float)p_effectRatioAfterReduction;
- (id)p_convertToVEComposerInfoFromItemModel:(id)a0 shouldUseValue:(BOOL)a1 value:(long long)a2;
- (void)p_updateComposerNodesWithItemModel:(id)a0 appliedModel:(id)a1;
- (long long)p_getABGroup;
- (void)updateAdjustedValue:(long long)a0 effectIds:(id)a1;
- (void)updateSourceDataUsingDownloadedData:(id /* block */)a0;
- (void)upadteTakingEffectGender:(long long)a0;
- (BOOL)hasDownloadedBeautyData;
- (void)updateLastestDetectedGender:(long long)a0;
- (void)saveCacheForGender:(long long)a0;
- (void)saveCacheForGenders:(id)a0;
- (void)removeCacheIfNeeded;
- (void)asyncFetchCachedResponseIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end

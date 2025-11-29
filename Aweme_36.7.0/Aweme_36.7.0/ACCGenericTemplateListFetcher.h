@class NSString, NSArray, AWEBinding, AWEVideoPublishViewModel;
@protocol ACCEditSpecialEffectServiceProtocol, ACCSideslipGenericTemplateService, IESServiceProvider;

@interface ACCGenericTemplateListFetcher : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipGenericTemplateService> templateService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (copy, nonatomic) NSString *rightRecommendKeyForDefault;
@property (copy, nonatomic) NSString *rightRecommendKey;
@property (retain, nonatomic) NSArray *rightDataArrayForDefault;
@property (retain, nonatomic) NSArray *rightDataArray;
@property (nonatomic) double firstFetchStartTime;
@property (nonatomic) double zipURIDuration;
@property (nonatomic) BOOL hasCloudFeature;
@property (nonatomic) BOOL hasTriggeredFetch;
@property (retain, nonatomic) AWEBinding *cloudFeatureBinding;
@property (copy, nonatomic) id /* block */ fetchListCompletion;
@property (copy, nonatomic) NSString *filterPropId;
@property (copy, nonatomic) NSString *recommendScene;
@property (copy, nonatomic) NSArray *shieldTemplate;
@property (copy, nonatomic) id /* block */ didUseCacheDataBlock;
@property (copy, nonatomic) id /* block */ getCustomRecommendPanelNameBlock;
@property (copy, nonatomic) id /* block */ getDefaultIsRecommendBlock;
@property (nonatomic) long long prepareTimeout;

- (void)resetListData;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)setupCloudFeatureObserverIfNeed;
- (id)recommendListWithKey:(id)a0;
- (id)countInfoWithKey:(id)a0;
- (id)cursorInfoWithKey:(id)a0;
- (BOOL)hasMaterials;
- (void)p_fetchTemplateListWithMaterials:(id)a0 isDefault:(BOOL)a1 isAllMaterialsEmpty:(BOOL)a2 completion:(id /* block */)a3;
- (void)checkAndTriggerTemplateFetchIfNeed:(BOOL)a0 localProcessedMaterials:(id)a1 isDefault:(BOOL)a2 isAllMaterialsEmpty:(BOOL)a3 completion:(id /* block */)a4;
- (id)materialsInfo;
- (unsigned long long)trackRequestStartWithMaterialsEmpty:(BOOL)a0;
- (id)recommendKeyWithMaterialsInfoEmpty:(BOOL)a0;
- (id)createTemplateListRequestModelWithKey:(id)a0 isDefault:(BOOL)a1 extraParams:(id)a2;
- (id)filterPropIdWithTemplateList:(id)a0;
- (void)trackRequestEndWithRequestType:(unsigned long long)a0 extraParams:(id)a1 error:(id)a2;
- (void)trackFetchListFromSoftTemplateInsertWithAllTemplateList:(id)a0 insertTemplateList:(id)a1;
- (void)fetchListWithNeedWaitingZipURI:(BOOL)a0 isDefault:(BOOL)a1 didFetchFrameURI:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateRightDefaultDataArray:(id)a0;
- (void).cxx_destruct;

@end

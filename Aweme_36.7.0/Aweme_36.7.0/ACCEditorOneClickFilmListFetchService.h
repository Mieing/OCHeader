@class NPGenericTemplateService_OC, NSString, NSArray, AWEBinding, AWEVideoPublishViewModel, NSMutableArray;
@protocol ACCEditorOneClickFilmService, IESServiceProvider;

@interface ACCEditorOneClickFilmListFetchService : NSObject <ACCEditorOneClickFilmListFetchService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) NSString *finalKey;
@property (nonatomic) unsigned long long fetchListScene;
@property (retain, nonatomic) NSArray *oneClickFilmListArray;
@property (retain, nonatomic) NSMutableArray *completionBlockArray;
@property (retain, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (retain, nonatomic) NPGenericTemplateService_OC *genericTemplateService;
@property (retain, nonatomic) AWEBinding *cloudFeatureBinding;
@property (nonatomic) BOOL isFetchList;
@property (nonatomic) BOOL isFirstFetch;
@property (nonatomic) BOOL hasCloudFeature;
@property (nonatomic) double fetchMaterialsAndTemplateListStartTime;
@property (nonatomic) BOOL hasTriggeredFetch;
@property (copy, nonatomic) id /* block */ fetchListCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOneClickFilmListArray:(id)a0;
- (void)updateRecommendKey:(id)a0;
- (void)updateOneClickFilmListFetchScene:(unsigned long long)a0;
- (void)updateRecommendKeyWithOneClickFilmingScene:(unsigned long long)a0;
- (void)fetchOneClickFilmListCompletion:(id /* block */)a0;
- (void)setupCloudFeatureObserverIfNeed;
- (id)generateRecommendKey:(unsigned long long)a0;
- (void)trackFetchListPerfWithScene:(id)a0 startAllTime:(double)a1 startFetchTemplateListTime:(double)a2 getMaterialsDuration:(double)a3 hasMaterialsFeature:(BOOL)a4 isAIMemory:(BOOL)a5 error:(id)a6;
- (void)fetchListInNewProcedure;
- (void)checkAndTriggerTemplateFetchIfNeed:(BOOL)a0 localProcessedMaterials:(id)a1 completion:(id /* block */)a2;
- (void)p_fetchOneClickFilmListWithMaterials:(id)a0 completion:(id /* block */)a1;
- (id)prepareForGenericTemplateRequestModel;
- (void)trackFetchListFromSoftTemplateInsertWithAllTemplateList:(id)a0;
- (id)recommendListWithKey:(id)a0;
- (id)countInfoWithKey:(id)a0;
- (id)cursorInfoWithKey:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 genericTemplateService:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end

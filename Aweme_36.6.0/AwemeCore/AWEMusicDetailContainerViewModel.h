@class AWEMusicDetailDataContext, AWEMusicDetailShareHelper, AWEMusicDetailCollectionHelper, AWEMusicDetailTrackInstance, NSString, AWEMusicDetailShareToStoryHelper, AWEMusicDetailMusicPlanHelper, NSError, AWEMusicDetailCreateVideoHelper;

@interface AWEMusicDetailContainerViewModel : AWEBaseTabListViewModel

@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (retain, nonatomic) AWEMusicDetailCreateVideoHelper *createVideoHelper;
@property (retain, nonatomic) AWEMusicDetailCollectionHelper *collectionHelper;
@property (retain, nonatomic) AWEMusicDetailShareToStoryHelper *shareToStoryHelper;
@property (retain, nonatomic) AWEMusicDetailShareHelper *shareHelper;
@property (retain, nonatomic) AWEMusicDetailMusicPlanHelper *musicPlanHelper;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (copy, nonatomic) NSString *viewTitle;
@property (retain, nonatomic) NSError *fetchDetailError;
@property (readonly, nonatomic) BOOL hasMultiTabs;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)preloadMusicDataAndBeatsArrayWithMuiscId:(id)a0;
- (void)trackAIFollowShootShow;
- (void)schemaDataVerifyWithRequestParams:(id)a0 responseModel:(id)a1;
- (BOOL)musicDetailRelatedEnable;
- (void)reloadMusicDetailWithCompletion:(id /* block */)a0;
- (void)updateNaviBarTitleWithMusicModel:(id)a0;
- (void)preloadShootResourceWithMusic:(id)a0;
- (void)setupTabList;
- (void)updateMusicTitleWithResponse:(id)a0;
- (void)updateCollectedStateWithResponse:(id)a0 isFromCache:(BOOL)a1;
- (void)preloadShareMusicToStoryEffectsWithResponse:(id)a0;
- (void)trackRelatedList:(id)a0 dataContext:(id)a1;
- (void)trackMusicDetailReadyToShowWithDataContext:(id)a0;
- (void)preloadTemplateDataWithMusicId:(id)a0;
- (void)trackEnterMusicDetailWithModel:(id)a0;
- (id)activityMobParams;
- (id)extraInfoParams;
- (id)lastGroupOriginMaterialsListJSONStringEncoded;
- (id)relatedMusicNavigationTitle;
- (void).cxx_destruct;
- (void)dealloc;

@end

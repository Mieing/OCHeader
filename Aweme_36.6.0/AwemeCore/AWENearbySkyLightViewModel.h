@class AWENearbySettingsManager, NSMutableDictionary, NSString, AWENearbySettingsResponse, NSMutableArray;

@interface AWENearbySkyLightViewModel : AWEBaseViewModel <AWEUserMessage>

@property (retain, nonatomic) AWENearbySettingsResponse *settingResponse;
@property BOOL loginSuccess;
@property BOOL logoutSuccess;
@property BOOL loginFromNearby;
@property (retain, nonatomic) NSMutableArray *trackFilterArray;
@property (nonatomic) BOOL trackCollectTitle;
@property (nonatomic) BOOL trackRecommendTitle;
@property (nonatomic) double topInset;
@property (nonatomic) BOOL needRefreshTransformerByOfflineGuide;
@property (nonatomic) BOOL isSkylightUIChange;
@property (nonatomic) BOOL isSkylightGuideAnimationing;
@property (retain, nonatomic) NSMutableDictionary *skylightDiffHeightCache;
@property (nonatomic) double stackViewHeight;
@property (retain, nonatomic) AWENearbySettingsManager *settingsManager;
@property (readonly, nonatomic) BOOL userLocationUpdateTriger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowIconSloganWithGuideModel:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)requireLogin;
- (void)updateTopInset:(double)a0;
- (double)skyLightHeight;
- (BOOL)enableTransformerDSL;
- (void)cardRefreshWithParams:(id)a0 refreshType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateCurrentSettingResponse:(id)a0;
- (double)skyLightContentHeight;
- (void)onViewDidAppear;
- (void)updateSettingsManager:(id)a0;
- (double)stackViewOffsetY;
- (void)updateIsSkylightGuideAnimationing:(BOOL)a0;
- (void)updateNeedRefreshTransformerByOfflineGuide:(BOOL)a0;
- (BOOL)enableLynxSkyLight;
- (BOOL)enableLowLineSkyLight;
- (BOOL)isInXTab;
- (double)skyLightHeightWithModel:(id)a0;
- (void)trackShowAnimated:(BOOL)a0;
- (void)trackClick:(id)a0;
- (void)trackClickCardWithPOI:(id)a0 isRecommend:(BOOL)a1;
- (void)trackShowCardWithPOI:(id)a0 isRecommend:(BOOL)a1;
- (void)trackShowCardTitleWithRecommend:(BOOL)a0;
- (void)refreshSettingsWithRefreshType:(unsigned long long)a0 complete:(id /* block */)a1;
- (BOOL)shouldShowTransformersView;
- (double)elementHeightWithType:(unsigned long long)a0 setting:(id)a1;
- (void)updateStackViewHeight:(double)a0;
- (id)stickyPOIIDWithIndex:(long long)a0;
- (id)stickyPOIItemIDWithIndex:(long long)a0;
- (id)defaultStickyPOIID;
- (id)defaultStickyPOIItemID;
- (id)fixedPOIListIDs;
- (void)updateIsSkylightUIChange:(BOOL)a0;
- (double)skyLightContentHeightWithModel:(id)a0;
- (double)__dslConatinerHeightWithSetting:(id)a0;
- (double)__lynxSkyLightHeightWithSetting:(id)a0;
- (double)__lowLineSkyLightHeightWithSetting:(id)a0;
- (BOOL)isInNearbyFullScreen;
- (long long)lynxSkylightTopHeadHeight;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillEnterForeground;
- (void)dealloc;

@end

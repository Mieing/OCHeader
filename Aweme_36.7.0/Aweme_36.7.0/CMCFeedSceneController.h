@interface CMCFeedSceneController : CMCSceneController

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;
+ (void)p_setAwemeNeedPreRenderWeb:(id)a0;
+ (BOOL)p_awemeNeedPreRenderWebForNow:(id)a0;
+ (void)preRenderAwemeIfNeed:(id)a0;
+ (void)p_cancelAwemeNeedPreRerenderWeb:(id)a0;

- (long long)pricingTypeWith:(id)a0;
- (id)jsonStringToDictionary:(id)a0;
- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (void)setupDolphinFeatureCenter;
- (id)lastShowedAdModelConfig;
- (void)updateLastshowedAdModelConfigWithModel:(id)a0;
- (void)willDisplayCellWithContext:(id)a0 indexPath:(id)a1;
- (void)didEndDisplayingCellWithContext:(id)a0 indexPath:(id)a1;
- (void)bizDowngradeAsyncAdGapInfoTracker;
- (void)receiveAweme:(id)a0;
- (void)updateAdAwemeInfoWithTotalDataList:(id)a0 newDataList:(id)a1 awemeType:(long long)a2;
- (void)updateAdAwemeInfoWithNewTotalList:(id)a0 newDataList:(id)a1 originDataList:(id)a2;
- (void)handleOldDataSource:(id)a0;
- (void)commerceHandleResponseModel:(id)a0 awemeType:(long long)a1;
- (void)preloadAdVideoAndAdSource:(id)a0 withAwemeType:(long long)a1;
- (void)reportSpalashTrackWithAwemeResponseModel:(id)a0;
- (void)getFeedAdCommonParams:(id)a0 type:(long long)a1;
- (void)filterBindAds:(id)a0 awemeType:(long long)a1;
- (void)preloadVideoWithModel:(id)a0 withAwemeType:(long long)a1;
- (void)p_insertAdHotSpotLynxCardModelIfNeeded:(id)a0;
- (void)trackSpiderManMpShow:(id)a0 aweme:(id)a1;
- (void)removeBrowseRecordIfNeeded:(id)a0;
- (long long)getAwemeShowIndexInDayDemension;
- (long long)getAwemeFlowTypeWith:(id)a0;
- (BOOL)getAwemeHasShoppingCartWith:(id)a0;
- (long long)getAwemeVideoTypeWith:(id)a0;
- (BOOL)shouldTrackShowInteractiveVideo:(id)a0 indexPath:(id)a1;
- (void)trackAdGapInfoWithModel:(id)a0 indexPath:(id)a1 context:(id)a2;
- (BOOL)isEcommerceLiveNewPreViewStyle:(id)a0;
- (id)generateLastFeedListInfoWithContext:(id)a0 curAwemeModel:(id)a1 curIndex:(long long)a2;
- (id)p_brightnessDictWithModel:(id)a0;
- (void)setNeedsTrackLiveAdWithOpenURL:(id)a0;
- (void)trackDouPlusVideoShowIfNeeded:(id)a0 referString:(id)a1;
- (void)cacheFeed:(id)a0 awemeType:(long long)a1;
- (long long)countIndex;
- (void)setCountIndex:(long long)a0;
- (void)setLastShowedAdModelConfigWithModel:(id)a0;
- (id)p_metaDictWithModel:(id)a0;
- (id)collectAwemeItemIDsWithAwemes:(id)a0;
- (id)lastDate;
- (void)setLastDate:(id)a0;
- (void)sceneDidLoad;

@end

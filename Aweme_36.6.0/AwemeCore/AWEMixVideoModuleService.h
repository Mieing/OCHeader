@class NSString;

@interface AWEMixVideoModuleService : HTSService <AWEMixVideoModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestMixVideoDetailList:(id)a0 cursor:(id)a1 count:(id)a2 pullDown:(BOOL)a3 completeBlock:(id /* block */)a4;
- (id)mixInformationListViewControllerWith:(id)a0 enterFrom:(id)a1;
- (id)mixInformationListViewControllerWithBatchUpdateModels:(id)a0 enterFrom:(id)a1;
- (id)mixDetailInformationListViewWithType:(long long)a0;
- (BOOL)mixFilterTipEnable;
- (BOOL)shouldScaleVideoWhenPanelShow:(id)a0;
- (void)getCurrentLoginUserFirstMix:(id /* block */)a0;
- (void)requestMixVideoDetailInfo:(id)a0 completion:(id /* block */)a1;
- (id)mixJSBNotificationName;
- (BOOL)getCurrentLoginUserCreateMixPremission;
- (void)requestCurrentLoginUserMixCountWithCompletion:(id /* block */)a0;
- (id)createMixURLStringForPostPageWithScene:(id)a0;
- (long long)getCurrentLoginUserCreateMixCount;
- (BOOL)isSupportMixCreate:(id)a0;
- (BOOL)isPrivate:(id)a0;
- (Class)mixVideoShareManagerClass;
- (Class)mixVideoLogManagerClass;
- (BOOL)enableMixVideoLog;
- (BOOL)showHint:(id)a0 model:(id)a1;
- (id)cacheMixVideoControllerWithModel:(id)a0 dataController:(id)a1 delegate:(id)a2 currentAwemeModel:(id)a3;
- (double)mixBigFontValueWithCGFloatNormalValue:(double)a0 middleValue:(double)a1 largeValue:(double)a2;
- (id)mixBigFontValueWithUIFontNormalValue:(id)a0 middleValue:(id)a1 largeValue:(id)a2;
- (struct CGSize { double x0; double x1; })mixBigFontValueWithCGSizeNormalValue:(struct CGSize { double x0; double x1; })a0 middleValue:(struct CGSize { double x0; double x1; })a1 largeValue:(struct CGSize { double x0; double x1; })a2;
- (void)requestMixVideoDetailInfo:(id)a0 skipLocalCache:(BOOL)a1 completeBlock:(id /* block */)a2;
- (void)requestMixTabWithUserID:(id)a0 cursor:(id)a1 mixCount:(id)a2 awemeCount:(id)a3 currMixID:(id)a4 startEpisode:(id)a5 completeBlock:(id /* block */)a6;
- (id)getDefaultAWEMixVideoDetailPlayListDataController;
- (id)getMixVideoListDataControllerWithModel:(id)a0;
- (id)getMixVideoListDataController;
- (id)getMixVideoRelatedListDataController;
- (Class)mixVideoDetailPlayListDataControllerClass;
- (Class)mixVideoListDataControllerClass;
- (Class)mixMiniDetailDataControllerClass;
- (id)mixVideoEpisodeSegmentView;
- (id)getFeedMixCollectionGuideManager;
- (id)mixVideoCollectionGuideManager;
- (void)requestBatchMixUnCollectionWithMixId:(id)a0 batchMixIds:(id)a1 completeBlock:(id /* block */)a2;
- (id)mixVideoCollectionButton;
- (void)requestLoginBeforeMixCollectWithCompleteBlcok:(id /* block */)a0;
- (void)requestMixCollectWithMixId:(id)a0 action:(unsigned long long)a1 completeBlock:(id /* block */)a2;
- (void)mixWatchedReportWithMixID:(id)a0 itemID:(id)a1 cursor:(id)a2 completeBlock:(id /* block */)a3;
- (BOOL)isFromMixPlayPageWithReferString:(id)a0;
- (void)saveMixID:(id)a0 playCurrentEpisode:(id)a1;
- (id)mixExtraParamsForAwemeStatsWithAweme:(id)a0;
- (void)trackCompilationBannedToastShow:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2;
- (void)trackCompilationMonitorWithMixVideoModel:(id)a0 error:(id)a1 enterFrom:(id)a2;

@end

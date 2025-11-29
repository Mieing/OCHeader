@class NSString;

@interface AWEShowPlayletModuleService : HTSService <AWEShowPlayletModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showTrackerWithEvent:(id)a0 model:(id)a1 withObject:(id)a2 customParams:(id)a3;
+ (id)showTrackerGetCommonParams:(id)a0 model:(id)a1 withObject:(id)a2 customParams:(id)a3;
+ (id)showTrackerGetCommonParamsForBillPageWithModel:(id)a0 withObject:(id)a1;
+ (id)showTrackerGetCommonParamsForBillPageWithModel:(id)a0 withObject:(id)a1 customParams:(id)a2;
+ (void)registerAllShowTrackerWithParams:(id)a0 attachTo:(id)a1;
+ (void)registerAllShowTrackerWithParams:(id)a0 attachTo:(id)a1 async:(BOOL)a2;
+ (void)setShowUniversalParamsInPlayletWithFromGroupId:(id)a0;
+ (void)showTrackerManagerWithFromGroupId:(id)a0 referString:(id)a1;
+ (id)getShowUniversalParams;
+ (id)showTrackerGetMixCommonParams:(id)a0 mixInfo:(id)a1 withObject:(id)a2 customParams:(id)a3;
+ (id)showTrackerGetLongVideoCommonParams:(id)a0 longVideoInfo:(id)a1 withObject:(id)a2 customParams:(id)a3;
+ (id)showTrackerGetPlayletCommonParams:(id)a0 playletInfo:(id)a1 withObject:(id)a2 customParams:(id)a3;
+ (void)updateSearchCardContextProvider:(id)a0;
+ (id)searchCardContextProvider;
+ (long long)searchCardItemCount;
+ (BOOL)enablePlayletTabShowReVisitTime;
+ (BOOL)enablePlayletTabHistoryLocalInsert;
+ (BOOL)enablePlayletTabMaxDiggLocalInsert;
+ (BOOL)enablePlayletHightDanmaku;
+ (BOOL)enablePlayletFeedCard:(id)a0;
+ (id)configCleanModeStoryCellMask:(id)a0 inView:(id)a1;
+ (void)showTrackerManagerWithLongVideoFromGroupId:(id)a0 LongVideoFromAlbumID:(id)a1 referString:(id)a2;
+ (void)showTrackerManagerWithPlayletADUniversalParameters:(id)a0 referString:(id)a1 isCompensate:(BOOL)a2;
+ (id)getPlayletADUniversalParameters;
+ (void)showTrackerManagerWithPlayletADModelLogExtraStr:(id)a0 referString:(id)a1 isCompensate:(BOOL)a2;
+ (id)getPlayletADModelLogExtraStr;
+ (long long)playletCenterInsertStyle;
+ (BOOL)enablePlayletNewDetail;
+ (id)PlayletDetailClsString;
+ (BOOL)shouldPlayletBottomShowPlayletCenterEntry;
+ (long long)playletCenterFeedColumn;
+ (BOOL)shouldPlayletTabSwitchCard;
+ (BOOL)isSeriesTabThreeColumnUser;
+ (long long)playletTabDefaultStyle;
+ (long long)playletTabSwitchCardType;
+ (id)guidanceButtonAttributedStringWithPrefixText:(id)a0 richText:(id)a1;
+ (BOOL)shouldPlayletTabSwitchCardFromCapsule;
+ (BOOL)enablePlayletTabVideoFirstFrameOptV2;
+ (BOOL)enablePlayletTabCacheVideoDownload;
+ (long long)playletTabCacheVideoDownloadSize;
+ (long long)playletTabCacheVideoExpiredTimeOffset;
+ (BOOL)enablePlayletThreeColumnFirstFrameOpt;
+ (BOOL)enablePlayletThreeColumnCoverPreload;
+ (BOOL)enablePlayletThreeColumnPreRequestAweme;
+ (id)adUniversalParametersWithModel:(id)a0;
+ (id)getAdUniversalParametersWithModel:(id)a0;
+ (BOOL)isOpenAdParametersOptimization;
+ (id)attributionParametersForModel:(id)a0;
+ (id)getPlayletCommentHeaderTrackerCommonParams:(id)a0;
+ (double)getPlayletCommentHeaderHeight;
+ (id)getPlayletCommentHeaderWithAwemeModel:(id)a0 logExtra:(id)a1;
+ (BOOL)shouldShowPlayletCommentHeaderWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)uploadReCreationVideoWatchRecord:(id)a0 tagId:(long long)a1 progress:(long long)a2 completion:(id /* block */)a3;
+ (void)cacheReCreationTCRData:(id)a0;
+ (id)getCachedReCreationTCRData;
+ (void)showPlayletCollectTaskRewardLynxPopup:(id)a0;
+ (id)requestPlayletVideoList:(id)a0 cursor:(long long)a1 count:(long long)a2 pullDown:(BOOL)a3 disableInsertAd:(long long)a4 requestParams:(id)a5 completeBlock:(id /* block */)a6;
+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (id)playletTabCacheVideoDownloadConfig;

- (BOOL)updatePlayletIncentivePendantTaskSceneIfNeeded:(id)a0;
- (id)aAWEMainModuleDOUYINLiteAdapter;

@end

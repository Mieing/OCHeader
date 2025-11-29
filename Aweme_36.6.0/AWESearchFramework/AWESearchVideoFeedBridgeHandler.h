@interface AWESearchVideoFeedBridgeHandler : NSObject

+ (BOOL)isAddBtmUpdate;
+ (BOOL)shouldShowUserGuideViewInFlow;
+ (void)openMixVideoSelectChaptersController:(id)a0 awemeList:(id)a1 awemeIndex:(long long)a2 referString:(id)a3 logExtra:(id)a4 delegate:(id)a5 params:(id)a6;
+ (id)awemeListWithParams:(id)a0;
+ (id)lynxToAwemeTableViewControllerWithParams:(id)a0 referString:(id)a1 routerParams:(id)a2 logExtraDict:(id)a3;
+ (void)updateAwemeListWithParams:(id)a0 sessionid:(id)a1;
+ (BOOL)isNeedNewEntrance;
+ (void)videoExperienceTrack:(id)a0 lynxContainer:(id)a1;
+ (long long)_videoFeedIndex:(long long)a0 withIdList:(id)a1;
+ (id)_videoFeedAwemeList:(id)a0 withIdList:(id)a1;
+ (BOOL)preLynxToAwemeTable:(id)a0 enterParams:(id)a1 params:(id)a2;
+ (void)mixVideoFeedWithContextProvider:(id)a0 params:(id)a1 referString:(id)a2 enterParams:(id)a3 outerDataController:(id)a4;
+ (BOOL)searchResultGuideViewHasDismiss;
+ (id)getSearchTopicBottomViewPublishContext:(id)a0;
+ (id)getSearchTopicBottomViewPublishContext;
+ (id)extractShootParamsFromExtraDict:(id)a0;
+ (id)detailBottomInfoForShootParams:(id)a0 withModel:(id)a1;
+ (BOOL)isElementSearchVirtualItem:(id)a0;
+ (void)videoExperienceTrackTransitionSuccess:(id)a0 enterFrom:(id)a1;
+ (void)_propVideoFeedWithLynxContainer:(id)a0 params:(id)a1 videoFeedIndex:(long long)a2 videoFeedArray:(id)a3 referString:(id)a4 logExtraDict:(id)a5 needTransition:(BOOL)a6;
+ (void)_mvVideoFeedWithLynxContainer:(id)a0 params:(id)a1 videoFeedIndex:(long long)a2 videoFeedArray:(id)a3 referString:(id)a4 logExtraDict:(id)a5 needTransition:(BOOL)a6;
+ (void)_enterHotSpotFeedWithLynxContainer:(id)a0 enterParams:(id)a1;
+ (id)openEcommerceVideoFeedWithLynxContainer:(id)a0 contextProvider:(id)a1 params:(id)a2 videoFeedIndex:(long long)a3 videoFeedArray:(id)a4 referString:(id)a5 searchvideoWatchedMonitorBlock:(id /* block */)a6;
+ (void)openEcomPhotoFeedWithLynxContainer:(id)a0 params:(id)a1;
+ (id)playletVideoFeedWithContextProvider:(id)a0 params:(id)a1 referString:(id)a2 enterParams:(id)a3 needTransition:(BOOL)a4;
+ (void)propVideoFeedWithContextProvider:(id)a0 index:(long long)a1 awemeList:(id)a2 stickerId:(id)a3 referString:(id)a4 enterFrom:(id)a5 logExtraDict:(id)a6 needTransition:(BOOL)a7;
+ (void)mvVideoFeedWithContextProvider:(id)a0 index:(long long)a1 awemeList:(id)a2 stickerId:(id)a3 referString:(id)a4 enterFrom:(id)a5 logExtraDict:(id)a6 needTransition:(BOOL)a7;
+ (long long)videoFeedIndexInVideoFeedArray:(id)a0 awemeID:(id)a1;
+ (id)generalLynxCellControllerFor:(id)a0;
+ (id)redirectEnterIndexAndArrayFor:(id)a0 params:(id)a1 lynxContainer:(id)a2 generalLynxCellController:(id)a3;
+ (BOOL)substitudeBriefAwemeAndCheckValidToEnter:(id)a0;
+ (id /* block */)videoDetailedWatchedBlock:(id)a0 lynxContainer:(id)a1;
+ (void)lynxContainerWillEnterFullScreen:(id)a0 lynxContainer:(id)a1 generalLynxCellController:(id)a2;
+ (id)getMixVideoDetailPlayListDataController:(id)a0 mixId:(id)a1;
+ (void)enterMixVideoFeedWithContextProvider:(id)a0 params:(id)a1 referString:(id)a2 awemeIndex:(long long)a3 awemeList:(id)a4 outerDataController:(id)a5;
+ (void)trackMixPanelShow:(id)a0 mixId:(id)a1 awemeModel:(id)a2;
+ (void)openImageFullPageWithParams:(id)a0;
+ (void)searchVideoFeedWithContextProvider:(id)a0 index:(long long)a1 awemeList:(id)a2 referString:(id)a3 enterFrom:(id)a4 logExtraDict:(id)a5;

@end

@class NSString, UIImageView;

@interface AWEWatchVideoLaterManager : NSObject <AFDSnackBarViewDelegate, AWEWatchVideoLaterManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLandscapeWatchLaterRequiringLogin;
@property (weak, nonatomic) UIImageView *leftSideBarImageView;

+ (Class)aAWEBrandColorAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (double)adaptiveSizeValue:(double)a0 middle:(double)a1 large:(double)a2;
+ (double)adaptiveValueWithDefault:(double)a0 middle:(double)a1 large:(double)a2;
+ (Class)aAWEWatchVideoLaterAdapterClass;
+ (id)sharedInstance;

- (id)aAWEBrandColorAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)canShowAddWatchVideoLater:(id)a0 referString:(id)a1;
- (void)addToWatchVideoLater:(id)a0 withEnterMethod:(id)a1 referString:(id)a2 repeatTrack:(BOOL)a3 showResultToast:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)shouldExpandWatchLaterScene;
- (void)handleWatchVideoLaterChangeWithDataSource:(id)a0 changeParams:(id)a1;
- (id)aAWEWatchVideoLaterAdapter;
- (void)removeWatchLaterItemIDList:(id)a0 action:(long long)a1 exemptItemIDList:(id)a2 completion:(id /* block */)a3;
- (void)addToWatchVideoLaterWithModelArray:(id)a0 enterMethod:(id)a1 referString:(id)a2 fromSource:(long long)a3 completion:(id /* block */)a4;
- (void)trackAddResult:(BOOL)a0 msg:(id)a1 referString:(id)a2 logId:(id)a3 forModel:(id)a4;
- (void)updateWatchLaterInfoWithPlayInfoArray:(id)a0 fromSource:(long long)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)addToWatchVideoLater:(id)a0 withEnterMethod:(id)a1 referString:(id)a2 repeatTrack:(BOOL)a3 showResultToast:(BOOL)a4 successTitle:(id)a5 logExtra:(id)a6 completion:(id /* block */)a7;
- (void)showNewAddWatchLaterResult:(BOOL)a0 msg:(id)a1 enterMethod:(id)a2 referString:(id)a3 addedModel:(id)a4 successTitle:(id)a5;
- (void)showAddWatchLaterResult:(BOOL)a0 msg:(id)a1 enterMethod:(id)a2 referString:(id)a3 addedModel:(id)a4;
- (void)updateWatchLaterInfoWithModel:(id)a0 progress:(double)a1 loopCount:(long long)a2 actionType:(long long)a3 completion:(id /* block */)a4;
- (void)removeWatchLaterItemID:(id)a0 action:(long long)a1 completion:(id /* block */)a2;
- (BOOL)shouldShowLeftSideBarGuide;
- (void)showWatchVideoLaterListPage:(id)a0 enterMethod:(id)a1 addedID:(id)a2;
- (void)tryShowSidebarGuide:(id)a0;
- (BOOL)enablewShoSidebarGuide;
- (void)markHasShowLeftSideBarGuide;
- (id)disableWatchLaterAwemeType;
- (id)snackBarSuperView;
- (void)addToWatchVideoLater:(id)a0 withEnterMethod:(id)a1 referString:(id)a2;
- (void)removeWatchVideoLater:(id)a0 withEnterMethod:(id)a1 referString:(id)a2 showResultToast:(BOOL)a3 logExtra:(id)a4 completion:(id /* block */)a5;
- (void)updateWatchLater:(id)a0 progress:(double)a1 loopCount:(long long)a2;
- (void)shwoWatchVideoDetailPage:(id)a0 logExtra:(id)a1;
- (void)showWatchVideoDetailPageWithDataController:(id)a0 paramsDict:(id)a1;
- (void)showWatchVideoDetailPage:(id)a0 startIndex:(long long)a1 referString:(id)a2 logExtra:(id)a3;
- (id)getWatchVideoDetailPage:(id)a0;
- (id)getWatchVideoListViewController:(id)a0;
- (id)getWatchVideoFinishedListViewController:(id)a0;
- (void)removeWatchLaterWithModel:(id)a0 action:(long long)a1 completion:(id /* block */)a2;
- (BOOL)shouldContinuePlay:(id)a0 referString:(id)a1;
- (BOOL)didAddedToWatchVideoLater:(id)a0;
- (BOOL)mvchannelWatchLaterEnable:(id)a0 referString:(id)a1;
- (BOOL)relatedVideoWatchLaterEnable:(id)a0 referString:(id)a1;
- (BOOL)relatedVideoLandscapeWatchLaterEnable:(id)a0 referString:(id)a1;
- (long long)mvchannelWatchLaterType;
- (void)showWatchVideoLaterPopoverIfNeededTarget:(id)a0 content:(id)a1;
- (BOOL)enableUpdateWatchLaterInfoInBackgroundMode;
- (id)whiteListForWatchLaterEntryInFeed;
- (void).cxx_destruct;

@end

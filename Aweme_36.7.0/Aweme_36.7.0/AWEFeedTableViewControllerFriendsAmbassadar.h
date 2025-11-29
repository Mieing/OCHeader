@class NSString, NSDictionary, AWEAwemeModel, NSDate, NSObject, UIViewController;
@protocol AFDViewerRecordGuideViewControllerProtocol, AWEUserRecommendCardTrackManagerProtocol, AWEFeedTableViewControllerFriendsAmbassadarDelegate;

@interface AWEFeedTableViewControllerFriendsAmbassadar : AFDAmbassador <AWEFeedTableViewControllerFriendsAmbassadarProtocol>

@property (retain, nonatomic) NSObject<AWEUserRecommendCardTrackManagerProtocol> *tracker;
@property (weak, nonatomic) id<AWEFeedTableViewControllerFriendsAmbassadarDelegate> delegate;
@property (nonatomic) BOOL hasShowLastViewForFamiliar;
@property (copy, nonatomic) NSString *lastFamiliarAweme;
@property (nonatomic) long long quicklySlideFriendsFeedCount;
@property (nonatomic) BOOL shouldShowQuicklySlideMaskInFriendsFeed;
@property (retain, nonatomic) AWEAwemeModel *needInsertModel;
@property (weak, nonatomic) UIViewController *recordNavVC;
@property (nonatomic) unsigned long long slideDirection;
@property (nonatomic) BOOL shouldPresentWithTransition;
@property (nonatomic) long long awemeOrder;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (copy, nonatomic) NSDictionary *trackOutPushFirstImpressionDic;
@property (retain, nonatomic) NSDate *recommendCardShowTime;
@property (retain, nonatomic) UIViewController<AFDViewerRecordGuideViewControllerProtocol> *viewerRecodeGuideVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFamiliarFullscreen;
- (id)makeUserProfileURLStringWithURLString:(id)a0 model:(id)a1 author:(id)a2;
- (void)momentDidPublishNotification:(id)a0;
- (BOOL)shouldDisableTransitionWithModel:(id)a0;
- (BOOL)refreshStateOfFamiliarEmptyHintViewController;
- (void)insertAwemeAfterInitialFetchIfNeeded;
- (void)handleLoadMore;
- (void)showQuicklySlideGuideMaskInFriendsFeedIfNeededWithPlayingTime:(double)a0 currentCell:(id)a1 willDisplayCell:(id)a2;
- (void)insertStoryWithAweme:(id)a0 showCount:(long long)a1 atIndex:(long long)a2 deleteOriginRowBlock:(id /* block */)a3 insertNewRowBlock:(id /* block */)a4 reloadRowBlock:(id /* block */)a5;
- (void)trackResponseWithList:(id)a0 error:(id)a1 enterFrom:(id)a2;
- (long long)showToastPositionInCell:(id)a0 withDataController:(id)a1;
- (unsigned long long)getReadAllRecAwemeTipsViewType;
- (id)getReadAllRecAwemeTipsModel;
- (void)p_trackRecommendUnplayToastShow;
- (unsigned long long)getLastViewType;
- (id)getLastViewModel;
- (void)p_trackShowReturnGuide;
- (void)removeQuicklySlideMaskWithCurrentCell:(id)a0 willDisplayCell:(id)a1;
- (id)getModelWithItemID:(id)a0;
- (void)updateFamiliarEmptyHintViewControllerState;
- (void)removeFamiliarEmptyHintViewController;
- (void)insertStoryWithAweme:(id)a0 showCount:(long long)a1 atIndex:(long long)a2 dataController:(id)a3 referString:(id)a4 deleteOriginRowBlock:(id /* block */)a5 insertNewRowBlock:(id /* block */)a6 reloadRowBlock:(id /* block */)a7;
- (void)insertStory25WithAweme:(id)a0 showCount:(long long)a1 atIndex:(long long)a2 deleteOriginRowBlock:(id /* block */)a3 insertNewRowBlock:(id /* block */)a4 reloadRowBlock:(id /* block */)a5;
- (long long)indexForInsertItemAsStory25InMultiContainer:(id)a0;
- (void)postRemotePlayFeedDidScrollToAwemeNotification;
- (void)showMaskViewIfNeed:(id)a0;
- (void)showFamiliarLastViewIfNeeded;
- (void)updateFamiliarEmptyHintViewControllerStateIfNeeded;
- (void)trackFollowCardSlideUpWithModel:(id)a0;
- (void)viewDidDisappearWithSlideModel:(id)a0 extraInfo:(id)a1;
- (BOOL)shouldInsertItemAsStory25InMultiContainer:(id)a0;
- (void)showQuicklySlideGuideMaskWithCurrentCell:(id)a0 willDisplayCell:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

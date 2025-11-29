@class NSString, AWERVDrawBackView, AWERelatedVideoMultiTabListView, UIView;

@interface AWERVMediumVideoController : AWERVBaseController <AWERVScrollViewProtocol>

@property (retain, nonatomic) AWERelatedVideoMultiTabListView *multiTabListView;
@property (retain, nonatomic) AWERVDrawBackView *drawBackView;
@property (retain, nonatomic) UIView *fakeSliderBackupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (BOOL)shouldPreventPause;
- (void)bindObserver;
- (void)bindEvent;
- (void)refreshWithAwemeModel:(id)a0;
- (void)onWatchVideoLaterChangeNotification:(id)a0;
- (void)willEnterFullScreenWithEnterMethod:(id)a0;
- (void)slidingToRelatedVideoTap;
- (void)slidingToCommentTap;
- (void)afterViewDidLoad;
- (void)setupPageBeforeSetupUI;
- (void)setupUIBeforeAddContainerVC;
- (void)refreshWithUIAfterVideoPlayerFrameUpdate;
- (void)refreshWithUIAfterUpdateContentSize;
- (void)didRefreshWithUI;
- (void)didRefreshWithAwemeModel:(id)a0;
- (void)prepareToBack;
- (void)player:(id)a0 willPlayNextVideo:(id)a1 isMixVideo:(BOOL)a2;
- (void)scrollViewDidScrollAfter:(id)a0;
- (void)tryScrollAnimateTagListView;
- (void)resetMultiTabListViewIfNeed;
- (void)syncPlaybackTimeWhenBackToFeed;
- (void)tryShowOrHideMultiTabAnimationInTabMoveupV3;
- (void)tryShowMultiTabAnimation;
- (void)tryHideMultiTabAnimation;
- (BOOL)shouldRecognizeSimultaneously:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end

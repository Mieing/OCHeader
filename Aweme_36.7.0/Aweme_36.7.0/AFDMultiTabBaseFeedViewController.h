@class NSString, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AFDContainerViewControllerDelegate;

@interface AFDMultiTabBaseFeedViewController : UIViewController <AWEFeedTabItemViewControllerProtocol, AFDMultiTabChannelEventProtocol, AFDContainerViewControllerDelegateProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *feedTableVC;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFDContainerViewControllerDelegate> containerDelegate;

- (void)pauseWithAnimation;
- (BOOL)isRelatedVideoPanelShowing;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (id)currentAweme;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)seekPlayTimeWithItemID:(id)a0;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isShowingFollowGroupPanel;
- (void)setRefreshMethod:(id)a0;
- (id)currentAwemeID;
- (BOOL)isSkylightUnfolded;
- (void)animateLoadingWithCompletion:(id /* block */)a0;
- (void)refreshWithContainerAnimation:(id /* block */)a0;
- (BOOL)isPinchedToPurePage;
- (id)familiarNavView;
- (id)familiarSegmentControl;
- (id)homeSkylightContext;
- (void)handleContainerPanGesture:(id)a0 withPanType:(unsigned long long)a1;
- (id)homepageSkylightAccessApproach;
- (void)setContainerPureMode:(BOOL)a0;
- (void)setContainerRefreshing:(BOOL)a0;
- (BOOL)isCommentPanelShowing;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (BOOL)isPlaying;
- (void)stop;
- (id)currentCell;

@end

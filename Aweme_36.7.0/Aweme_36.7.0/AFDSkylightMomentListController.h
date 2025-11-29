@class AFDSkylightMomentCellTracker, NSString, NSDictionary, UIView, AFDCloseFriendsColorRingBubbleManager;
@protocol AFDSkylightMomentListControllerDelegate, AWEIMOnlineContactAvatarListV2ViewProtocol, AFDCloseFriendsStoryCircleShowTrackerProtocol;

@interface AFDSkylightMomentListController : NSObject <AWEZoomTransitionOuterContextProvider, AFDCloseFriendsColorRingBubbleManagerDelegate, AFDCloseFriendsMessage, AFDSkylightMomentListControllerProtocol>

@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (nonatomic) BOOL momentDisabled;
@property (weak, nonatomic) UIView<AWEIMOnlineContactAvatarListV2ViewProtocol> *skylightView;
@property (weak, nonatomic) id<AFDSkylightMomentListControllerDelegate> delegate;
@property (retain, nonatomic) id<AFDCloseFriendsStoryCircleShowTrackerProtocol> storyCircleShowTracker;
@property (retain, nonatomic) AFDCloseFriendsColorRingBubbleManager *bubbleManager;
@property (retain, nonatomic) AFDSkylightMomentCellTracker *cellTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)zoomTransitionShrinkFinish;
- (void)registerMessages;
- (void)unregisterMessages;
- (void)momentWillLandingToSkylight:(BOOL)a0 hasVCInited:(BOOL)a1;
- (void)closeFriendsDidUpdatedUserSetting:(BOOL)a0;
- (id)zoomTransitionStartViewForMoment;
- (BOOL)canResponseSelectCellWithRingInfo:(id)a0;
- (void)didSelectMomentColorRing:(id)a0;
- (long long)showBubblePotentialMaxCount;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forRingInfo:(id)a2 atIndexPath:(id)a3;
- (void)didRefreshData;
- (id)skylightZoomProvider;
- (id)getPageVC;
- (void)reloadSkylightView;
- (void)transferToMomentCameraFromScene:(unsigned long long)a0;
- (void)trackStoryCircleClickEventWithUid:(id)a0 fromScene:(unsigned long long)a1 extraDict:(id)a2;
- (void)transferToMomentCamera;
- (void)transferToMyMomentFeed;
- (void)transferToOthersMomentFeedWithUid:(id)a0;
- (void)preloadMomentImageIfNeededWithRingInfo:(id)a0;
- (void)didClickPlusIconWithMomentColorRing:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end

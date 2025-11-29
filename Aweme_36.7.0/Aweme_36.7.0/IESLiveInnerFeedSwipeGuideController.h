@class NSString, HTSLiveLandscapeSwipeGuideView, HTSLiveGuideView, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedSwipeGuideController : NSObject <IESLiveInnerFeedSwipeGuideProvider, IESLiveMotionGuideRegistry>

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) HTSLiveGuideView *rollGuideView;
@property (retain, nonatomic) HTSLiveLandscapeSwipeGuideView *landscapeSwipeGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)verticalGuideShowing;
- (void)showSwipeGuide;
- (void)showLandscapeSwipeGuide;
- (void)showProbeSwipeGuideWithTitle:(id)a0;
- (void)dismissLandscapeSwipeGuide;
- (id)guideContainerView;
- (BOOL)canSwipeRoomVertical;
- (BOOL)canSwipeRoomLeft;
- (BOOL)alreadyRequestFinish;
- (void)dismissSwipingRoomGuide;
- (void)showSwipingRoomGuideInContainer:(id)a0;
- (void)addLandscapeSwipeGuideViewDismissObserver;
- (id)guideViewWithTitle:(id)a0;
- (id)createRollGuideViewWithStrategy;
- (void)addDismissObserver;
- (BOOL)enableNewGuideClickDismiss;
- (void)dismissRoomGuide;
- (void)autoDismissSwipeGuideIfNeeds;
- (double)autoDismissGuideTime;
- (void)consumeSwipeGuideCountIfNeed;
- (void)autoDismissProbeSwipeGuideIfNeeds;
- (void)dismissProbeSwipeGuide;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)channelName;
- (BOOL)shouldDismiss;

@end

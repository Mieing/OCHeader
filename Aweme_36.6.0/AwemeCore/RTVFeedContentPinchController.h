@class RTVXRNarrowWindowGeatureController, RTVXRContainerLayoutAttributesSnapshot, NSString, UIView, NSMutableArray, RTVFeedTracker;
@protocol RxInjector, RTVFeedSessionInterface, RTVStateRecorder, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVXRStateRecorder, RTVPerformanceMonitorInterface, RTVInteractionContainerController;

@interface RTVFeedContentPinchController : NSObject <RTVXRNarrowWindowGeatureControllerDelegate, RTVFeedContentPinchController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> feedSession;
@property (retain, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (retain, nonatomic) RTVFeedTracker *tracker;
@property (readonly, nonatomic) id<RTVStateRecorder> stateRecorder;
@property (readonly, nonatomic) NSMutableArray *stateRecorderTokens;
@property (readonly, nonatomic) RTVXRNarrowWindowGeatureController *gestureController;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) id<RTVInteractionContainerController> interactionContainer;
@property (retain, nonatomic) RTVXRContainerLayoutAttributesSnapshot *snapshot;
@property (nonatomic) struct CGPoint { double x; double y; } initialAnchorPoint;
@property (copy, nonatomic) NSString *oncePinchToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__addObserver;
- (void)deactive;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__log:(id)a0;
- (void)activeIfNeeded;
- (BOOL)__isSupportPinch;
- (id)layoutSnapShot;
- (void)gestureController:(id)a0 didBeginGesture:(long long)a1 snapshot:(id)a2;
- (void)gestureController:(id)a0 didChangeState:(long long)a1 snapshot:(id)a2;
- (void)gestureController:(id)a0 didEndGesture:(long long)a1 snapshot:(id)a2;
- (double)gestureControllerMaxPinchScale:(id)a0;
- (double)gestureControllerMinPinchScale:(id)a0;
- (void)renderContainerView:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end

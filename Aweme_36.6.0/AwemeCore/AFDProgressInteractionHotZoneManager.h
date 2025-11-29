@class NSString, AWEMaskWindow;
@protocol AFDProgressInteractionHotZoneManagerDelegate;

@interface AFDProgressInteractionHotZoneManager : NSObject <AWEMaskWindowGestureRecognizerDelegate, AWEMaskWindowLongPressGestureDelegate, AFDProgressInteractionHotZoneManagerProtocol>

@property (weak, nonatomic) AWEMaskWindow *maskWindow;
@property (nonatomic) double downHotZone;
@property (weak, nonatomic) id<AFDProgressInteractionHotZoneManagerDelegate> delegate;
@property (nonatomic) BOOL willWindowPanStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionDSAdapterClass;

- (BOOL)shouldRecognizeWindowGesture;
- (BOOL)shouldResponseLongPressProgress;
- (BOOL)isHitFriendsProgressBarHotZoneOptimization;
- (BOOL)viewIsAppear;
- (BOOL)shouldAssignMaskWindowDelegate;
- (BOOL)shouldReduceHotZoneForWindowGestureWith:(double)a0;
- (BOOL)isScreenShootPanelShow;
- (BOOL)shouldRecognizedWindowGestureWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)getProgressDownHotZone;
- (void)handleMaskWindowDelegate;
- (void)resetMaskWindowDelegate;
- (BOOL)windowGestureShouldRecognizedFromView:(id)a0 withPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)windowGestureRecognizerShouldBegin:(id)a0;
- (BOOL)windowGestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)windowGestureTriggered:(id)a0;
- (id)aAWEPlayInteractionDSAdapter;
- (void)handleLongPressDelegateIfNeed;
- (BOOL)enableLongPressTriggerProgress;
- (void)resetLongPressDelegateIfNeed;
- (BOOL)longPressGestureShouldBegin:(id)a0;
- (BOOL)tabBarButtonEnable:(id)a0;
- (id)longPressGuetureNeedFailedArray;
- (void)windowLongPressGestureTriggered:(id)a0;
- (BOOL)windowLongPressGestureRecognizerShouldBegin:(id)a0;
- (BOOL)windowLongPressGestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)windowLongPressGestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)progressView;
- (void).cxx_destruct;
- (id)window;

@end

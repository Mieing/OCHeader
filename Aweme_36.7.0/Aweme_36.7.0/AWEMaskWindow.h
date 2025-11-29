@class NSObject, NSString, NSMutableSet, UIView, UIPanGestureRecognizer, NSMutableArray;
@protocol AWEMaskWindowLongPressGestureDelegate, AWEMaskWindowGestureRecognizerExternalDelegate, AWEMaskWindowTapGestureDelegate, AWEMaskWindowFakeGestureDelegate, AWEMaskWindowGestureRecognizerDelegate, OS_dispatch_queue, UIGestureRecognizerDelegate;

@interface AWEMaskWindow : UIWindow <UIGestureRecognizerDelegate>

@property (readonly, weak, nonatomic) id<AWEMaskWindowLongPressGestureDelegate> longPressDelegate;
@property (readonly, weak, nonatomic) id<AWEMaskWindowTapGestureDelegate> tapDelegate;
@property (retain, nonatomic) UIView *cornerMaskView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) NSMutableArray *externalPanDelegateArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDelegateQueue;
@property (retain, nonatomic) id<AWEMaskWindowGestureRecognizerExternalDelegate> currentExternalPanDelegate;
@property (retain, nonatomic) NSMutableSet *delegateSet;
@property (retain, nonatomic) UIPanGestureRecognizer *fakePanGesture;
@property (weak, nonatomic) id<AWEMaskWindowGestureRecognizerDelegate> currentDelegate;
@property (weak, nonatomic) id<AWEMaskWindowGestureRecognizerDelegate> maskDelegate;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate, AWEMaskWindowFakeGestureDelegate> fakeGestureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ohr_sendEvent:(id)a0;
- (void)sendEvent:(id)a0;
- (void)gestureTriggered:(id)a0;
- (void)windowFakeGestureTriggered:(id)a0;
- (void)appendGesDelegate:(id)a0;
- (void)removeGesDelegate:(id)a0;
- (void)addExternalDelegate:(id)a0;
- (void)removeExternalDelegate:(id)a0;
- (void)setProgressLongPressDelegate:(id)a0;
- (void)setProgressTapDelegate:(id)a0;
- (void)setProxyAndGestureIfNeed;
- (id)longPressGestureDelegateProxy;
- (void)setLongPressGestureDelegateProxy:(id)a0;
- (void)setTapProxyAndGestureIfNeed;
- (id)tapGestureDelegateProxy;
- (void)setPrivateTapStorage:(id)a0;
- (void)setTapGestureDelegateProxy:(id)a0;
- (id)privateTapStorage;
- (id)longPressGesture;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (id)privateStorage;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPrivateStorage:(id)a0;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)tapGesture;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setLongPressGesture:(id)a0;
- (void)setTapGesture:(id)a0;
- (void)setTapDelegate:(id)a0;
- (void)setLongPressDelegate:(id)a0;

@end

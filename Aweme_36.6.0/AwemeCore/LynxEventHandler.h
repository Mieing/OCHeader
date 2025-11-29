@class LynxUI, UIView, CustomGestureRecognizerDelegate, LongPressGestureRecognizerDelegate, PanGestureRecognizerDelegate, LynxTouchHandler, NSMutableSet, LynxEventEmitter, LynxGestureArenaManager, LynxUIOwner, UIPanGestureRecognizer, UIGestureRecognizer;
@protocol LynxEventTarget;

@interface LynxEventHandler : NSObject {
    LynxUIOwner *_uiOwner;
    LynxUI *_rootUI;
    id<LynxEventTarget> _touchTarget;
    struct CGPoint { double x; double y; } _longPressPoint;
    CustomGestureRecognizerDelegate *_tapDelegate;
    LongPressGestureRecognizerDelegate *_longPressDelegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PanGestureRecognizerDelegate *_panGestureDelegate;
    float range_;
    NSMutableSet *_set;
    NSMutableSet *_setOfPropsChanged;
}

@property (nonatomic) BOOL gestureRecognized;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (readonly, weak, nonatomic) LynxEventEmitter *eventEmitter;
@property (readonly, copy, nonatomic) LynxTouchHandler *touchRecognizer;
@property (readonly, copy, nonatomic) UIGestureRecognizer *tapRecognizer;
@property (readonly, copy, nonatomic) UIGestureRecognizer *longPressRecognizer;
@property (readonly, weak, nonatomic) LynxGestureArenaManager *gestureArenaManager;
@property (nonatomic) BOOL enableSimultaneousTap;

- (id)uiOwner;
- (id)initWithRootView:(id)a0;
- (BOOL)needEndEditing:(id)a0;
- (BOOL)tapOnUICalloutBarButton:(id)a0 withPoint:(struct CGPoint { double x0; double x1; })a1 andEvent:(id)a2;
- (void)handleFocus:(id)a0 onView:(id)a1 withContainer:(id)a2 andPoint:(struct CGPoint { double x0; double x1; })a3 andEvent:(id)a4;
- (id)initWithRootView:(id)a0 withRootUI:(id)a1;
- (void)updateUiOwner:(id)a0 eventEmitter:(id)a1;
- (id)touchTarget;
- (void)onGestureRecognizedByEventTarget:(id)a0;
- (void)setDisableLongpressAfterScroll:(BOOL)a0;
- (void)dispatchTapEvent:(id)a0;
- (void)dispatchLongPressEvent:(id)a0;
- (long long)canRespondTapOrClickEvent:(id)a0;
- (long long)canRespondTapOrClickWhenUISlideByProps:(id)a0;
- (id)hitTestInner:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)touchUI:(id)a0 isDescendantOfUI:(id)a1;
- (void)resetEventEnv;
- (void)setTapSlop:(id)a0;
- (void)dispatchPanEvent:(id)a0;
- (BOOL)consumeSlideEvents:(double)a0;
- (long long)setGestureArenaManagerAndGetIndex:(id)a0;
- (void)removeGestureArenaManager:(long long)a0;
- (void)onGestureRecognized;
- (long long)checkCanRespondTapOrClick:(id)a0 withSet:(id)a1;
- (void)attachContainerView:(id)a0;
- (void)removeEventGestures;
- (id)generateGestureEvent:(id)a0 withName:(id)a1 ui:(id)a2;
- (void)needCheckConsumeSlideEvent;
- (void)onPropsChangedByEventTarget:(id)a0;
- (void)setEnableViewReceiveTouch:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setLongPressDuration:(int)a0;

@end

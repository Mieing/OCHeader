@class NSArray;

@interface DanceUI.HostingScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ isAnimationCompletionCheckPending;
    void /* unknown type, empty encoding */ nestedProxy;
    void /* unknown type, empty encoding */ _disabledGestureSimultaneouslyReceive;
    void /* unknown type, empty encoding */ _didEndScroll;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ panGestureStateAttribute;
    void /* unknown type, empty encoding */ danceUI_stateAttribute;
    void /* unknown type, empty encoding */ panGestureStateObservation;
    void /* unknown type, empty encoding */ disabledBouncesAxis;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (nonatomic, copy) NSArray *accessibilityElements;

- (BOOL)danceui_needsDelegateProxy;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)adjustedContentInsetDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end

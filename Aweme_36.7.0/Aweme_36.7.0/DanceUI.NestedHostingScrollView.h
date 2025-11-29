@interface DanceUI.NestedHostingScrollView : UIScrollView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ panGestureState;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ panGestureStateObservation;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

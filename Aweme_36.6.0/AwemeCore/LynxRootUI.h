@class NSMutableDictionary, LynxView, UIView;
@protocol LynxEventTarget, LUIBodyView;

@interface LynxRootUI : LynxUI {
    id<LynxEventTarget> _parentLynxPageUI;
    NSMutableDictionary *_childrenLynxPageUI;
}

@property (readonly, weak, nonatomic) LynxView *lynxView;
@property (readonly, weak, nonatomic) UIView<LUIBodyView> *rootView;
@property (nonatomic) BOOL layoutAnimationRunning;

- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 withLayoutAnimation:(BOOL)a3;
- (BOOL)eventThrough;
- (id)parentLynxPageUI;
- (id)childrenLynxPageUI;
- (void)setParentLynxPageUI:(id)a0;
- (void)setChildrenLynxPageUI:(id)a0;
- (void)onAnimationEnd:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 duration:(double)a3;
- (void)onAnimationStart:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 duration:(double)a3;
- (id)initWithLynxView:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (id)createView;

@end

@class NSMutableDictionary, LynxUI;

@interface LynxTransitionAnimationManager : NSObject

@property (weak, nonatomic) LynxUI *ui;
@property (retain, nonatomic) NSMutableDictionary *transitionAnimations;
@property (readonly, nonatomic) NSMutableDictionary *transitionInfos;
@property (retain, nonatomic) NSMutableDictionary *transitionDelegates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } latestFrame;

- (id)initWithLynxUI:(id)a0;
- (void)transitionsDidAssemble;
- (BOOL)isShouldTransitionType:(unsigned long long)a0;
- (void)removeTransitionAnimation:(unsigned long long)a0;
- (BOOL)isTransitionBackgroundColor;
- (void)performTransitionAnimationsWithBackground:(id)a0 callback:(id /* block */)a1;
- (BOOL)hasTransition:(unsigned long long)a0;
- (void)performTransitionAnimationsWithOpacity:(double)a0 callback:(id /* block */)a1;
- (void)removeAllLayoutTransitionAnimation;
- (void)createLayoutAnimation:(id)a0 beginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 callback:(id /* block */)a3 needAdditionalAnimator:(BOOL)a4;
- (id)createTransitionDelegate:(id)a0;
- (void)enqueueTransitionAnimation:(id)a0 withConfig:(id)a1 withDelegate:(id)a2;
- (void)autoAddAnimationForComplexBackgroundWithUI:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 config:(id)a2 withProp:(unsigned long long)a3;
- (void)removeAllTransitionAnimation;
- (void)setupTransitionAnimationForContents:(id)a0 withConfig:(id)a1 forLayer:(id)a2 withProp:(unsigned long long)a3;
- (void)assembleTransitions:(id)a0;
- (BOOL)maybeUpdateBackgroundWithTransitionAnimation:(id)a0;
- (BOOL)maybeUpdateOpacityWithTransitionAnimation:(double)a0;
- (BOOL)maybeUpdateFrameWithTransitionAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (BOOL)isTransitionSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isTransitionPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isTransitionOpacity:(double)a0 newOpacity:(double)a1;
- (BOOL)isTransitionVisibility:(BOOL)a0 newState:(BOOL)a1;
- (BOOL)isTransitionTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 newTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;
- (BOOL)isTransitionTransformRotation:(id)a0 newTransformRotation:(id)a1;
- (void)performTransitionAnimationsWithVisibility:(BOOL)a0 callback:(id /* block */)a1;
- (void)performTransitionAnimationsWithTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 transformWithoutRotate:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 transformWithoutRotateXY:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2 rotation:(id)a3 callback:(id /* block */)a4;
- (void)applyTransitionAnimation;
- (void).cxx_destruct;

@end

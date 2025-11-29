@class NSString, NSDictionary, UIView;
@protocol MMMusicMVSwitchNewAnimatorDelegate;

@interface MMMusicMVSwitchNewAnimator : NSObject <CAAnimationDelegate> {
    BOOL _bInAnim;
    BOOL _bInFinish;
    unsigned long long _sideType;
    double _percent;
    UIView *_cubeView;
    UIView *_fromView;
    UIView *_toView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromViewOriginFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toViewOriginFrame;
    UIView *_fromViewParentView;
    UIView *_toViewParentView;
    UIView *_backgroundView;
    id /* block */ _finishBlock;
    NSDictionary *_extDict;
    unsigned long long _animType;
}

@property (weak, nonatomic) id<MMMusicMVSwitchNewAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2 extDict:(id)a3;
- (void)startEdgeAnimFromView:(id)a0 containerView:(id)a1 extDict:(id)a2;
- (void)startNoInteractiveAnimWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2 bToNextOrPre:(BOOL)a3 completion:(id /* block */)a4;
- (void)updateAnimPercent:(double)a0;
- (void)finishWithCompletion:(id /* block */)a0;
- (BOOL)isAniming;
- (void)startAnimWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2 extDict:(id)a3 animType:(unsigned long long)a4;
- (void)resetOnFinish;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForSideViewIsLeft:(BOOL)a0 cubeWidth:(double)a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForCubeWithPercent:(double)a0 cubeWidth:(double)a1;
- (double)cubeWidth;
- (unsigned long long)sideTypeWithPercent:(double)a0;
- (void).cxx_destruct;

@end

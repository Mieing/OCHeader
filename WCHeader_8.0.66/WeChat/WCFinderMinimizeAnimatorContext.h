@class WCFinderTransitionUserInfo, UIViewController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface WCFinderMinimizeAnimatorContext : NSObject

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> ctx;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (retain, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) UIViewController *fromVC;
@property (readonly, nonatomic) UIView *container;
@property (readonly, nonatomic) BOOL isPresentingOrDismiss;
@property (nonatomic) BOOL fromGesture;
@property (nonatomic) double gestureMaskAlpha;
@property (retain, nonatomic) WCFinderTransitionUserInfo *userInfo;
@property (retain, nonatomic) id passObject;
@property (nonatomic) BOOL isExpand;

+ (id)wrapContext:(id)a0;

- (id)frontView;
- (id)backView;
- (id)frontVC;
- (id)backVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromViewInitialFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toViewFinalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toViewInitialFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frontViewInitialFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frontViewFinalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backViewFinalFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backViewInitialFrame;
- (void).cxx_destruct;

@end

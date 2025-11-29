@class NSString, UIViewController, UIView;
@protocol RTVXRContainer, RTVViewAnimator;

@interface RTVXRLayoutTransitionContext : NSObject <RTVXRLayoutTransitionContext>

@property (retain, nonatomic) id<RTVViewAnimator> animtor;
@property (retain, nonatomic) id<RTVViewAnimator> contentViewAlphaAnimator;
@property (retain, nonatomic) UIViewController<RTVXRContainer> *fromContainer;
@property (retain, nonatomic) UIViewController<RTVXRContainer> *toContainer;
@property (retain, nonatomic) UIViewController *engine;
@property (retain, nonatomic) UIView *transitionContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rectTransformFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end

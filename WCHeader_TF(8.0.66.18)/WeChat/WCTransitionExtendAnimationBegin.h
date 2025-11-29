@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface WCTransitionExtendAnimationBegin : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resultRect;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationResultRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

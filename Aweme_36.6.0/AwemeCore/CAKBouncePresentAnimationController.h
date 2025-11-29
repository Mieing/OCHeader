@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface CAKBouncePresentAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

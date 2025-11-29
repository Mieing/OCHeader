@class NSString;

@interface WCAdWebStoreAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;

@end

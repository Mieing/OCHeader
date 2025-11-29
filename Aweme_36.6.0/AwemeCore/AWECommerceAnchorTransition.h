@class NSString;

@interface AWECommerceAnchorTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionWithTransitionType:(unsigned long long)a0;

- (id)initWithTransitionType:(unsigned long long)a0;
- (void)dismissAnimation:(id)a0;
- (void)presentAnimation:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end

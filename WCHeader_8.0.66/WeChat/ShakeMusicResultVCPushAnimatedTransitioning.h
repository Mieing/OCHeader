@class NSString, UIView;

@interface ShakeMusicResultVCPushAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (copy, nonatomic) id /* block */ onFinishBlock;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIView *musicCardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end

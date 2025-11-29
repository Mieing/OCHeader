@class UIColor, NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface BouncePresentAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL isEliteVersion;
@property (weak, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIColor *maskViewColor;
@property (retain, nonatomic) UIColor *viewColor;
@property (retain, nonatomic) UIColor *auxViewColor;
@property (nonatomic) double scaleFactor;
@property (nonatomic) long long durationType;
@property (nonatomic) double animationDuration;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cancelBtn;
- (id)initWithIsEliteVersion:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end

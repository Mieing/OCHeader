@class UIViewController;

@interface WAMenuPopAnimatedTransition : WAMenuBaseAnimatedTransition <MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

- (id)initWithViewController:(id)a0;
- (void)innerTransition:(id)a0;
- (void).cxx_destruct;

@end

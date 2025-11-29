@interface AWECommerceTransitionController : NSObject

@property (nonatomic) long long transitionType;
@property (copy, nonatomic) id /* block */ transitionWillBegin;

- (void)pushViewController:(id)a0 fadeIn:(BOOL)a1;
- (void)pushFromBottomWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)showViewController:(id)a0;
- (void)presentViewController:(id)a0;
- (void)pushViewController:(id)a0;

@end

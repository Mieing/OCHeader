@class UIViewController;

@interface RTVXRContainerTransitionModel : NSObject

@property (readonly, nonatomic) UIViewController *toVC;
@property (readonly, nonatomic) long long optional;
@property (readonly, nonatomic) long long transitionType;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (id)initWithToVC:(id)a0 transitionType:(long long)a1 option:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end

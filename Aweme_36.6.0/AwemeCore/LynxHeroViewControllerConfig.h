@class UIViewController;
@protocol UINavigationControllerDelegate, UITabBarControllerDelegate;

@interface LynxHeroViewControllerConfig : NSObject

@property (weak, nonatomic) id<UINavigationControllerDelegate> previousNavigationDelegate;
@property (weak, nonatomic) id<UITabBarControllerDelegate> previousTabBarDelegate;
@property (nonatomic) BOOL enableHeroTransition;
@property (readonly, weak, nonatomic) UIViewController *vc;

- (id)initWithVC:(id)a0;
- (void).cxx_destruct;

@end

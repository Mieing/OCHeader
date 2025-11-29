@class UIViewController, UIView;

@interface AWEOPHalfScreenContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIView *containerView;

- (void).cxx_destruct;
- (void)removeFromParentViewController;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)a0;

@end

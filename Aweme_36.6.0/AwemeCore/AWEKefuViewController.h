@class UIViewController, NSMutableArray, UIView;

@interface AWEKefuViewController : UIViewController

@property (retain, nonatomic) NSMutableArray *containerViews;
@property (retain, nonatomic) UIView *webContainerView;
@property (retain, nonatomic) UIViewController *webViewController;

- (void)tryRemoveWebViewController;
- (BOOL)tryAddWebViewController:(id)a0;
- (void)addContainerView:(id)a0;
- (void)removeContainerView:(id)a0;
- (void)p_tryRemoveWebViewController;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

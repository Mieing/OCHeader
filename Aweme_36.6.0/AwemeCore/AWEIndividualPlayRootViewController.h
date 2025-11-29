@class UIView, AWEIndividualRefreshView;
@protocol AWESplashFakeLaunchScreenView;

@interface AWEIndividualPlayRootViewController : UIViewController

@property (retain, nonatomic) AWEIndividualRefreshView *refreshView;
@property (retain, nonatomic) UIView<AWESplashFakeLaunchScreenView> *fakeLaunchScreenView;

- (void)removeFakeLaunchScreen;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end

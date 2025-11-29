@class UIButton;
@protocol MMLiveScreenSharingViewControllerDelegate;

@interface MMLiveScreenSharingViewController : MMLiveScreenSharingBaseViewController

@property (retain, nonatomic) UIButton *startButton;
@property (weak, nonatomic) id<MMLiveScreenSharingViewControllerDelegate> delegate;
@property (nonatomic) BOOL navigationBarHidden;
@property (nonatomic) long long status;

- (id)init;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadStartButton;
- (void)startButtonClicked:(id)a0;
- (void).cxx_destruct;

@end

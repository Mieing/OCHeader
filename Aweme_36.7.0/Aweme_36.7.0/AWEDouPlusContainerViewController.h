@class AWEDouPlusContainerNavigationBar, UIView;

@interface AWEDouPlusContainerViewController : UIViewController

@property (retain, nonatomic) UIView *topBlankAreaView;
@property (retain, nonatomic) UIView *coreAreaView;
@property (retain, nonatomic) UIView *mainContainerView;
@property (retain, nonatomic) AWEDouPlusContainerNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *navigationTopLine;
@property (nonatomic) long long navigationBarType;
@property (nonatomic) BOOL dismissWhenClickBlankArea;
@property (nonatomic) BOOL shouldShouldNavigationTopLineView;

- (double)coreAreaHeight;
- (void)addCoreAreaViewRoundedCorners:(unsigned long long)a0 cornerRadii:(struct CGSize { double x0; double x1; })a1;
- (void)dismissFromParentViewController;
- (void)showInParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dismissTapped;

@end

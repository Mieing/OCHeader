@class UIButton, IESLiveGameOpenPlatformDebugPerfView, UIView;

@interface IESLiveGameOpenPlatformDebugPerfViewController : UIViewController

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfView *perfView;

- (void)didSetAttachingDIContext;
- (void)reloadPerfView:(id)a0;
- (void)showOrHidePerfView;
- (void)setUp;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)dealloc;

@end

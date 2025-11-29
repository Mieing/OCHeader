@class NSString, UIView;

@interface BDXLynxVideoProFullScreen : UIViewController

@property (retain, nonatomic) NSString *imageURL;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) unsigned long long restoreOrientation;
@property (copy, nonatomic) id /* block */ dismissBlk;

- (id)initWithPlayerView:(id)a0 dismiss:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)show:(id /* block */)a0;
- (void)setupUI;

@end

@class UIImageView, TTVideoEngine, AWERepoECommerceRecordModel, UIButton;

@interface AWEECRecorderPreviewViewController : UIViewController

@property (retain, nonatomic) UIImageView *contentView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) TTVideoEngine *videoEngine;
@property (retain, nonatomic) AWERepoECommerceRecordModel *recordModel;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraPreviewViewFrame;
- (void)addObserve;
- (void)trackWithEvent:(id)a0;
- (void)playViewWillResignActive:(id)a0;
- (void)playerViewDidBecomeActive:(id)a0;
- (void)confirmButtonDidClicked:(id)a0;
- (void)backButtonDidClicked:(id)a0;
- (id)viewMasTop;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;

@end

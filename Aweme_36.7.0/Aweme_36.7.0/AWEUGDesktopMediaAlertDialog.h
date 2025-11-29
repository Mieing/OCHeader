@class UIView, AWEVideoPlayerController, DUXBaseImageView, DUXBaseLabel, NSString, NSMutableArray, DUXLoadingParticleView, DUXAlertDialogActionView;

@interface AWEUGDesktopMediaAlertDialog : UIViewController <UIViewControllerTransitioningDelegate, DUXAlertDialogActionViewDelegate, AWEVideoPlayerControllerDelegate>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) DUXBaseImageView *loadingBackgroundView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) DUXAlertDialogActionView *actionView;
@property (retain, nonatomic) AWEVideoPlayerController *videoPlayController;
@property (retain, nonatomic) NSMutableArray *mActions;
@property (nonatomic) double contentWidth;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double videoHeight;
@property (copy, nonatomic) id /* block */ maskClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dialogWithVideoResource:(id)a0 title:(id)a1 subTitle:(id)a2 actions:(id)a3;

- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)preparedToPlayForURL:(id)a0;
- (void)didClickMaskArea;
- (void)linkTextaActionDidClickModel:(id)a0;
- (void)actionDidClickOnIndex:(unsigned long long)a0 model:(id)a1;
- (void)actionDidEndCountDown:(unsigned long long)a0 model:(id)a1;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;

@end

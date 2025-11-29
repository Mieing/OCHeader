@class UIImageView, AWEGeneralPostLoadingProgressView, AWEGeneralPostLoadingErrorView, UILabel, UIView, ACCAnimatedButton;

@interface AWEStudio25StoryResourceLoadView : UIViewController

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEGeneralPostLoadingProgressView *progressView;
@property (retain, nonatomic) AWEGeneralPostLoadingErrorView *errorView;
@property (nonatomic) double enterTime;
@property (copy, nonatomic) id /* block */ retryClick;
@property (copy, nonatomic) id /* block */ backClick;
@property (retain, nonatomic) UIImageView *coverImageView;

- (void)backClicked;
- (void)showFailed;
- (void)retryUICover;
- (void)retryClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateProgress:(double)a0;

@end

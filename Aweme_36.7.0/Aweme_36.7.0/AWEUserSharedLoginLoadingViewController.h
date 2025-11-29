@class UIImageView, UILabel, DUXLoadingParticleView;

@interface AWEUserSharedLoginLoadingViewController : UIViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXLoadingParticleView *particleView;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (id)titleLabelText;

@end

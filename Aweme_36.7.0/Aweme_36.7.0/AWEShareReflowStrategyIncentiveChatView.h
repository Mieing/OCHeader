@class CAGradientLayer, AWEButton, UIImageView, UIView, UILabel;

@interface AWEShareReflowStrategyIncentiveChatView : AWEShareReflowBaseView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *redpacketImageView;
@property (retain, nonatomic) UIView *tagLabelBGView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (retain, nonatomic) UIView *redpacketImageViewGradientView;
@property (retain, nonatomic) CAGradientLayer *redpacketImageViewGradientLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

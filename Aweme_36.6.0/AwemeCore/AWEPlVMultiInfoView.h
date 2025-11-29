@class UIStackView, DUXBasicButton, UIImageView, UILabel, AWEGradientView, UIView;

@interface AWEPlVMultiInfoView : UIView

@property (retain, nonatomic) AWEGradientView *infoMaskView;
@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UIView *infoSeparateLine;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *userInfoContentView;
@property (retain, nonatomic) UIImageView *avartImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) DUXBasicButton *bottomButton;

- (void)updateInfoTopOffset:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end

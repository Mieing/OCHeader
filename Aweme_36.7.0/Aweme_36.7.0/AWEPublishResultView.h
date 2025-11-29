@class UIStackView, UIControl, UIImageView, UILabel, UIView, UIButton;

@interface AWEPublishResultView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *textContainerView;
@property (retain, nonatomic) UIStackView *buttonContainerView;
@property (retain, nonatomic) UIButton *indicatorButton;
@property (retain, nonatomic) UIImageView *secondCoverImageView;
@property (retain, nonatomic) UIView *whiteSpacerView;
@property (retain, nonatomic) UIControl *actionButton;

- (void)hideCloseButton;
- (void)layoutButtons;
- (void)setupDualCoverWithImages:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

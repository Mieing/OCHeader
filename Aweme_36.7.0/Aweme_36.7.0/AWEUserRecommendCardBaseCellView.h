@class UIStackView, AFDButton, UIImageView, UILabel, AWEUserRecommendCardBaseCellViewConfig;

@interface AWEUserRecommendCardBaseCellView : UIView

@property (retain, nonatomic) AWEUserRecommendCardBaseCellViewConfig *config;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verificationImageView;
@property (retain, nonatomic) AFDButton *actionButton;
@property (retain, nonatomic) AFDButton *closeButton;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

+ (id)cellViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

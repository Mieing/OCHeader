@class UIStackView, UIImageView, UIView, UILabel, UIButton;

@interface AWELongArticleShareTokenCardView : AWEShareReflowBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIStackView *headStackView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *shareUserButton;
@property (retain, nonatomic) UIStackView *actionStackView;
@property (retain, nonatomic) UIButton *primaryButton;
@property (copy, nonatomic) id /* block */ tapCoverBlock;
@property (copy, nonatomic) id /* block */ tapDismissBlock;
@property (copy, nonatomic) id /* block */ tapSharerBlock;
@property (copy, nonatomic) id /* block */ tapPrimaryBlock;

- (void)shareUserButtonTapped:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;
- (void)primaryButtonTapped:(id)a0;
- (void)updateWithModel:(id)a0;

@end

@class UIStackView, UIImageView, AWEButton, UIView, UILabel, UIButton;

@interface AWEVideoShareTokenCardView : AWEShareReflowBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UIStackView *headStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *shareUserButton;
@property (retain, nonatomic) UIView *subTitleContainerView;
@property (retain, nonatomic) UIStackView *actionStackView;
@property (retain, nonatomic) AWEButton *primaryButton;
@property (retain, nonatomic) UIButton *reportButton;
@property (nonatomic) BOOL hideReportButton;
@property (copy, nonatomic) id /* block */ tapVideoCoverBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapSharerButtonBlock;
@property (copy, nonatomic) id /* block */ tapPrimaryButtonBlock;
@property (copy, nonatomic) id /* block */ tapReportButtonBlock;

- (BOOL)useNewStyle;
- (void)reportButtonTapped:(id)a0;
- (void)videoCoverTapped:(id)a0;
- (void)shareUserButtonTapped:(id)a0;
- (void)updateWithModel:(id)a0 user:(id)a1;
- (id)initWithHideReportButton:(BOOL)a0;
- (void)updateButtonStyle:(id)a0 isPrimary:(BOOL)a1;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)closeButtonTapped:(id)a0;
- (void)primaryButtonTapped:(id)a0;

@end

@class AWEGradientView, UIImageView, UIView, UILabel, UIButton;

@interface AWEShareReeditAddJxAnchorCardView : AWEShareReflowBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *addTitleLabel;
@property (retain, nonatomic) UILabel *jxTitleLabel;
@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) AWEGradientView *bottomContainerView;
@property (copy, nonatomic) id /* block */ tapVideoCoverBlock;
@property (copy, nonatomic) id /* block */ tapDismissButtonBlock;
@property (copy, nonatomic) id /* block */ tapPrimaryButtonBlock;

- (void)videoCoverTapped:(id)a0;
- (id)initWithCustomReeditCardView;
- (void)updateWithModel:(id)a0 user:(id)a1;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)closeButtonTapped:(id)a0;
- (void)primaryButtonTapped:(id)a0;

@end

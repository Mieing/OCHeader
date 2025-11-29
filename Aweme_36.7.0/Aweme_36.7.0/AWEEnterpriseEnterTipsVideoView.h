@class UIStackView, AWEEnterpriseEnterTipsVideoViewModel, UIImageView, UILabel, UIView;

@interface AWEEnterpriseEnterTipsVideoView : AWEEnterpriseMessageBaseView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImage;
@property (weak, nonatomic) AWEEnterpriseEnterTipsVideoViewModel *viewModel;

- (void)bindViewModel:(id)a0;
- (void)constraintSubviews;
- (void)viewTapped;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

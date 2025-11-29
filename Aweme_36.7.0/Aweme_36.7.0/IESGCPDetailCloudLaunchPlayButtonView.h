@class UIStackView, UILabel, UIView, BDImageView;

@interface IESGCPDetailCloudLaunchPlayButtonView : UIView

@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subContainerView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) BDImageView *subWebpImageView;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;

- (void)buttonClicked;
- (void)updateButtonWithConfig:(id)a0;
- (void)updateButtonWithStyle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end

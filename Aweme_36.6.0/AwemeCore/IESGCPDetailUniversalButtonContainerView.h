@class UILabel, UIStackView;

@interface IESGCPDetailUniversalButtonContainerView : UIView

@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;

- (void)buttonClicked;
- (void)updateButtonWithStyle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end

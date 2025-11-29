@class UILabel, IESECUIImageView, UIStackView;

@interface IESECSKUTitleView : UIView

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *trailTitleLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImage;

- (void)configWithTitle:(id)a0 subTtitle:(id)a1 trailTitle:(id)a2 hasArrow:(BOOL)a3;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

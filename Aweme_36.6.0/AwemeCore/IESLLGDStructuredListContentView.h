@class UILabel, UIView;

@interface IESLLGDStructuredListContentView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *stepsView;

- (id)descLabel;
- (id)attributedStringWithText:(id)a0;
- (void)configWithStructuredListContentModel:(id)a0;
- (id)stepContentLabel;
- (id)radialGradientView;
- (id)stepLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

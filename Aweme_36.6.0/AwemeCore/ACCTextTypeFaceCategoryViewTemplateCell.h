@class CAGradientLayer, AWEScrollStringLabel, UIImageView, UILabel, UIView;

@interface ACCTextTypeFaceCategoryViewTemplateCell : ACCTextTypeFaceCategoryViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEScrollStringLabel *scrollLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *labelGradientLayer;
@property (retain, nonatomic) CAGradientLayer *fadeLayer;
@property (retain, nonatomic) UIView *selectedIndicatorView;

- (void)configWithItemModel:(id)a0;
- (void)setupAccessibilityForTemplateModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end

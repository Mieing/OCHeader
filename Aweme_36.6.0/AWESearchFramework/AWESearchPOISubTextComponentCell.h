@class UILabel;

@interface AWESearchPOISubTextComponentCell : AWESearchPOIDefaultComponentCell

@property (weak, nonatomic) UILabel *subTextLabel;

+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)configDisplayUIForDefaultStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectedStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectingStyleWithModel:(id)a0;
- (double)textLabelLeftSpacing;
- (double)textLabelRightSpacing;
- (double)verticalSpacingBetweenTextAndSubText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

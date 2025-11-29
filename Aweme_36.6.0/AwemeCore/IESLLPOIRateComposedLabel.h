@class IESLLPOITagRateGradeModel, IESLLGradientView, UIImageView, UILabel;

@interface IESLLPOIRateComposedLabel : UIView

@property (retain, nonatomic) IESLLPOITagRateGradeModel *model;
@property (retain, nonatomic) UIImageView *rateImage;
@property (retain, nonatomic) UILabel *rateContentLabel;
@property (retain, nonatomic) UILabel *rateTagsLabel;
@property (retain, nonatomic) IESLLGradientView *gradientView;
@property (nonatomic) BOOL shouldAddGradientView;
@property (nonatomic) BOOL shouldHaveCornerRadius;
@property (nonatomic) BOOL shouldPickOneLabel;

- (double)itemMargin;
- (void)configWithRateModel:(id)a0;
- (double)labelCornerRadius;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)reset;
- (id)initWithScene:(unsigned long long)a0;
- (double)labelWidth;

@end

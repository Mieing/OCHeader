@class CAGradientLayer, AWEECShoppingGuideSUGModel, UIImageView, AWEECShoppingAIGuideContext, AWEECShoppingAIGuideComponentUIConfigItem, UILabel;

@interface AWEECShoppingAIGuideSUGCellItem : UIButton

@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (retain, nonatomic) AWEECShoppingAIGuideComponentUIConfigItem *buttonConfig;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEECShoppingGuideSUGModel *data;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrow;
@property (nonatomic) long long sugPosition;

- (void)tapView:(id)a0;
- (id)initWithSUGModel:(id)a0 context:(id)a1 itemConfig:(id)a2 maxWidth:(double)a3;
- (void)updateUIConfig;
- (void)updateCornerRadiusColor;
- (void)updateBGColorIsSelected:(BOOL)a0;
- (void)updateFontColorIsSelected:(BOOL)a0;
- (void)updateBorderColorIsSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setupUI;

@end

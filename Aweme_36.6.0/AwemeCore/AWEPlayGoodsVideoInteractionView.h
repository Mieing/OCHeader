@class UIView, AWEGoodsTagView, AWEAwemeModel, AWEGradientView, UIButton, MASConstraint, AWEAwemeGoodsInfo, UIVisualEffectView, UILabel;

@interface AWEPlayGoodsVideoInteractionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) AWEGoodsTagView *titleTagView;
@property (retain, nonatomic) UIView *tapGesView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIVisualEffectView *effectview;
@property (retain, nonatomic) MASConstraint *titleLabelLeftConstraint;
@property (retain, nonatomic) AWEAwemeGoodsInfo *goodsInfo;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)configWithModel:(id)a0;
- (void)transferToGoodsDetail:(id)a0;
- (id)makeAttributedPriceStringWithPrice:(id)a0;
- (id)makeNewAttributedPriceStringWithPrice:(id)a0;
- (id)p_makeDecimalPriceStringWithPrice:(id)a0 integerFont:(id)a1 decimalFont:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (id)labelTextColor;
- (id)tagColor;

@end

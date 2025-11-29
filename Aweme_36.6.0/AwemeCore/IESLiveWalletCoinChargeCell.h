@class UIColor, IESLiveWalletGradientView, IESLiveChargeModel, CALayer, UILabel;

@interface IESLiveWalletCoinChargeCell : UICollectionViewCell

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *diamondLabel;
@property (retain, nonatomic) IESLiveWalletGradientView *promotionsContainer;
@property (retain, nonatomic) UILabel *promotionsLabel;
@property (retain, nonatomic) UIColor *diamondStringColor;
@property (retain, nonatomic) UIColor *priceStringColor;
@property (retain, nonatomic) IESLiveChargeModel *model;
@property (nonatomic) BOOL isCustomCell;

+ (struct CGSize { double x0; double x1; })sizeOfCell;

- (id)p_diamondFromModel:(id)a0;
- (id)p_priceFromModel:(id)a0;
- (id)p_diamondFromModel:(id)a0 scale:(double)a1;
- (void)changeBorderColor;
- (void)updateCustomCell;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

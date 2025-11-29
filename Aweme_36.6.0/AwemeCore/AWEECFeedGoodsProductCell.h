@class UITapGestureRecognizer, UIImageView, AWEECCustomPriceLabel, AWEECFeedGoodsCardProductModel, AWEECProgressView, UIView;

@interface AWEECFeedGoodsProductCell : UIView

@property (retain, nonatomic) AWEECFeedGoodsCardProductModel *model;
@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) AWEECProgressView *progressView;
@property (retain, nonatomic) UIView *priceLabelView;
@property (retain, nonatomic) AWEECCustomPriceLabel *priceLabel;
@property (retain, nonatomic) UIView *cellMaskView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ clickCellBlock;

- (void)__handleTapGesture:(id)a0;
- (void)updateViewWithIsSameIndex:(BOOL)a0 progressValue:(double)a1 totalValue:(double)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

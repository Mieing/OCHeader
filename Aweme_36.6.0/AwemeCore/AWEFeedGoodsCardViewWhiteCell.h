@class NSString, AWEButton, AWEGoodsVisitorView, UIImageView, IESECGoodsTitleLabel, UIButton, AWEGoodsCouponView, IESECGoodsPriceLabel, IESECInsetsLabel, UILabel;
@protocol AWEGoodsSeedingModelProtocol;

@interface AWEFeedGoodsCardViewWhiteCell : UICollectionViewCell <AWEFeedGoodsCardViewCellProtocol>

@property (retain, nonatomic) id<AWEGoodsSeedingModelProtocol> currentGoods;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) UIButton *couponHintView;
@property (retain, nonatomic) UIButton *couponHintRight;
@property (retain, nonatomic) AWEGoodsCouponView *fullReductionView;
@property (retain, nonatomic) UILabel *visitorLabel;
@property (retain, nonatomic) AWEGoodsVisitorView *visitorView;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) AWEButton *purchaseButton;
@property (retain, nonatomic) UILabel *goodsSalesLabel;
@property (retain, nonatomic) IESECInsetsLabel *logisticsLabel;
@property (copy, nonatomic) id /* block */ closeCurrentCardBlock;
@property (copy, nonatomic) id /* block */ purchaseGoodsBlock;
@property (copy, nonatomic) id /* block */ clickBlankBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTapBlank;
- (void)p_purchaseButtonClicked;
- (void)configureWithGoodsModel:(id)a0;
- (void)p_closeGoodsCard;
- (void)p_loadCardView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

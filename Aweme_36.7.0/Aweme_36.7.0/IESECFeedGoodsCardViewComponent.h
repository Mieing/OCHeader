@class IESECWinGoodsTitleLabel, UIImageView, IESECGoodsPriceLabel, UILabel, UIButton;
@protocol IESECFeedGoodsCardViewComponentDelegate;

@interface IESECFeedGoodsCardViewComponent : UIView <IESECLLComponent>

@property (weak, nonatomic) id<IESECFeedGoodsCardViewComponentDelegate> delegate;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECWinGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) UILabel *goodsSalesLabel;
@property (retain, nonatomic) UIButton *shoppingCartButton;
@property (retain, nonatomic) UIButton *buyButton;
@property (retain, nonatomic) UIButton *goToOtherAppButton;

+ (id /* block */)product;

- (void)updateUIWithModel:(id)a0;
- (void)didTapOther;
- (void)didTapShoppingCartButton:(id)a0 event:(id)a1;
- (void)didTapBuyButton:(id)a0 event:(id)a1;
- (void)didTapOtherApp;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end

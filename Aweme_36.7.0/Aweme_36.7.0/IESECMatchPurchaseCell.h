@class IESECGoodsTitleLabel, IESECGoodsPriceLabel, IESECMatchPurchaseItemModel, UIView, UILabel, IESECUIImageView;
@protocol IESECMatchPurchaseCellProtocol;

@interface IESECMatchPurchaseCell : UICollectionViewCell

@property (retain, nonatomic) IESECMatchPurchaseItemModel *model;
@property (retain, nonatomic) IESECUIImageView *selectImageView;
@property (retain, nonatomic) UIView *selectMaskView;
@property (retain, nonatomic) IESECUIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *imageTapsLabel;
@property (retain, nonatomic) IESECGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *numLabel;
@property (retain, nonatomic) UIView *skuView;
@property (retain, nonatomic) UILabel *skuLabel;
@property (retain, nonatomic) IESECUIImageView *skuImageView;
@property (weak, nonatomic) id<IESECMatchPurchaseCellProtocol> delegate;

- (void)shakeAnimationForView:(id)a0;
- (void)selectedImg;
- (void)selectSku;
- (void).cxx_destruct;

@end

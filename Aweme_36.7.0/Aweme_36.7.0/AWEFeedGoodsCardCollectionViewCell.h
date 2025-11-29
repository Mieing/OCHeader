@class IESECGoodsPriceLabel, UIImageView, NSString, UILabel, IESECGoodsTitleLabel, UIButton;
@protocol AWEGoodsSeedingModelProtocol;

@interface AWEFeedGoodsCardCollectionViewCell : UICollectionViewCell <AWEFeedGoodsCardViewCellProtocol>

@property (retain, nonatomic) id<AWEGoodsSeedingModelProtocol> currentGoods;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *goodsDescriptionLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) UILabel *goodsPriceLabelSuffix;
@property (retain, nonatomic) UILabel *goodsPriceLabelAddition;
@property (retain, nonatomic) UIButton *purchaseButton;
@property (copy, nonatomic) id /* block */ closeCurrentCardBlock;
@property (copy, nonatomic) id /* block */ purchaseGoodsBlock;
@property (copy, nonatomic) id /* block */ clickBlankBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTapBlank;
- (id)descriptionStringWithModel:(id)a0;
- (void)configurePriceLabelGoodsModel:(id)a0;
- (BOOL)isTooLongForShowString:(id)a0;
- (void)p_purchaseButtonClicked;
- (void)configureWithGoodsModel:(id)a0;
- (void)p_closeGoodsCard;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

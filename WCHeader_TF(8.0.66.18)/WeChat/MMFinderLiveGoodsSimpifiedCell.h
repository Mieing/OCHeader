@class UILabel, NSString, MMFinderLiveGoodsSerialNumberView, MMWebImageView, MMFinderLiveTagsLabel;

@interface MMFinderLiveGoodsSimpifiedCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>

@property (retain, nonatomic) MMWebImageView *goodsImageView;
@property (retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView;
@property (retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithModel:(id)a0 cellWidth:(double)a1;
+ (double)imageWidthForCellWidth:(double)a0;
+ (id)identifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addGoodsImageView;
- (void)addGoodsTitleLabel;
- (void)addDescLabel;
- (void)addPriceLabel;
- (void)onWebImageGetDifferentSize;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)a0 isCurAskedProduct:(BOOL)a1;
- (id)accessibilityAttributedLabel;
- (void).cxx_destruct;

@end

@class AWESearchMarketGoodsInfoView;

@interface AWESearchMarketGoodsDoubleColCell : AWESearchMarketGoodsBaseCell

@property (retain, nonatomic) AWESearchMarketGoodsInfoView *infoView;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)setSearchInfoDict:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

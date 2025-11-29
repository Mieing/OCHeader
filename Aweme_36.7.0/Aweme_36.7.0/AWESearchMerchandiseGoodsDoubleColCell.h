@class UIView;

@interface AWESearchMerchandiseGoodsDoubleColCell : AWESearchMerchandiseGoodsBaseCell

@property (retain, nonatomic) UIView *seeAndGetCardEnhancementBorder;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (void)setSearchInfoDict:(id)a0;
- (void)configSeeAndGetBorderWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

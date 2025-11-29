@class NSDictionary;

@interface IESECShopGoodsTitleLabelV2 : YYLabel

@property (retain, nonatomic) NSDictionary *attrDict;
@property (nonatomic) double lineSpace;
@property (nonatomic) double lineHeight;
@property (nonatomic) double tagHeight;
@property (nonatomic) double spacingBetweenTags;
@property (nonatomic) double spacingBetweenTagAndText;
@property (nonatomic) BOOL isCalc;

- (void)setGoodsTitle:(id)a0 tagImageList:(id)a1;
- (id)attributedStringFromTagImageList:(id)a0;
- (id)space:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

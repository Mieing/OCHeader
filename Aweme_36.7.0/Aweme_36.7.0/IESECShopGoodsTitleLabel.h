@class IESECShopGoodsTitleTagView;

@interface IESECShopGoodsTitleLabel : UILabel

@property (retain, nonatomic) IESECShopGoodsTitleTagView *tagView;
@property (nonatomic) double blankWidth;
@property (nonatomic) double tagHeight;
@property (nonatomic) double tagTopOffset;
@property (nonatomic) double lineHeight;
@property (nonatomic) double tagIconFixHeight;
@property (nonatomic) double lineSpace;

+ (double)calcGoodsTitleLabelHeight:(id)a0 tagImageList:(id)a1 layoutConfig:(id)a2;
+ (id)titleAttributeStringWithText:(id)a0 font:(id)a1 lineBreakMode:(long long)a2 headIndent:(double)a3 lineHeight:(double)a4 lineSpace:(double)a5 isCalc:(BOOL)a6;
+ (id)titleAttributeStringWithText:(id)a0 font:(id)a1 lineBreakMode:(long long)a2 headIndent:(double)a3 lineHeight:(double)a4 lineSpace:(double)a5;
+ (id)generateProperTitle:(id)a0 font:(id)a1 tagWidth:(double)a2 blankWidth:(double)a3;

- (void)setGoodsTitle:(id)a0;
- (void)setGoodsTitle:(id)a0 tagImageList:(id)a1;
- (void)setupText:(id)a0 headIndent:(double)a1;
- (void)setGoodsTitle:(id)a0 headIndex:(double)a1;
- (id)generateProperTitle:(id)a0 tagWidth:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

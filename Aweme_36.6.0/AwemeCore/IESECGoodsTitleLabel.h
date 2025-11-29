@class UIFont, UIColor, IESECGoodsPaddingLabel, NSNumber;

@interface IESECGoodsTitleLabel : UILabel

@property (retain, nonatomic) IESECGoodsPaddingLabel *tagLabel;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIColor *tagBorderColor;
@property (retain, nonatomic) NSNumber *tagHeight;
@property (nonatomic) double tagTopOffset;
@property (nonatomic) double lineSpaceHeight;
@property (nonatomic) BOOL tagUseCenterY;
@property (retain, nonatomic) NSNumber *lineHeight;
@property (nonatomic) double tagImageHeight;
@property (nonatomic) double cornerRadiusForTag;
@property (retain, nonatomic) NSNumber *paddingOfTagTitle;

- (void)setGoodsTitle:(id)a0;
- (void)setTagTextFont:(id)a0;
- (void)setGoodsTitle:(id)a0 tagImageArray:(id)a1;
- (void)setGoodsTitle:(id)a0 tagText:(id)a1;
- (void)renderingGoodsTitle:(id)a0 withTextTag:(id)a1;
- (void)renderingGoodsTitle:(id)a0 withIconTags:(id)a1;
- (void)renderingGoodsTitleWithoutTag:(id)a0 space:(double)a1;
- (void)renderingGoodsTitleWithoutTag:(id)a0;
- (void)unsetAsyncAttributedString;
- (void).cxx_destruct;
- (void)setFont:(id)a0;

@end

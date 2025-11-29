@class YYLabel, UIView;

@interface AWEECOMIMDynamicCardRichTextParagraphView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) YYLabel *richLabel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })generateParagraphPaddingWithModel:(id)a0;
+ (double)modifiedMaxLineHeightWithElementModelArr:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithElementModel:(id)a0 modifiedLineHeight:(double)a1 textWidth:(double)a2;
+ (id)displayAttributeStringWithElementModelArr:(id)a0;
+ (long long)textLayoutMaxLineWithElementModel:(id)a0;
+ (id)textFontWithFontSizeType:(long long)a0 elementType:(long long)a1;
+ (double)modifiedLineHeightForTextFont:(id)a0;
+ (id)displayAttributeStringForModel:(id)a0;
+ (id)displayRichStringWithModel:(id)a0;
+ (id)textColorWithTextType:(long long)a0;
+ (double)textBottomPadding;
+ (double)textTopPadding;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)updateRichLabelWithElememtModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

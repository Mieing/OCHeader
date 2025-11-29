@class UIColor, UIFont, NSString, NSMutableDictionary, NSAttributedString, GXTextData;

@interface GXTextNode : GXViewNode {
    BOOL _isAttribute;
    UIColor *_currentColor;
}

@property (nonatomic) long long lineHeight;
@property (retain, nonatomic) UIColor *gradientColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *textDecoration;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gxPadding;
@property (retain, nonatomic) GXTextData *textData;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) NSAttributedString *attributedText;

- (void)bindData:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (void)updateNormalStyle:(id)a0 isMark:(BOOL)a1;
- (BOOL)updateLayoutStyle:(id)a0;
- (void)setupAccessibilityInfo:(id)a0;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void)updateFitContentLayout;
- (void)setupTextGradientColor:(id)a0;
- (void)updateTextNodes:(id)a0;
- (BOOL)updateTextLayoutIfNeed:(id)a0;
- (struct CGSize { double x0; double x1; })labelSizeForFont:(id)a0 maxWidth:(double)a1 lineBreakMode:(long long)a2;
- (void)setupTextPadding:(id)a0;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end

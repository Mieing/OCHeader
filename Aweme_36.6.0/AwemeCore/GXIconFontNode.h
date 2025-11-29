@class UIColor, UIFont, NSString;

@interface GXIconFontNode : GXViewNode {
    NSString *_originalText;
}

@property (retain, nonatomic) UIColor *gradientColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;

- (void)bindData:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (void)updateNormalStyle:(id)a0 isMark:(BOOL)a1;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void)setupTextGradientColor:(id)a0;
- (id)utf8ToUnicode:(id)a0;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end

@class NSString, BDXLynxRichTextStyle;

@interface BDXLynxAbstractTextShadowNode : LynxShadowNode <LynxFontFaceObserver, BDXLynxInlineElement>

@property (retain, nonatomic) BDXLynxRichTextStyle *textStyle;
@property (nonatomic) BOOL dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__210;
+ (id)__lynx_prop_config__351;
+ (id)__lynx_prop_config__402;
+ (id)__lynx_prop_config__483;
+ (id)__lynx_prop_config__614;
+ (id)__lynx_prop_config__945;
+ (id)__lynx_prop_config__1056;
+ (id)__lynx_prop_config__1157;
+ (id)__lynx_prop_config__1248;
+ (id)__lynx_prop_config__1319;
+ (id)__lynx_prop_config__14310;
+ (id)__lynx_prop_config__16511;
+ (id)__lynx_prop_config__18512;
+ (id)__lynx_prop_config__19413;
+ (id)__lynx_prop_config__20314;
+ (id)__lynx_prop_config__20815;
+ (id)__lynx_prop_config__21816;
+ (id)__lynx_prop_config__23317;
+ (id)__lynx_prop_config__24718;

- (void)setFontSize:(double)a0 requestReset:(BOOL)a1;
- (void)setBackgroundColor:(id)a0 requestReset:(BOOL)a1;
- (void)setFontWeight:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setLineSpacing:(double)a0 requestReset:(BOOL)a1;
- (void)onFontFaceLoad;
- (void)setFontStyle:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setLineHeight:(double)a0 requestReset:(BOOL)a1;
- (void)setLetterSpacing:(double)a0 requestReset:(BOOL)a1;
- (void)setFontFamily:(id)a0 requestReset:(BOOL)a1;
- (void)setDirection:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setTextAlign:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setTextDecoration:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setTextShadow:(id)a0 requestReset:(BOOL)a1;
- (void)setTextStrokeWidth:(double)a0 requestReset:(BOOL)a1;
- (void)setTextStrokeColor:(id)a0 requestReset:(BOOL)a1;
- (void)setEnableLanguageAlignment:(BOOL)a0 requestReset:(BOOL)a1;
- (void)resetFontWithTextStyle;
- (void)resetParagraphStyle:(id /* block */)a0;
- (id)inlineAttributeString;
- (void)color:(id)a0 requestReset:(BOOL)a1;
- (void)noTrim:(BOOL)a0 requestReset:(BOOL)a1;
- (void)numberOfLines:(long long)a0 requestReset:(BOOL)a1;
- (void)ellipsizeMode:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;

@end

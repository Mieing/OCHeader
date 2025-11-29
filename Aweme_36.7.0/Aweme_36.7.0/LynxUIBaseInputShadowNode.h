@class NSString, NSMutableDictionary, NSMutableParagraphStyle;

@interface LynxUIBaseInputShadowNode : LynxShadowNode <LynxFontFaceObserver, LynxMeasureDelegate>

@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *placeholder;
@property (nonatomic) double fontSize;
@property (nonatomic) double placeholderFontSize;
@property (retain, nonatomic) NSString *fontFamily;
@property (retain, nonatomic) NSString *placeholderFontFamily;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic) unsigned long long placeholderFontStyle;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double fontWeight;
@property (nonatomic) double placeholderFontWeight;
@property (retain, nonatomic) NSMutableDictionary *inputAttrs;
@property (retain, nonatomic) NSMutableDictionary *placeholderAttrs;
@property (retain, nonatomic) NSMutableParagraphStyle *inputParagraphStyle;
@property struct CGSize { double width; double height; } uiSize;
@property (nonatomic) double widthForMeasure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__21513;
+ (id)__lynx_prop_config__21914;
+ (id)__lynx_prop_config__22315;
+ (id)__lynx_prop_config__1424;
+ (id)__lynx_prop_config__1465;
+ (id)__lynx_prop_config__1786;
+ (id)__lynx_prop_config__1827;
+ (id)__lynx_prop_config__1868;
+ (id)__lynx_prop_config__1909;
+ (id)__lynx_prop_config__19410;
+ (id)__lynx_prop_config__19911;
+ (id)__lynx_prop_config__20412;
+ (id)__lynx_prop_config__23516;

- (void)propsDidUpdate;
- (void)setFontSize:(double)a0 requestReset:(BOOL)a1;
- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (struct CGSize { double x0; double x1; })measureNode:(id)a0 withWidth:(double)a1 widthMode:(long long)a2 height:(double)a3 heightMode:(long long)a4;
- (void)setFontWeight:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setLineSpacing:(id)a0 requestReset:(BOOL)a1;
- (void)setPlaceholder:(id)a0 requestReset:(BOOL)a1;
- (void)onFontFaceLoad;
- (void)setFontStyle:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setLineHeight:(double)a0 requestReset:(BOOL)a1;
- (void)setLetterSpacing:(double)a0 requestReset:(BOOL)a1;
- (void)setFontFamily:(id)a0 requestReset:(BOOL)a1;
- (void)setTextAlign:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)internalSetNeedsLayoutForce;
- (void)setPlaceholderFontFamily:(id)a0 requestReset:(BOOL)a1;
- (void)setPlaceholderFontSize:(double)a0 requestReset:(BOOL)a1;
- (double)lynxFontWeightToUIFontWeight:(unsigned long long)a0;
- (void)setPlaceholderFontWeight:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setPlaceholderFontStyle:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)setNeedsLayout;

@end

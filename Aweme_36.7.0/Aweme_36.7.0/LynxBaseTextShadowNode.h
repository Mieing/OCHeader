@class NSString, NSDictionary, LynxTextStyle;

@interface LynxBaseTextShadowNode : LynxShadowNode <LynxFontFaceObserver> {
    BOOL _styleDirty;
    NSDictionary *_attributes;
}

@property (retain, nonatomic) LynxTextStyle *textStyle;
@property (readonly, nonatomic) BOOL hasNonVirtualOffspring;
@property (readonly, nonatomic) BOOL enableTextRefactor;
@property (readonly, nonatomic) BOOL enableNewClipMode;
@property (readonly, nonatomic) BOOL enableTextLayoutCache;
@property (retain, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__4517;
+ (id)__lynx_prop_config__3460;
+ (id)__lynx_prop_config__3571;
+ (id)__lynx_prop_config__3682;
+ (id)__lynx_prop_config__4013;
+ (id)__lynx_prop_config__4104;
+ (id)__lynx_prop_config__4215;
+ (id)__lynx_prop_config__4406;
+ (id)__lynx_prop_config__4628;
+ (id)__lynx_prop_config__4719;
+ (id)__lynx_prop_config__48610;
+ (id)__lynx_prop_config__50811;
+ (id)__lynx_prop_config__56012;
+ (id)__lynx_prop_config__57013;
+ (id)__lynx_prop_config__58114;
+ (id)__lynx_prop_config__59815;
+ (id)__lynx_prop_config__60816;
+ (id)__lynx_prop_config__61817;
+ (id)__lynx_prop_config__62518;
+ (id)__lynx_prop_config__63619;
+ (id)__lynx_prop_config__64720;
+ (id)__lynx_prop_config__65721;
+ (id)__lynx_prop_config__66722;

- (void)setFontSize:(double)a0 requestReset:(BOOL)a1;
- (void)setBackgroundColor:(id)a0 requestReset:(BOOL)a1;
- (void)setText:(id)a0 requestReset:(BOOL)a1;
- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (void)layoutDidStart;
- (void)setFontWeight:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setTextGradient:(id)a0;
- (void)setLineSpacing:(double)a0 requestReset:(BOOL)a1;
- (void)setUIOperation:(id)a0;
- (id)generateAttributedString:(id)a0 withTextMaxLength:(long long)a1 withDirection:(long long)a2;
- (void)handleRawTextValue:(id)a0 withAttributedString:(id)a1 withTextMaxLength:(long long *)a2 withTextAttribute:(id)a3 withIsRootText:(unsigned char)a4 withDirection:(long long)a5;
- (double)calcVerticalPosition:(id)a0 nodeHeight:(double)a1 font:(id)a2;
- (void)markStyleDirty;
- (void)alignHiddenNativeLayoutNode:(id)a0 alignContext:(id)a1;
- (BOOL)isUndefinedValue:(double)a0;
- (void)onFontFaceLoad;
- (id)generateAttributedString:(id)a0 withTextMaxLength:(long long)a1;
- (void)setColor:(id)a0 requestReset:(BOOL)a1;
- (void)setFontStyle:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setLineHeight:(double)a0 requestReset:(BOOL)a1;
- (void)setLetterSpacing:(double)a0 requestReset:(BOOL)a1;
- (void)setFontFamily:(id)a0 requestReset:(BOOL)a1;
- (void)setDirection:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setTextAlign:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setTextDecoration:(id)a0 requestReset:(BOOL)a1;
- (void)setTextShadow:(id)a0 requestReset:(BOOL)a1;
- (void)setTextStrokeWidth:(double)a0 requestReset:(BOOL)a1;
- (void)setTextStrokeColor:(id)a0 requestReset:(BOOL)a1;
- (void)setEnableFontScaling:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setTextFakeBold:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEnableLanguageAlignment:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setWordBreakStrategy:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setFontVariationSettings:(id)a0 requestReset:(BOOL)a1;
- (void)setFontFeatureSettings:(id)a0 requestReset:(BOOL)a1;
- (void)setFontOpticalSizing:(int)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)hasCustomLayout;

@end

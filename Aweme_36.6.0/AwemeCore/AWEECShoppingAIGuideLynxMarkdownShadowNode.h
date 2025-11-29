@class AWEECShoppingAIGuideGrowingLabel, NSString, NSDictionary, AWEECShoppingAIGuideLynxMarkdownBundle, MeasureParam;

@interface AWEECShoppingAIGuideLynxMarkdownShadowNode : LynxShadowNode <LynxCustomMeasureDelegate> {
    AWEECShoppingAIGuideGrowingLabel *_computeHeightLabel;
    BOOL _isBold;
    unsigned long long _fontSize;
    NSString *_fontColor;
    unsigned long long _lineNumbers;
    BOOL _useStdMarkdown;
    NSDictionary *_bizOptions;
    NSDictionary *_markdownStyle;
    NSString *_content;
    AWEECShoppingAIGuideLynxMarkdownBundle *_bundle;
    BOOL _use_markdown_changed;
    BOOL _content_changed;
    struct CGSize { double width; double height; } _layout_size;
    double _max_layout_height;
    MeasureParam *_measure_param;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1074;
+ (id)__lynx_prop_config__1135;
+ (id)__lynx_prop_config__881;
+ (id)__lynx_prop_config__952;
+ (id)__lynx_prop_config__1013;
+ (id)__lynx_prop_config__1206;
+ (id)__lynx_prop_config__1267;
+ (id)__lynx_prop_config__1328;

- (void)setFontSize:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)dispatchCustomEvent:(id)a0 Detail:(id)a1;
- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (void)layoutDidStart;
- (struct CGSize { double x0; double x1; })measureNode:(id)a0 withWidth:(double)a1 widthMode:(long long)a2 height:(double)a3 heightMode:(long long)a4;
- (BOOL)isBindEvent:(id)a0;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (void)setFontWeight:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setFontColor:(id)a0 requestReset:(BOOL)a1;
- (void)setLineNumbers:(unsigned long long)a0 requestReset:(BOOL)a1;
- (void)setUseStdMarkdown:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setBizOptions:(id)a0 requestReset:(BOOL)a1;
- (void)setMarkdownStyle:(id)a0 requestReset:(BOOL)a1;
- (void)setContent:(id)a0 requestReset:(BOOL)a1;
- (id)getExtraBundle;
- (BOOL)needsEventSet;
- (void).cxx_destruct;

@end

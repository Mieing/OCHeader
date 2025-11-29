@class LatexParam, LatexIcon, NSString;

@interface AWESearchLynxLatexShadowNode : LynxShadowNode <LynxCustomMeasureDelegate>

@property (retain, nonatomic) LatexParam *latexParam;
@property (retain, nonatomic) LatexIcon *latexIcon;
@property (nonatomic) double texWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFixThreadCrash;
+ (id)__lynx_prop_config__1583;
+ (id)__lynx_prop_config__1140;
+ (id)__lynx_prop_config__1271;
+ (id)__lynx_prop_config__1472;
+ (id)__lynx_prop_config__1694;
+ (id)__lynx_prop_config__2065;
+ (id)__lynx_prop_config__2686;
+ (id)__lynx_prop_config__2897;

- (void)setFontSize:(double)a0 requestReset:(BOOL)a1;
- (void)setBackgroundColor:(id)a0 requestReset:(BOOL)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (void)layoutDidStart;
- (struct CGSize { double x0; double x1; })measureNode:(id)a0 withWidth:(double)a1 widthMode:(long long)a2 height:(double)a3 heightMode:(long long)a4;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (void)setFontWeight:(unsigned long long)a0 requestReset:(BOOL)a1;
- (id)getExtraBundle;
- (void)setLineSpacing:(double)a0 requestReset:(BOOL)a1;
- (void)setColor:(id)a0 requestReset:(BOOL)a1;
- (void)setFontFamily:(id)a0 requestReset:(BOOL)a1;
- (void)content:(id)a0 requestReset:(BOOL)a1;
- (void)setTexWidth:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;

@end

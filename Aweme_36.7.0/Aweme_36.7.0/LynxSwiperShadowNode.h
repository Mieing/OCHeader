@interface LynxSwiperShadowNode : LynxCustomMeasureShadowNode

@property (nonatomic) double previousMargin;
@property (nonatomic) double nextMargin;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemWidth;
@property (nonatomic) double xScale;
@property (nonatomic) double yScale;
@property (nonatomic) BOOL compatible;
@property (nonatomic) BOOL vertical;
@property (nonatomic) unsigned long long layoutType;

+ (id)__lynx_prop_config__552;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__441;
+ (id)__lynx_prop_config__14610;
+ (id)__lynx_prop_config__946;
+ (id)__lynx_prop_config__663;
+ (id)__lynx_prop_config__774;
+ (id)__lynx_prop_config__855;
+ (id)__lynx_prop_config__1057;
+ (id)__lynx_prop_config__1158;
+ (id)__lynx_prop_config__1389;

- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (void)swiperMode:(id)a0 requestReset:(BOOL)a1;
- (void)itemWidth:(id)a0 requestReset:(BOOL)a1;
- (void)itemHeight:(id)a0 requestReset:(BOOL)a1;
- (void)pageMargin:(id)a0 requestReset:(BOOL)a1;
- (void)previousMargin:(id)a0 requestReset:(BOOL)a1;
- (void)nextMargin:(id)a0 requestReset:(BOOL)a1;
- (void)minXScale:(id)a0 requestReset:(BOOL)a1;
- (void)minYScale:(id)a0 requestReset:(BOOL)a1;
- (void)vertical:(BOOL)a0 requestReset:(BOOL)a1;
- (void)markCompatible:(BOOL)a0 requestReset:(BOOL)a1;

@end

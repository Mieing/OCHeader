@class UIColor, UISlider;

@interface BDXLynxVideoSeekView : LynxUIView

@property (nonatomic) double customScale;
@property (retain, nonatomic) UIColor *customColor;
@property (nonatomic) BOOL needRedrawThumb;
@property (retain, nonatomic) UISlider *seek;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__802;
+ (id)__lynx_prop_config__751;
+ (id)__lynx_prop_config__863;
+ (id)__lynx_prop_config__934;
+ (id)__lynx_prop_config__985;

- (void)layoutDidFinished;
- (void)onNodeReady;
- (id)parseColor:(id)a0;
- (void)didSeekValueChanged:(id)a0 forEvent:(id)a1;
- (void)currentDuration:(id)a0 requestReset:(BOOL)a1;
- (id)makeCircleWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
- (void)setCustomColor:(id)a0 requestReset:(BOOL)a1;
- (void)setCustomScale:(id)a0 requestReset:(BOOL)a1;
- (void)current_duration:(id)a0 requestReset:(BOOL)a1;
- (void)duration:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end

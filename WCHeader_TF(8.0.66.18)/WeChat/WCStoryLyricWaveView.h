@class NSArray, UIColor;

@interface WCStoryLyricWaveView : MMUIView

@property (retain, nonatomic) NSArray *animationLayers;
@property (retain, nonatomic) UIColor *waveColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithColor:(id)a0;
- (void)setupView;
- (void)startAnimation;
- (void)addAnimationInLayerArray:(id)a0 usedForCompose:(BOOL)a1;
- (void)stopAnimation;
- (id)exportAnimatedLayer;
- (void)setupAnimationLayer:(id)a0 withIndex:(unsigned long long)a1 userForCompose:(BOOL)a2;
- (id)createFrameValue;
- (id)createDurationArray;
- (void).cxx_destruct;

@end

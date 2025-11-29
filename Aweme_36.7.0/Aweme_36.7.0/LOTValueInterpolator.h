@class NSArray, LOTKeyframe;

@interface LOTValueInterpolator : NSObject

@property (retain, nonatomic) NSArray *keyframes;
@property (weak, nonatomic) LOTKeyframe *leadingKeyframe;
@property (weak, nonatomic) LOTKeyframe *trailingKeyframe;
@property (readonly, nonatomic) BOOL hasDelegateOverride;

- (void)setValueDelegate:(id)a0;
- (id)initWithKeyframes:(id)a0;
- (BOOL)hasUpdateForFrame:(id)a0;
- (void)updateKeyframeSpanForFrame:(id)a0;
- (double)progressForFrame:(id)a0;
- (void).cxx_destruct;

@end

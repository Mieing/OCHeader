@class UIVisualEffectView;

@interface BDSHBlurComponent : BDSHViewComponent

@property (retain, nonatomic) UIVisualEffectView *blurEffect;

- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void).cxx_destruct;
- (id)contentView;

@end

@class NSMutableArray;

@interface MAVEffectManager : NSObject

@property (retain, nonatomic) NSMutableArray *effectArray;

+ (id)createEffect:(long long)a0;

- (id)init;
- (id)createEffect:(long long)a0;
- (id)createEffect:(long long)a0 path:(id)a1;
- (unsigned long long)addEffect:(id)a0;
- (id)addBlurEffect;
- (id)addGradientBlurEffect;
- (void)removeEffect:(id)a0;
- (void)removeEffectOfType:(long long)a0;
- (void)clearEffects;
- (void)clearStickers;
- (void)setEffectParams:(long long)a0 params:(id)a1;
- (void)setEffectRangeParams:(long long)a0 params:(id)a1;
- (BOOL)bringToFront:(long long)a0;
- (int)getVLogEffectReplacementImages:(long long)a0;
- (struct CGSize { double x0; double x1; })getVLogEffectSize:(long long)a0;
- (long long)getVLogEffectDuration:(long long)a0;
- (void)reset;
- (BOOL)isEffectArrayEmpty;
- (void).cxx_destruct;

@end

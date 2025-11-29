@interface RfxPagPlayerImpl : NSObject {
    struct shared_ptr<rfx::RfxPagPlayer> { struct RfxPagPlayer *__ptr_; struct __shared_weak_count *__cntrl_; } pagPlayer;
}

- (id)initWithDeviceKind:(int)a0;
- (id)init;
- (void)dealloc;
- (void)setComposition:(id)a0;
- (void)setSurface:(id)a0;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)a0;
- (int)scaleMode;
- (void)setScaleMode:(int)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)a0;
- (void)prepare;
- (BOOL)flush;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

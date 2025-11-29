@class RfxPagPlayerImpl, RfxPagSurface, RfxPagFile;

@interface RfxPagPlayer : NSObject {
    RfxPagPlayerImpl *pagPlayer;
    RfxPagSurface *pagSurface;
    RfxPagFile *pagFile;
}

- (id)init;
- (id)initWithDeviceKind:(int)a0;
- (void)dealloc;
- (id)getComposition;
- (void)setComposition:(id)a0;
- (id)getSurface;
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

@end

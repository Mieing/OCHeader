@interface PAGPlayerImpl : NSObject {
    void *pagPlayer;
}

- (id)init;
- (void)dealloc;
- (id)getComposition;
- (void)setComposition:(id)a0;
- (void)setSurface:(id)a0;
- (BOOL)videoEnabled;
- (void)setVideoEnabled:(BOOL)a0;
- (BOOL)cacheEnabled;
- (void)setCacheEnabled:(BOOL)a0;
- (BOOL)useDiskCache;
- (void)setUseDiskCache:(BOOL)a0;
- (float)cacheScale;
- (void)setCacheScale:(float)a0;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)a0;
- (int)scaleMode;
- (void)setScaleMode:(int)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)a0;
- (long long)currentFrame;
- (void)prepare;
- (BOOL)flush;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBounds:(id)a0;
- (id)getLayersUnderPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hitTestPoint:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 pixelHitTest:(BOOL)a2;

@end

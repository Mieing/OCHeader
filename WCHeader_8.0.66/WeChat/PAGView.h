@class PAGPlayer, PAGSurface, NSString, PAGFile, PAGAnimator;

@interface PAGView : UIView {
    PAGPlayer *pagPlayer;
    PAGSurface *pagSurface;
    PAGFile *pagFile;
    NSString *filePath;
    PAGAnimator *animator;
    BOOL _isVisible;
}

+ (void)startHookForFinderLive;
+ (void)load;
+ (Class)layerClass;

- (id)finderLiveRenderStatistics;
- (void)setFinderLiveRenderStatistics:(id)a0;
- (id)mm_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mm_setRepeatCount:(int)a0;
- (int)finderLivePAGRepeatCount;
- (void)setFinderLivePAGRepeatCount:(int)a0;
- (BOOL)mm_flush;
- (void)mm_onAnimationFlush:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initPAG;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentScaleFactor:(double)a0;
- (void)didMoveToWindow;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)checkVisible;
- (void)initPAGSurface;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)onAnimationFlush:(double)a0;
- (BOOL)sync;
- (void)setSync:(BOOL)a0;
- (int)repeatCount;
- (void)setRepeatCount:(int)a0;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (id)getPath;
- (BOOL)setPath:(id)a0;
- (void)setPathAsync:(id)a0 completionBlock:(id /* block */)a1;
- (id)getComposition;
- (void)setComposition:(id)a0;
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
- (BOOL)flush;
- (id)getLayersUnderPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)freeCache;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (struct __CVBuffer { } *)makeSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBounds:(id)a0;
- (void)AsyncSurfacePrepared:(id)a0;

@end

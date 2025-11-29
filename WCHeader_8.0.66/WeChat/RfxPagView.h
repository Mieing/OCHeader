@class NSLock, NSString, NSRecursiveLock, RfxPagSurface, NSHashTable, NSMutableDictionary, RfxPagValueAnimator, RfxPagPlayer, RfxPagFile;

@interface RfxPagView : UIView {
    int deviceKind;
    RfxPagPlayer *pagPlayer;
    RfxPagSurface *pagSurface;
    RfxPagFile *pagFile;
    NSString *filePath;
    RfxPagValueAnimator *valueAnimator;
    NSMutableDictionary *textReplacementMap;
    NSMutableDictionary *imageReplacementMap;
    NSHashTable *listeners;
}

@property BOOL isAsyncFlushing;
@property BOOL bufferPrepared;
@property BOOL isInBackground;
@property BOOL progressExplicitlySet;
@property (retain, nonatomic) NSRecursiveLock *updateTimeLock;
@property BOOL isVisible;
@property BOOL isPlaying;
@property (retain, nonatomic) NSLock *listenersLock;
@property (nonatomic) BOOL sync;

+ (void)startHookForFinderLive;
+ (void)load;
+ (id)FlushQueue;
+ (BOOL)UseOpenGLBackend;
+ (void)RegisterFlushQueueDestoryMethod;
+ (Class)layerClass;

- (id)finderLiveRenderStatistics;
- (void)setFinderLiveRenderStatistics:(id)a0;
- (id)mm_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mm_setRepeatCount:(int)a0;
- (int)finderLivePAGRepeatCount;
- (void)setFinderLivePAGRepeatCount:(int)a0;
- (BOOL)mm_flush;
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
- (void)onAnimationUpdate;
- (void)onAnimationStart;
- (void)onAnimationEnd;
- (void)onAnimationCancel;
- (void)onAnimationRepeat;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)play;
- (void)doPlay;
- (void)stop;
- (void)setRepeatCount:(int)a0;
- (id)getPath;
- (BOOL)setPath:(id)a0;
- (id)getComposition;
- (void)setComposition:(id)a0;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)a0;
- (int)scaleMode;
- (void)setScaleMode:(int)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)a0;
- (BOOL)flush;
- (void)updateView;
- (void)updateViewAsync;
- (void)applicationDidBecomeActive:(id)a0;
- (void)renderTargetBufferPrepared:(id)a0;
- (void)applicationWillResignActive:(id)a0;

@end

@class PAGAnimator, NSString, PAGComposition, UIImage, PAGDecoder, NSMutableDictionary;

@interface PAGImageView : UIImageView {
    NSString *filePath;
    PAGAnimator *animator;
    PAGComposition *pagComposition;
    PAGDecoder *pagDecoder;
    long long duartion;
    float renderScaleFactor;
    NSMutableDictionary *imagesMap;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } imageViewLock;
    struct __CVPixelBufferPool { } *diskBufferPool;
}

@property BOOL isVisible;
@property long long currentFrameIndex;
@property (retain) UIImage *currentUIImage;
@property long long pagContentVersion;
@property (nonatomic) BOOL memoryCacheEnabled;
@property (nonatomic) BOOL memeoryCacheFinished;
@property (nonatomic) long long fileWidth;
@property (nonatomic) long long fileHeight;
@property (nonatomic) float maxFrameRate;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;

+ (id)ImageViewFlushQueue;
+ (void)RegisterFlushQueueDestoryMethod;
+ (unsigned long long)MaxDiskSize;
+ (void)SetMaxDiskSize:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initPAG;
- (void)dealloc;
- (void)setCompositionInternal:(id)a0 maxFrameRate:(float)a1;
- (struct __CVBuffer { } *)getDiskCacheCVPixelBuffer;
- (struct __CVBuffer { } *)getMemoryCacheCVPixelBuffer;
- (id)getPAGDecoder;
- (void)onAnimationFlush:(double)a0;
- (void)didMoveToWindow;
- (void)checkVisible;
- (BOOL)updateImageViewFrom:(struct __CVBuffer { } *)a0 atIndex:(long long)a1;
- (BOOL)checkPAGCompositionChanged;
- (void)submitToImageView;
- (void)applicationDidBecomeActive:(id)a0;
- (void)freeCache;
- (void)reset;
- (id)imageForCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRenderScale:(float)a0;
- (float)renderScale;
- (void)setContentScaleFactor:(double)a0;
- (BOOL)cacheAllFramesInMemory;
- (void)setCacheAllFramesInMemory:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)play;
- (void)pause;
- (unsigned long long)numFrames;
- (id)currentImage;
- (BOOL)isPlaying;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (int)repeatCount;
- (void)setRepeatCount:(int)a0;
- (id)getPath;
- (BOOL)setPath:(id)a0;
- (BOOL)setPath:(id)a0 maxFrameRate:(float)a1;
- (void)setPathAsync:(id)a0 completionBlock:(id /* block */)a1;
- (void)setPathAsync:(id)a0 maxFrameRate:(float)a1 completionBlock:(id /* block */)a2;
- (id)getComposition;
- (void)setComposition:(id)a0;
- (void)setComposition:(id)a0 maxFrameRate:(float)a1;
- (void)setCurrentFrame:(unsigned long long)a0;
- (unsigned long long)currentFrame;
- (BOOL)flush;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

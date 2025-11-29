@class NSString, CADisplayLink, UIImage, NSOperationQueue, NSObject, NSMutableDictionary;
@protocol OS_dispatch_semaphore, YYAnimatedImage;

@interface YYAnimatedImageView : UIImageView {
    UIImage<YYAnimatedImage> *_curAnimatedImage;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSOperationQueue *_requestQueue;
    CADisplayLink *_link;
    double _time;
    UIImage *_curFrame;
    unsigned long long _curIndex;
    unsigned long long _totalFrameCount;
    BOOL _loopEnd;
    unsigned long long _curLoop;
    unsigned long long _totalLoop;
    NSMutableDictionary *_buffer;
    BOOL _bufferMiss;
    unsigned long long _maxBufferCount;
    long long _incrBufferCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _curContentsRect;
    BOOL _curImageHasContentsRect;
    BOOL postiveOrderFlag;
}

@property (nonatomic) BOOL currentIsPlayingAnimation;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) unsigned long long currentAnimatedImageIndex;
@property (copy, nonatomic) NSString *runloopMode;
@property (nonatomic) unsigned long long maxBufferSize;
@property (nonatomic) unsigned long long animationType;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)clearImageBuffer;
- (unsigned long long)currentImageType;
- (void)calcMaxBufferCount;
- (void)setImage:(id)a0 withType:(unsigned long long)a1;
- (void)resetAnimated;
- (void)imageChanged;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forImage:(id)a1;
- (void)didMoved;
- (id)initWithImage:(id)a0;
- (void)stopAnimating;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimating;
- (void).cxx_destruct;
- (BOOL)isAnimating;
- (void)setImage:(id)a0;
- (id)init;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)displayLayer:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)step:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)setHighlightedImage:(id)a0;
- (void)setAnimationImages:(id)a0;
- (void)setHighlightedAnimationImages:(id)a0;
- (id)imageForType:(unsigned long long)a0;

@end

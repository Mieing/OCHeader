@class NSString, CADisplayLink, BDImage, BDAnimatedImageCache, BDAnimateImageFrame, BDAnimatedPreferredFrameRateRange, NSObject, NSMutableIndexSet;
@protocol OS_dispatch_queue, BDAnimatedImagePlayerDelegate;

@interface BDAnimatedImagePlayer : NSObject {
    CADisplayLink *_displayLink;
    NSMutableIndexSet *_taskIndexes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskLock;
    NSObject<OS_dispatch_queue> *_frame_prefetch_queue;
    unsigned long long _maxFrameCache;
    BOOL _needCalculateMaxFrameCount;
    unsigned long long _currentLoop;
    BOOL _positiveOrderFlag;
    BOOL _cancelAsynchronousDecodeTask;
    BOOL _isStarting;
    BOOL _isPausing;
}

@property (class, retain, nonatomic) BDAnimatedPreferredFrameRateRange *allAnimatedPreferredFrameRateRange;
@property (class, nonatomic) BOOL cacheAnimatedFramesWithImage;

@property (retain) BDImage *image;
@property (retain) BDAnimatedImageCache *animatedImageCacheWrapper;
@property (weak, nonatomic) id<BDAnimatedImagePlayerDelegate> delegate;
@property (nonatomic) BOOL frameCacheAutomatically;
@property (nonatomic) BOOL cacheAllFrame;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) unsigned long long customLoopCount;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long currentIndex;
@property (readonly, nonatomic) BDAnimateImageFrame *currentFrame;
@property (retain, nonatomic) NSString *animateRunLoopMode;
@property (retain, nonatomic) BDAnimatedPreferredFrameRateRange *animatedPreferredFrameRateRange;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) BOOL enableWaterLevel;
@property (nonatomic) double waterLevelDuration;

+ (void)_aweLazyRegisterStaticLoad_Monitor;
+ (id)playerWithImage:(id)a0;

- (void)stopPlay;
- (void)startPlay;
- (id)creat_normal_frame_prefetch_queue;
- (void)configureDisplayLinkFrameRate;
- (void)calculateMaxCacheCount;
- (void)prefetchNextFrameIfNeed;
- (void)resetFrameCache;
- (id)frame_prefetch_queue;
- (void)prefetchNextFrame:(unsigned long long)a0;
- (void)updateProgressImage:(id)a0;
- (void)clearImageBuffer;
- (void)animation_monitor_startPlay;
- (void)animation_monitor_stopPlay;
- (void)animation_monitor_pause;
- (id)initWithImage:(id)a0;
- (unsigned long long)currentIndex;
- (void).cxx_destruct;
- (void)pause;
- (BOOL)isPlaying;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)setCurrentIndex:(unsigned long long)a0;
- (void)nextFrame;

@end

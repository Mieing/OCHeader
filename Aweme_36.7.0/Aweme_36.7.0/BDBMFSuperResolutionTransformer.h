@class NSError, NSString;

@interface BDBMFSuperResolutionTransformer : BDSuperResolutionTransformer

@property (class, nonatomic) double minLevel;
@property (class, nonatomic) double maxLevel;
@property (class, nonatomic) BOOL enableMultiThread;
@property (class, nonatomic) unsigned long long maxConcurrentCount;
@property (class, nonatomic) unsigned long long concurrencyExceededStrategy;
@property (class, nonatomic) unsigned long long maxCacheCount;

@property (nonatomic) BOOL srFinished;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long srDuration;
@property (nonatomic) long long srWidth;
@property (nonatomic) long long srHeight;
@property (nonatomic) double srStretch;
@property (nonatomic) long long srStatus;
@property (copy, nonatomic) NSString *srType;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) unsigned long long cacheControl;

+ (void)removeSuperResolutionCache_sync;
+ (void)removeSuperResolutionCache_async;
+ (BOOL)canProcessSRForImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2;
+ (double)srLevelForImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void)startPreprocessingWithDecoderConfig:(id)a0;
- (void)finishPreprocessingWithDecoderConfig:(id)a0;
- (BOOL)needCacheCanvas;
- (void)configStretchWithWidth:(unsigned long long)a0 srWidth:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end

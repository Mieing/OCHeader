@class NSString, NSArray, NSData, BDAnimatedImageCache;
@protocol BDImageDecoder;

@interface BDImage : UIImage

@property (class, nonatomic) BOOL bd_IsHeicSerialPreDecode;

@property (nonatomic) unsigned long long codeType;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL isHDR;
@property (nonatomic) BOOL isAllFramesLoaded;
@property (copy) NSArray *framesCache;
@property (retain) BDAnimatedImageCache *animatedImageCache;
@property (nonatomic) double allFramesDuration;
@property (retain, nonatomic) id<BDImageDecoder> decoder;
@property (readonly, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) BOOL isAnimateImage;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (nonatomic) BOOL isCustomHeicDecoder;
@property (nonatomic) BOOL hasDownsampled;
@property (nonatomic) BOOL hasCroped;
@property (nonatomic) struct CGSize { double width; double height; } originSize;

+ (id)imageWithData:(id)a0 config:(id)a1 error:(id *)a2;
+ (id)imageWithData:(id)a0 scale:(double)a1 decodeForDisplay:(BOOL)a2 error:(id *)a3;
+ (id)imageWithData:(id)a0 scale:(double)a1 decodeForDisplay:(BOOL)a2 shouldScaleDown:(BOOL)a3 error:(id *)a4;
+ (id)imageWithData:(id)a0 scale:(double)a1 decodeForDisplay:(BOOL)a2 shouldScaleDown:(BOOL)a3 downsampleSize:(struct CGSize { double x0; double x1; })a4 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 error:(id *)a6;
+ (id)imageNamed:(id)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageWithData:(id)a0 scale:(double)a1;

- (id)bd_animatedImageData;
- (void)preloadAllFrames;
- (id)initWithCoderInternal:(id)a0;
- (void)changeImageWithData:(id)a0 finished:(BOOL)a1;
- (id)frameAtIndex:(long long)a0 ignoreAnimatedImageCache:(BOOL)a1;
- (id)initWithAnimatedBDImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)a0;
- (id)images;
- (id)initWithData:(id)a0;
- (double)duration;
- (id)initWithData:(id)a0 scale:(double)a1;
- (id)frameAtIndex:(long long)a0;

@end

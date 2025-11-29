@class NSArray, NSString, NSData, BDImageDecoderConfig, NSError;

@interface BDImageDecoderImageIO : NSObject <BDImageDecoder> {
    struct CGImageSource { } *_imageSource;
    struct __CFString { } *_imageFormat;
}

@property (retain) NSData *imageData;
@property unsigned long long frameNum;
@property unsigned long long loopNum;
@property (copy) NSArray *durations;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) unsigned long long sizeType;
@property (nonatomic) BOOL isHDR;
@property (retain, nonatomic) BDImageDecoderConfig *config;
@property BOOL hasIncrementalData;
@property BOOL finished;
@property (retain) NSError *decodeError;
@property (nonatomic) unsigned long long decoderOptions;
@property (readonly, nonatomic) unsigned long long codeType;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL progressiveDownloading;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) unsigned long long imageCount;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDecode:(id)a0;
+ (BOOL)supportProgressDecode:(id)a0;
+ (BOOL)supportStaticProgressDecode:(unsigned long long)a0;
+ (BOOL)isAnimatedImage:(id)a0;
+ (id)imageDictionaryProperty:(struct __CFString { } *)a0;
+ (id)imageLoopCountProperty:(struct __CFString { } *)a0;
+ (id)imageUnclampedDelayTimeProperty:(struct __CFString { } *)a0;
+ (id)imageDelayTimeProperty:(struct __CFString { } *)a0;
+ (void)initialize;

- (id)initWithData:(id)a0 config:(id)a1;
- (id)initWithIncrementalData:(id)a0 config:(id)a1;
- (void)changeDecoderWithData:(id)a0 finished:(BOOL)a1;
- (void)setupWithImageSource:(struct CGImageSource { } *)a0 config:(id)a1;
- (void)scanAndCheckFramesValid;
- (id)hdrOptionsFor:(id)a0 decodedToHDR:(BOOL *)a1;
- (BOOL)isHDRCGImage:(struct CGImage { } *)a0 decodedToHDR:(BOOL)a1;
- (struct CGImage { } *)copyImageAtIndex:(unsigned long long)a0;
- (id)initWithContentOfFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;
- (double)frameDelayAtIndex:(unsigned long long)a0;

@end

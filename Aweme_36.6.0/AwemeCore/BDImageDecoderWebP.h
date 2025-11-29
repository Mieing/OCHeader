@class NSString, NSMutableDictionary, NSData, BDImageDecoderConfig, NSError;

@interface BDImageDecoderWebP : NSObject <BDImageDecoder> {
    struct WebPDemuxer { } *_webPDemux;
    struct CGContext { } *_blendContext;
    unsigned long long _lastBlendIndex;
    struct CGColorSpace { } *_imageColorSpace;
    NSMutableDictionary *_durations;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _durations_lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filePath;
@property unsigned long long imageNum;
@property unsigned long long loopNum;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) unsigned long long sizeType;
@property (nonatomic) BOOL isHDR;
@property (retain, nonatomic) BDImageDecoderConfig *config;
@property BOOL hasIncrementalData;
@property BOOL finished;
@property long long orientation;
@property (retain) NSError *decodeError;
@property (readonly, nonatomic) unsigned long long codeType;
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

- (id)initWithData:(id)a0 config:(id)a1;
- (id)initWithIncrementalData:(id)a0 config:(id)a1;
- (void)changeDecoderWithData:(id)a0 finished:(BOOL)a1;
- (BOOL)isFullOpaqueImage;
- (void)initializeContextIfNeed;
- (struct CGContext { } *)blendContext;
- (struct CGImage { } *)copyImageAtIndex:(unsigned long long)a0;
- (id)initWithContentOfFile:(id)a0;
- (unsigned long long)exifOrientation;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (double)frameDelayAtIndex:(unsigned long long)a0;
- (struct CGColorSpace { } *)imageColorSpace;

@end

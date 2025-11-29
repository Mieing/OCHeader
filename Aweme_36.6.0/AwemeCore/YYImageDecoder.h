@class NSData, NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface YYImageDecoder : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _sourceTypeDetected;
    struct CGImageSource { } *_source;
    struct { struct { unsigned int x0; unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; } x0; struct *x1; unsigned int x2; struct *x3; unsigned int x4; unsigned int x5; unsigned int *x6; unsigned int x7; unsigned int x8; unsigned int x9; BOOL x10; } *_apngSource;
    struct WebPDemuxer { } *_webpSource;
    long long _orientation;
    NSObject<OS_dispatch_semaphore> *_framesLock;
    NSArray *_frames;
    BOOL _needBlend;
    unsigned long long _blendFrameIndex;
    struct CGContext { } *_blendCanvas;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;

+ (id)decoderWithData:(id)a0 scale:(double)a1;

- (id)frameAtIndex:(unsigned long long)a0 decodeForDisplay:(BOOL)a1;
- (double)frameDurationAtIndex:(unsigned long long)a0;
- (BOOL)updateData:(id)a0 final:(BOOL)a1;
- (BOOL)_updateData:(id)a0 final:(BOOL)a1;
- (id)_frameAtIndex:(unsigned long long)a0 decodeForDisplay:(BOOL)a1;
- (id)_framePropertiesAtIndex:(unsigned long long)a0;
- (struct CGImage { } *)_newUnblendedImageAtIndex:(unsigned long long)a0 extendToCanvas:(BOOL)a1 decoded:(BOOL *)a2;
- (BOOL)_createBlendContextIfNeeded;
- (struct CGImage { } *)_newBlendedImageWithFrame:(id)a0;
- (void)_blendImageWithFrame:(id)a0;
- (void)_updateSourceWebP;
- (void)_updateSourceAPNG;
- (void)_updateSourceImageIO;
- (id)framePropertiesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)imageProperties;
- (id)initWithScale:(double)a0;
- (void)dealloc;
- (id)_imageProperties;
- (void)_updateSource;

@end

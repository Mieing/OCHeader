@class MetalFilterBnBalanceWrapper, NSString, NSArray, NSObject;
@protocol IBmfAesBoost, OS_dispatch_queue, MTLBuffer;

@interface MetalFilterBmfBnBalance : MetalFilterDefault <MetalFilterSource> {
    unsigned int curColorConversionType;
    id<MTLBuffer> curColorConversionBuffer;
    long long curYCbCrMatrixType;
}

@property (retain, nonatomic) id<IBmfAesBoost> bmfAesBoost;
@property long long lifeId;
@property BOOL isBMFInitFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfBnBalaInitprocessorQueue;
@property (retain, nonatomic) NSString *cacheDir;
@property (retain, nonatomic) NSArray *groupList;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *area;
@property (nonatomic) long long lutDownloadScale;
@property (weak, nonatomic) MetalFilterBnBalanceWrapper *lastBnwrapper;
@property BOOL isBmfYUVOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFragmentShader;
- (id)getViewInterface;
- (BOOL)checkIsRenderToMetalView;
- (BOOL)supportRenderToMetalView;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (void)initBmfAesboost;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)processFrameYUVOut:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 videoBuffer:(struct VideoFrameBuffer { void /* function */ **x0; } *)a1 metalBuffer:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a2 wrapper:(id)a3;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)processFrameLutOut:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 videoBuffer:(struct VideoFrameBuffer { void /* function */ **x0; } *)a1 metalBuffer:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a2 wrapper:(id)a3;
- (void)setInt64Value:(long long)a0 forKey:(int)a1;
- (void)checkColorConversion:(unsigned int)a0 YCbCrMatrixAttachment:(void *)a1;
- (BOOL)returnBmfResult:(void *)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end

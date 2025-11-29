@class NSString, NSMutableDictionary, EAGLContext, MetalFilterCrop;

@interface BefFilterComposer : MetalFilterDefault {
    NSString *TAG;
    EAGLContext *openGLContext;
    struct __CVBuffer { } *copyPixelBuffer;
    struct __CVBuffer { } *outPixelBuffer;
    struct __CVOpenGLESTextureCache { } *CVGLTextureCache;
    struct __CVOpenGLESTextureCache { } *outCVGLTextureCache;
    struct __CVBuffer { } *CVGLTexture;
    struct __CVBuffer { } *outCVGLTexture;
    unsigned int openGLTexture;
    unsigned int outOpenGLTexture;
    double startTime;
    long long extraTextureWidth;
    long long extraTextureHeight;
    struct __CVBuffer { } *extraPixelBuffer;
    struct __CVOpenGLESTextureCache { } *extraCVGLTextureCache;
    struct __CVBuffer { } *extraCVGLTexture;
    unsigned int extraOpenGLTexture;
    MetalFilterCrop *_filterCrop;
}

@property (nonatomic) void *effectHandle;
@property (nonatomic) BOOL useES3;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) id /* block */ msgListener;
@property (nonatomic) BOOL firstFrame;
@property (copy, nonatomic) NSString *abConfig;
@property (copy, nonatomic) NSString *platformConfig;
@property (copy, nonatomic) NSString *abLicense;
@property (nonatomic) BOOL needInitEffect;
@property (nonatomic) void /* function */ *effectResourceFinder;
@property (nonatomic) void /* function */ *effectResourceFinderReleaser;
@property (copy, nonatomic) id /* block */ ocMsgCallback;
@property (nonatomic) void *msgManager;
@property (copy, nonatomic) NSString *renderStringKey;
@property (copy, nonatomic) NSString *renderStringValue;
@property (retain, nonatomic) NSMutableDictionary *renderConfigDic;
@property (nonatomic) BOOL enableEffectPKGift;
@property (nonatomic) BOOL enableEffectSixDoFLite;
@property (nonatomic) unsigned long long effectSixDoFLiteMode;
@property (nonatomic) unsigned long long streamLayout;
@property (nonatomic) BOOL needInitSixDoFLite;
@property (nonatomic) BOOL cropEnabled;
@property (nonatomic) BOOL enableMsgListenerOpt;
@property (nonatomic) BOOL enableEffect;

- (BOOL)msgListener:(void *)a0 withMsgId:(unsigned int)a1 withArg1:(unsigned long long)a2 withArg2:(unsigned long long)a3 withArg3:(const char *)a4;
- (BOOL)initOpenGLResource:(long long)a0 withHeight:(long long)a1 withOSType:(unsigned int)a2;
- (void)releaseEffectSDK;
- (BOOL)cvPixelBufferCopy:(struct __CVBuffer { } *)a0 withDst:(struct __CVBuffer { } *)a1;
- (BOOL)initEffectSixDofLite:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (BOOL)copyPixelBufferToExtraTexture:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)processSixDofLite:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (BOOL)reInitOpenGLContextIfNeeded;
- (void)initEffectSDK:(long long)a0 withHeight:(long long)a1 withOSType:(unsigned int)a2;
- (void)releaseOpenGLResourceForExtraTexture;
- (void)releaseOpenGLResource;
- (void)releaseEffectSixDofLite;
- (BOOL)initOpenGLResourceForExtraTexture:(long long)a0 withHeight:(long long)a1 withOSType:(unsigned int)a2;
- (void)testEffectSixDofLite;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setEffect:(id)a0;
- (void)dealloc;

@end

@class BMFModsDownloader, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLTexture;

@interface BmfAesBoost : NSObject <IBmfAesBoost> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } bufferMtx;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } processMtx;
}

@property (nonatomic) void *impl;
@property (copy, nonatomic) NSString *metallibPath;
@property (nonatomic) struct MetalRuntime { struct MetalRuntimeImpl *x0; } *metalRuntime;
@property (nonatomic) struct RunParams { int x0; int x1; int x2; BOOL x3; float x4; } *runParams;
@property (nonatomic) struct shared_ptr<BmfDataCreator<BmfTextureData>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } creator;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *modelDir;
@property (nonatomic) int *groupList;
@property (nonatomic) int groupCount;
@property (nonatomic) int lastGroupIndex;
@property (nonatomic) int lastInterval;
@property BOOL isFinished;
@property (nonatomic) int processedFrames;
@property (retain, nonatomic) NSMutableArray *modelsPathArry;
@property (nonatomic) unsigned int lastPixelFormat;
@property (nonatomic) int lastMatrixType;
@property (nonatomic) struct ConversionContext { float x0[9]; float x1[3]; float x2[3]; float x3[3]; int x4; int x5; } *lastYuv2rgbConversion;
@property (nonatomic) struct ConversionContext { float x0[9]; float x1[3]; float x2[3]; float x3[3]; int x4; int x5; } *lastRgb2yuvConversion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) BMFModsDownloader *downloader;
@property (nonatomic) int lastProcessErrorCode;
@property (nonatomic) BOOL hasSpecialProcess;
@property (nonatomic) int downScale;
@property (nonatomic) BOOL useExternalModel;
@property (nonatomic) unsigned long long last_width;
@property (nonatomic) unsigned long long last_height;
@property (nonatomic) struct shared_ptr<BmfImageDataPool<BmfTextureData>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } pool;
@property (nonatomic) BOOL needPool;
@property (nonatomic) int processMd;
@property (nonatomic) struct shared_ptr<BmfTextureData> { struct BmfTextureData *__ptr_; struct __shared_weak_count *__cntrl_; } outputBuffer;
@property (nonatomic) unsigned long long gradientNum;
@property (nonatomic) unsigned long long haveGradientNum;
@property (nonatomic) float gradientWt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)downloadModel;
- (void)setProcessMode:(int)a0;
- (int)createOutputTexture;
- (int)processTexture:(id)a0 SecondTexture:(id)a1 ThirdTexture:(id)a2 PixelFormat:(unsigned int)a3 MatrixType:(int)a4 NewVideo:(BOOL)a5 Interval:(int)a6 GroupIndex:(int)a7;
- (int)processBuffer:(struct __CVBuffer { } *)a0 NewVideo:(BOOL)a1 Interval:(int)a2 GroupIndex:(int)a3;
- (int)processTextureAndOutputBuffer:(id)a0 SecondTexture:(id)a1 ThirdTexture:(id)a2 PixelFormat:(unsigned int)a3 MatrixType:(int)a4 NewVideo:(BOOL)a5 Interval:(int)a6 GroupIndex:(int)a7 GetResultBuffer:(struct BmfAesBoostData **)a8;
- (int)processBufferAndOutputBuffer:(struct __CVBuffer { } *)a0 NewVideo:(BOOL)a1 Interval:(int)a2 GroupIndex:(int)a3 GetResultBuffer:(struct BmfAesBoostData **)a4;
- (id)initWithMetallibPath:(id)a0;
- (void)setDownloaderInfoArea:(id)a0 GroupList:(int *)a1 GroupCount:(int)a2 AppID:(id)a3 ModelDir:(id)a4 DID:(id)a5;
- (void)buildAsync:(id /* block */)a0;
- (id)getMixTexture;
- (void)processBufferAsync:(struct __CVBuffer { } *)a0 NewVideo:(BOOL)a1 Interval:(int)a2 GroupIndex:(int)a3 CompleteHandler:(id /* block */)a4;
- (void)setLutDownScale:(int)a0;
- (int)giveBackResultBuffer:(void *)a0;
- (int)processAndOutputBuffer:(struct BmfAesBoostInputData { struct __CVBuffer *x0; id x1; id x2; id x3; BOOL x4; unsigned int x5; int x6; } *)a0 NewVideo:(BOOL)a1 Interval:(int)a2 GroupIndex:(int)a3 GetResultBuffer:(struct BmfAesBoostData **)a4;
- (void)setGradientNumber:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setModelPath:(id)a0;
- (int)build;
- (id).cxx_construct;
- (void)dealloc;

@end

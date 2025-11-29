@class NSString, PixelTextureFormat, NSObject;
@protocol OS_dispatch_queue, IBmfSdr2Hdr, ProcessorDownloaderProtocol;

@interface BmfFilterSDR2HDR : FilterBase {
    id<IBmfSdr2Hdr> sdr2hdr_handle;
    PixelTextureFormat *ptFmt10bit;
    float saturability;
    float *yuv2rgb709matrix;
    float *yuv2rgb709offset;
    float *rgb2yuv2020matrix;
    float *rgb2yuv2020offset;
    struct BmfSdr2HdrData { id x0[3]; id x1[3]; int x2; } *sdr2HdrData;
    struct BmfSdr2HdrExtraInfo { float x0; float *x1; unsigned long long x2; float *x3; unsigned long long x4; } *_extraInfo;
    id<ProcessorDownloaderProtocol> downloader;
    BOOL isPQ;
    long long lastColorRange;
    int lifeId;
    float _lightGradientStep;
    double _preLightStrength;
    NSString *cacheDir;
    NSString *downloadModelName;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isIniting;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfInitprocessorQueue;
@property BOOL isBMFInitFinish;
@property (nonatomic) int weightWidth;
@property (nonatomic) int weightHeight;
@property (nonatomic) int weightDepth;

- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (id)getEffectPatameterStr;
- (void)checkDownloadAndInitBmf;
- (void)updateStepAndStrength:(id)a0 strengths:(id)a1;
- (void)createQueueAndInitBmf;
- (void)initSDRTOHDR;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end

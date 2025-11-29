@class MetalFilterBmfVQScore, MetalFilterBmfSharp, MetalFilterLut, MetalFilterBmfVQScoreOmni, MetalFilterBmfBnBalance, MetalFilterBmfSR, BmfFilterSDR2HDR, BmfFilterHDRLightnessNormaliza, MetalFilterHDRBrightNormalize, MetalFilterLens;

@interface VCVideoProcessorInstance : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    unsigned char isLivingStream;
    unsigned char isEnable15SR;
    MetalFilterLens *lensFilter;
    MetalFilterLens *lensFilterLiving;
    MetalFilterLut *lutFilterFirst;
    MetalFilterLut *lutFilterSecond;
    MetalFilterBmfSR *bmfInstance;
    MetalFilterBmfSR *bmfInstanceLiving;
    MetalFilterBmfSharp *bmfSharpInstance;
    MetalFilterBmfSharp *bmfSharpLiving;
    MetalFilterBmfSharp *bmfSharpLivingNewInterface;
    BmfFilterSDR2HDR *bmfSDR2HDRInstance;
    BmfFilterSDR2HDR *bmfSDR2HDRInstanceVod;
    BmfFilterHDRLightnessNormaliza *bmfHDRBnInstance;
    MetalFilterHDRBrightNormalize *hdrBnInstance;
    MetalFilterBmfVQScore *bmfVQScoreInstance;
    MetalFilterBmfVQScoreOmni *bmfVQScoreOmniInstance;
    MetalFilterBmfBnBalance *bmfBnBalanceInstance;
    long long mVideoIndex;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex;
    BOOL mEnableRWLock;
}

+ (void)setLogCallback:(void /* function */ *)a0;
+ (void)setLogPrintLevel:(int)a0;
+ (void)setLogCallbackLevel:(int)a0;
+ (void)setLogErrorCallbackFirstOnly:(int)a0;
+ (id)sharedInstance;

- (void)setIntValue:(int)a0 ForKey:(int)a1;
- (void *)getVideoProcessor;
- (id)getFilter:(id)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end

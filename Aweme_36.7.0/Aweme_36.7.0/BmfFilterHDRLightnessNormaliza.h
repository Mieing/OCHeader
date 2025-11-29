@class NSDictionary, PixelTextureFormat, NSObject;
@protocol OS_dispatch_queue, IBmfHdrBn;

@interface BmfFilterHDRLightnessNormaliza : FilterBase {
    PixelTextureFormat *ptFmt10bit;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isInitFinishing;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isIniting;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } x420ColorConversion;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } xf20ColorConversion;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } v420_2020ColorConversion;
    struct ColorConversion { struct { void /* unknown type, empty encoding */ columns[3]; } matrix; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ rangeMin; void /* unknown type, empty encoding */ rangeMax; } f420_2020ColorConversion;
    PixelTextureFormat *ptFmt8bit;
    float mThresh;
}

@property (retain, nonatomic) id<IBmfHdrBn> bmfHdrBn;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfInitprocessorQueue;
@property (retain, nonatomic) NSDictionary *parameter;
@property (nonatomic) BOOL downloadSuccess;

- (id)getEffectPatameterStr;
- (void)initBmfBnWithParam:(id)a0 modelPath:(id)a1;
- (void)checkDownloadAndInitBmf;
- (float *)NSArrayTransforCFloatArray:(id)a0;
- (BOOL)supportBmfHDRLightnessNormaliza:(struct __CVBuffer { } *)a0;
- (BOOL)getMTLTextureFromPixelBuffer:(id *)a0 texture2:(id *)a1 videoBuffer:(struct VideoFrameBuffer { void /* function */ **x0; } *)a2;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1 forceSDR:(BOOL)a2;
- (void)getHDRBnConversionMatrix:(struct BmfHdrBnConversion { float x0[9]; float x1[3]; } *)a0 inFrameFmt:(unsigned int)a1 inYCbCrMatrixType:(long long)a2;
- (void)copyConversionToBnConversion:(struct ColorConversion { struct { void /* unknown type, empty encoding */ x0[3]; } x0; } *)a0 dstBnConversion:(struct BmfHdrBnConversion { float x0[9]; float x1[3]; } *)a1;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

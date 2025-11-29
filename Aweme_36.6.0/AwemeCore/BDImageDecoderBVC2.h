@class NSString, NSData, BDImageDecoderConfig, NSError;

@interface BDImageDecoderBVC2 : NSObject <BDImageDecoder> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL isAnimation;
@property (nonatomic) struct HeifImageInfo { unsigned int exif_size; char *exif_data; unsigned int width; unsigned int height; unsigned long long duration; unsigned int rotation; unsigned int imir_axis; unsigned int irot_imir_status; unsigned int frame_nums; BOOL is_sequence; BOOL has_thum; unsigned int thum_offset; unsigned int thum_size; char *icc_data; unsigned int icc_size; BOOL has_alpha; unsigned char bit_depth; struct HeifColrInfo { unsigned int color_type; unsigned short color_primaries; unsigned short transfer_characteristics; unsigned short matrix_coefficients; unsigned char full_range_flag; } colr_info; unsigned char chroma_format; unsigned int src_size_in_skip; } imageInfo;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) unsigned long long sizeType;
@property (nonatomic) BOOL isHDR;
@property (retain, nonatomic) BDImageDecoderConfig *config;
@property BOOL hasIncrementalData;
@property BOOL finished;
@property (nonatomic) long long orientation;
@property (retain) NSError *decodeError;
@property (nonatomic) BOOL hasSRPreprocessing;
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

- (id)initWithData:(id)a0 config:(id)a1;
- (struct HeifOutputStream { unsigned int x0; char *x1; unsigned int x2; char *x3; unsigned long long *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned long long x9; unsigned char x10; char *x11; unsigned int x12; unsigned char x13; struct HeifColrInfo { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x14; int x15; })decodeStaticImage:(BOOL *)a0 srSuccessfulPreprocessed:(BOOL *)a1;
- (struct CGColorSpace { } *)createColorSpaceFromICCData:(char *)a0 length:(unsigned int)a1;
- (int)_vvicDownsampleMode;
- (struct HeifOutputStream { unsigned int x0; char *x1; unsigned int x2; char *x3; unsigned long long *x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; unsigned long long x9; unsigned char x10; char *x11; unsigned int x12; unsigned char x13; struct HeifColrInfo { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x14; int x15; })_originalDecodeData:(char *)a0 dataSize:(unsigned int)a1 decodingParam:(struct HeifDecodingParam { float x0; BOOL x1; unsigned int x2; BOOL x3; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x4; BOOL x5; int x6; } *)a2 alphaPremultiplied:(BOOL *)a3;
- (id)initWithIncrementalData:(id)a0 config:(id)a1;
- (void)changeDecoderWithData:(id)a0 finished:(BOOL)a1;
- (struct CGImage { } *)copyImageAtIndex:(unsigned long long)a0;
- (id)initWithContentOfFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (double)frameDelayAtIndex:(unsigned long long)a0;

@end

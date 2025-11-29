@protocol MTLTexture, MTLEvent;

@interface XImage : NSObject {
    const struct AAPLTextureFormatInfo { int x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_formatInfo;
    struct __CVBuffer { } *_CVPixelBuffer;
    struct __CVBuffer { } *_CVMTLTexture;
    struct __CVBuffer { } *_CVGLTexture;
    struct ObjectRef<xnet::rci::RciTexture> { struct RciTexture *mpObject; } _internalRciTexture;
    struct shared_ptr<wevision::HardwareBufferTexture> { struct HardwareBufferTexture *__ptr_; struct __shared_weak_count *__cntrl_; } hardwareBufferTexture;
}

@property (readonly, nonatomic) unsigned int openGLTexture;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) void *rciTexture;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) long long range;
@property (readonly, nonatomic) long long matrix;
@property (readonly, nonatomic) long long transferFunction;
@property (readonly, nonatomic) long long colorPrimaries;
@property (readonly, nonatomic) BOOL isHDR10;
@property (copy, nonatomic) id /* block */ notifyUseCompletedBlock;
@property (retain, nonatomic) id<MTLEvent> eventToWait;

+ (long long)getYuvColorPrimariesWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (long long)getYuvRangeWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (long long)getYuvMatrixWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (long long)getYuvTransferFunctionWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)createImageWithPixelBuffer:(struct __CVBuffer { } *)a0 ofPlane:(unsigned long long)a1;
+ (id)createImageWithRciTexture:(void *)a0;
+ (id)createImageWithRfxTexture:(void *)a0;
+ (id)createInteropImage:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (void)dealloc;
- (BOOL)createGLTexture;
- (BOOL)createMetalTexture;
- (id)debugQuickLookObject;
- (id)convertToCIImage;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

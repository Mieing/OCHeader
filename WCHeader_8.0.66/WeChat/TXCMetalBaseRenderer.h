@class TXCMetalContext, NSString, TXCMetalPixelBufferUploader;

@interface TXCMetalBaseRenderer : NSObject <TXCMetalRenderer>

@property (readonly, nonatomic) TXCMetalContext *context;
@property (readonly, nonatomic) TXCMetalPixelBufferUploader *pixelBufferUploader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)uploadPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)uploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (id)drawToTarget:(id)a0 coordinate:(id)a1;
- (unsigned long long)rendererType;
- (void)setDisplayConfig:(id)a0;
- (void).cxx_destruct;

@end

@class CIFilter, CIContext;

@interface WCAdAlphaVideoProcessor : NSObject

@property (nonatomic) struct __CVBuffer { } *inputPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *resultPixelBuffer;
@property (retain, nonatomic) CIContext *context;
@property (nonatomic) int videoCompositeType;
@property (retain, nonatomic) CIFilter *alphaVideoFilter;

- (void)dealloc;
- (id)initWithVideoCompositeType:(int)a0;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)startRendering;
- (struct __CVBuffer { } *)renderCompressByCIImage:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end

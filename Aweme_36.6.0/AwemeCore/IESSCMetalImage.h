@protocol MTLTexture;

@interface IESSCMetalImage : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extent;

+ (id)imageWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)imageWithImagePath:(id)a0 orientation:(unsigned int)a1;
+ (id)imageWithData:(id)a0 orientation:(unsigned int)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;
+ (id)imageWithImagePath:(id)a0;
+ (id)imageWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageWithCIImage:(id)a0;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 texture:(id)a1;
- (void)imageByCompositingOverImage:(id)a0 targetImage:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)imageByApplyingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end

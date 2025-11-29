@class PAGImageImpl;

@interface PAGImage : NSObject

@property (retain, nonatomic) PAGImageImpl *image;
@property (nonatomic) struct __CFData { } *imageData;

+ (id)FromCGImage:(struct CGImage { } *)a0;
+ (id)FromPath:(id)a0;
+ (id)FromBytes:(const void *)a0 size:(unsigned long long)a1;
+ (id)FromPixelBuffer:(struct __CVBuffer { } *)a0;

- (id)initWidthPAGImage:(id)a0;
- (void)dealloc;
- (long long)width;
- (long long)height;
- (int)scaleMode;
- (void)setScaleMode:(int)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end

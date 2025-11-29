@interface ZXImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *cgimage;

+ (id)imageWithMatrix:(id)a0 onColor:(struct CGColor { } *)a1 offColor:(struct CGColor { } *)a2;
+ (void)setColorIntensities:(char *)a0 color:(struct CGColor { } *)a1;
+ (id)imageWithMatrix:(id)a0;

- (id)initWithURL:(id)a0;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage { } *)a0;

@end

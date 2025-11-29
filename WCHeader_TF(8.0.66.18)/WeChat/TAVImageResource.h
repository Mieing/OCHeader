@class CIImage;

@interface TAVImageResource : TAVResource

@property (retain, nonatomic) CIImage *image;

- (id)initWithImage:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tracksForType:(id)a0;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end

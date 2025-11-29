@interface IESSoloKTVDrawCGImpl : NSObject

- (id)drawRect:(struct CGSize { double x0; double x1; })a0 corner:(double)a1 startColor:(id)a2 endColor:(id)a3;
- (struct __CVBuffer { } *)drawTextWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 attr:(id)a2 leftOffset:(double)a3 reverse:(BOOL)a4;
- (struct __CVBuffer { } *)drawTextWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 leftOffset:(double)a2 reverse:(BOOL)a3;
- (void)reverseContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct __CVBuffer { } *)createCGContextWithSize:(struct CGSize { double x0; double x1; })a0 drawCallback:(id /* block */)a1;
- (void)drawGradient:(struct CGContext { } *)a0 space:(struct CGColorSpace { } *)a1 size:(struct CGSize { double x0; double x1; })a2 startColor:(id)a3 endColor:(id)a4;
- (id)drawRect:(struct CGSize { double x0; double x1; })a0 corner:(double)a1 fillColor:(id)a2;

@end

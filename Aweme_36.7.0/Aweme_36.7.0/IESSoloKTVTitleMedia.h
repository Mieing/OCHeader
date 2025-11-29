@class IESSoloKTVDrawCGImpl, IESSCMetalImage;

@interface IESSoloKTVTitleMedia : IESSCImageMedia

@property (retain, nonatomic) IESSoloKTVDrawCGImpl *asyncDraw;
@property (retain, nonatomic) IESSCMetalImage *titleImage;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (void)drawTitleImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 attribute:(id)a2;
- (id)initWithTitle:(id)a0 attribute:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;

@end

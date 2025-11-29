@class IESSoloKTVGradientBackgroundRender;

@interface IESSoloKTVGradientColorMedia : IESSCImageMedia

@property (retain, nonatomic) IESSoloKTVGradientBackgroundRender *render;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithColors:(id)a0;

@end

@class IESSoloKTVScrollLyricRender;

@interface IESSoloKTVLyricMedia : IESSCImageMedia

@property (retain, nonatomic) IESSoloKTVScrollLyricRender *lyricRender;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithLyric:(id)a0 drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fps:(double)a2 sourceTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3;
- (void).cxx_destruct;

@end

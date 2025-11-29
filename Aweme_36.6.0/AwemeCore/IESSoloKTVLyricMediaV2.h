@class IESSoloKTVScrollLyricRender, IESSoloKTVDoubleLineLyricRender;

@interface IESSoloKTVLyricMediaV2 : IESSCImageMedia

@property (nonatomic) BOOL isDoubleLineStyle;
@property (retain, nonatomic) IESSoloKTVScrollLyricRender *lyricRender;
@property (retain, nonatomic) IESSoloKTVDoubleLineLyricRender *doubleLineRender;
@property (nonatomic) double startOffset;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithLyric:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fps:(double)a2 templateModel:(id)a3;
- (void).cxx_destruct;

@end

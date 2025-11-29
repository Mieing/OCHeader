@class NSArray, QArcOverlayAnimation, QArcStyle;

@interface QArcOverlay : QGLOverlay

@property (copy, nonatomic) NSArray *curves;
@property (retain, nonatomic) QArcStyle *style;
@property (retain, nonatomic) QArcOverlayAnimation *animation;
@property (nonatomic) BOOL enable3D;

- (id)init;
- (void *)loadArcLineInfo:(struct ArcLineData { struct ArcLineCell **x0; unsigned long long x1; int *x2; unsigned long long x3; int x4; int x5; int x6; float x7; BOOL x8; int x9; int x10; int x11; float x12; BOOL x13; BOOL x14; int x15; int x16; int x17; struct Gradient *x18; } *)a0;
- (void)setDisplayLevel:(long long)a0;
- (void *)createImpl;
- (id)getType;
- (void)setNeedsDisplay;
- (void)updateArcLineData:(void *)a0;
- (void)setArcLineData:(void *)a0 info:(struct ArcLineData { struct ArcLineCell **x0; unsigned long long x1; int *x2; unsigned long long x3; int x4; int x5; int x6; float x7; BOOL x8; int x9; int x10; int x11; float x12; BOOL x13; BOOL x14; int x15; int x16; int x17; struct Gradient *x18; } *)a1;
- (struct vector<tcmapkit::ArcLineCell *, std::allocator<tcmapkit::ArcLineCell *>> { struct ArcLineCell **x0; struct ArcLineCell **x1; struct __compressed_pair<tcmapkit::ArcLineCell **, std::allocator<tcmapkit::ArcLineCell *>> { struct ArcLineCell **x0; } x2; })createArcLineCells;
- (struct Gradient { int x0; char *x1; struct RGBColor *x2; } *)createGradient;
- (id)makeUpGradientColor;
- (void)destoryImpl;
- (struct RGBColor { float x0; float x1; float x2; float x3; })rgbColor:(id)a0;
- (BOOL)checkDrawStatus;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end

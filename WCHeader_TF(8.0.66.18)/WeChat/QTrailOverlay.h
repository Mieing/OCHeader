@class NSArray, QTrailLineStyle;

@interface QTrailOverlay : QGLOverlay

@property (nonatomic) int linesCount;
@property (copy, nonatomic) NSArray *lines;
@property (retain, nonatomic) QTrailLineStyle *style;

- (id)initWithTrailData:(id)a0;
- (void)setNeedsDisplay;
- (void *)createImpl;
- (void)destoryImpl;
- (void)destoryInfoData:(struct TrailData { struct TrailCell **x0; unsigned long long x1; int *x2; unsigned long long x3; int x4; int x5; int x6; int x7; float x8; BOOL x9; int x10; int x11; int x12; float x13; BOOL x14; int x15; int x16; int x17; float x18; int x19; struct Gradient *x20; } *)a0;
- (void)updateTrailData:(struct TrailData { struct TrailCell **x0; unsigned long long x1; int *x2; unsigned long long x3; int x4; int x5; int x6; int x7; float x8; BOOL x9; int x10; int x11; int x12; float x13; BOOL x14; int x15; int x16; int x17; float x18; int x19; struct Gradient *x20; } *)a0;
- (struct TrailCell **)getNodeData;
- (struct TrailCell **)buildDataByCustomTime:(id)a0;
- (struct TrailCell { void /* function */ **x0; struct TimeMapCoordinate *x1; int x2; int x3; int x4; } *)constructTrailCellWithTimestamp:(id)a0;
- (BOOL)validateTrailData:(id)a0;
- (struct Gradient { int x0; char *x1; struct RGBColor *x2; } *)createGradient;
- (struct vec2 { double x0; double x1; })convertCoordToMapCoord:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct RGBColor { float x0; float x1; float x2; float x3; })rgbColor:(id)a0;
- (int)getTrailType;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end

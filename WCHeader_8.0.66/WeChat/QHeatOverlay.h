@class NSArray, QAnimation, QHeatGradient;

@interface QHeatOverlay : QGLOverlay {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
}

@property (retain, nonatomic) QHeatGradient *internalGradient;
@property (nonatomic) double maxIntensity;
@property (nonatomic) double minIntensity;
@property (nonatomic) BOOL useUserIntensity;
@property (copy, nonatomic) NSArray *nodes;
@property (nonatomic) long long decayRadius;
@property (retain, nonatomic) QHeatGradient *gradient;
@property (nonatomic) double maxHeight;
@property (nonatomic) BOOL enable3D;
@property (retain, nonatomic) QAnimation *animation;

- (void)calculateBoundingRect;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingMapRect;
- (void)setMinIntensity:(double)a0 maxIntensity:(double)a1;
- (void)setDisplayLevel:(long long)a0;
- (void)setNeedsDisplay;
- (id)getType;
- (struct Gradient { int x0; char *x1; struct RGBColor *x2; } *)generateGradient;
- (void *)createImpl;
- (void)destoryImpl;
- (struct HeatmapData { struct HeatmapCell **x0; unsigned long long x1; int *x2; unsigned long long x3; int x4; int x5; int x6; int x7; int x8; float x9; BOOL x10; BOOL x11; int x12; int x13; float x14; float x15; float x16; BOOL x17; BOOL x18; int x19; struct Gradient *x20; } *)createInfoData;
- (void)destoryInfoData:(struct HeatmapData { struct HeatmapCell **x0; unsigned long long x1; int *x2; unsigned long long x3; int x4; int x5; int x6; int x7; int x8; float x9; BOOL x10; BOOL x11; int x12; int x13; float x14; float x15; float x16; BOOL x17; BOOL x18; int x19; struct Gradient *x20; } *)a0;
- (struct HeatmapCell **)getHeatMapCells;
- (id)initWithHeatNodes:(id)a0;
- (void)recordGLoverlayCount:(id)a0;
- (void).cxx_destruct;

@end

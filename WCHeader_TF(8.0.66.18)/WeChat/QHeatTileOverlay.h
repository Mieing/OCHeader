@class NSArray, QQuadTree, QHeatTileGradient, QHeatTileCreationData;

@interface QHeatTileOverlay : QTileOverlay {
    unsigned long long _minimumZoomIntensity;
    unsigned long long _maximumZoomIntensity;
    BOOL _dirty;
    QHeatTileCreationData *_data;
}

@property (retain, nonatomic) QQuadTree *quadTree;
@property (copy, nonatomic) NSArray *nodes;
@property (nonatomic) long long decayRadius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) QHeatTileGradient *gradient;

- (struct { double x0; double x1; double x2; double x3; })calculateBounds;
- (id)maxValueForZoom:(unsigned long long)a0;
- (id)calculateIntensities;
- (id)generateKernel;
- (void)prepare;
- (id)transparentImageWithSize:(int)a0;
- (unsigned int *)calculateRawpixels:(double)a0 data:(id)a1 minX:(double)a2 minY:(double)a3 points:(id)a4 wrappedPoints:(id)a5 wrappedPointsOffset:(double)a6 zoom:(unsigned long long)a7;
- (id)loadTileImageAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (double)getWrappedPointsOffsetWithWrappedPoints:(id)a0 tileBounds:(struct { double x0; double x1; double x2; double x3; })a1 worldWidth:(double)a2 data:(id)a3;
- (struct { double x0; double x1; })mapPointForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0 result:(id /* block */)a1;
- (id)init;
- (id)initWithURLTemplate:(id)a0;
- (id)initWithHeatTileNodes:(id)a0;
- (void).cxx_destruct;

@end

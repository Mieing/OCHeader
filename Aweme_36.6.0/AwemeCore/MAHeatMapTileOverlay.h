@class NSArray, MAQuadTree2, MAHeatMapGradient;

@interface MAHeatMapTileOverlay : MATileOverlay {
    MAQuadTree2 *_quadTree;
    float *_maxIntensitiesArray;
    BOOL _needUpdateMaxIntensitiesArray;
    struct MAMapRect { struct MAMapPoint { double x; double y; } origin; struct MAMapSize { double width; double height; } size; } _internalBoundingRect;
}

@property (retain, nonatomic) NSArray *data;
@property (nonatomic) long long radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) MAHeatMapGradient *gradient;
@property (nonatomic) BOOL allowRetinaAdapting;

- (float *)getMaxIntensitiesWithRadius:(long long)a0 datas:(id)a1 mapRect:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a2;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })mapRectWithTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (id)heatMapnodesInMapRect:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })pointInTileWithMapPoint:(struct MAMapPoint { double x0; double x1; })a0 withInMapRect:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a1 atZoomLevel:(long long)a2;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })boundingMapRectForHeatMapData;
- (float)getMaxValueWithPoints:(id)a0 maMapRect:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a1 radius:(long long)a2 screenDim:(int)a3;
- (void)buildQuadTree;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })boundingMapRect;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;

@end

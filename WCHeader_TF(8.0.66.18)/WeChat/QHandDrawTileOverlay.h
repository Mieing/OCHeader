@class QHandDrawTileOverlayDataProvider;

@interface QHandDrawTileOverlay : QTileOverlay

@property (retain, nonatomic) QHandDrawTileOverlayDataProvider *provider;

- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0 result:(id /* block */)a1;
- (void)onHandDrawMapVesionCheck:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

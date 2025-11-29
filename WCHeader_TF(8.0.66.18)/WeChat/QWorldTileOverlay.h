@class QWorldTileOverlayDataProvider, QUniversalMapCounter;

@interface QWorldTileOverlay : QTileOverlay

@property (retain, nonatomic) QWorldTileOverlayDataProvider *normalProvider;
@property (retain, nonatomic) QWorldTileOverlayDataProvider *darkProvider;
@property (nonatomic) int sceneType;
@property (nonatomic) long long language;
@property (nonatomic) BOOL darkEnabled;
@property (weak, nonatomic) QUniversalMapCounter *universalCounter;
@property (retain, nonatomic) QWorldTileOverlayDataProvider *worldProvider;

- (id)provider;
- (id)fakeUrlForPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0 result:(id /* block */)a1;
- (void)onWorldVesionCheck:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

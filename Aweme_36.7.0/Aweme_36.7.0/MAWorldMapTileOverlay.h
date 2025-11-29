@class NSString, MADiskCache;

@interface MAWorldMapTileOverlay : MATileOverlay

@property (retain, nonatomic) MADiskCache *diskCache;
@property (copy, nonatomic) NSString *language;

- (id)stringKeyOfTile:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (BOOL)shouleLoadTileForTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)init;
- (void)clearCache;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;

@end

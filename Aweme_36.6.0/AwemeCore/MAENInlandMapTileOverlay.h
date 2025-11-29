@class NSString, MADiskCache;

@interface MAENInlandMapTileOverlay : MATileOverlay

@property (retain, nonatomic) MADiskCache *diskCache;
@property (copy, nonatomic) NSString *language;

- (BOOL)shouleLoadTileForTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;

@end

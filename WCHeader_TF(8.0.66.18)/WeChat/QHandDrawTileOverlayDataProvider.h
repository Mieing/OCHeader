@class NSString, QDataCacheHandDrawMap;

@interface QHandDrawTileOverlayDataProvider : NSObject

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) QDataCacheHandDrawMap *dataCache;

- (id)init;
- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (id)loadTileImageAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)saveTileData:(id)a0 atPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a1;
- (struct { long long x0; long long x1; short x2; long long x3; })tileForPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (int)tileType;
- (void)resetData;
- (void).cxx_destruct;

@end

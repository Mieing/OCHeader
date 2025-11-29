@class NSArray, NSMutableDictionary, NSString, QDataCacheWorldMap, NSCache;

@interface QWorldTileOverlayDataProvider : NSObject

@property (retain, nonatomic) NSArray *langCandidates;
@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;
@property (copy, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *urlTemplate;
@property (retain, nonatomic) NSCache *memoryCache;
@property (retain, nonatomic) QDataCacheWorldMap *dataCache;

- (id)init;
- (id)initWithConfig:(id)a0;
- (id)languageString:(long long)a0;
- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)downloadTileImageAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0 result:(id /* block */)a1;
- (id)loadTileImageAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)saveTileData:(id)a0 atPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a1;
- (struct { long long x0; long long x1; short x2; long long x3; })tileForPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (id)keyForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (int)tileType;
- (void)resetDataWithConfig:(id)a0;
- (id)generateUrl:(id)a0;
- (void)setDownloadTask:(id)a0 forTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a1;
- (void)removeDownloadTaskForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (id)getDownloadTaskForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (void)onStyleChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end

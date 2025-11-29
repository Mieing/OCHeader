@class NSString, NSMutableDictionary, QTileDataDownloader, QMediator, NSCache;

@interface QTileOverlay : NSObject <QOverlay> {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
}

@property (weak, nonatomic) QMediator *mediator;
@property (copy, nonatomic) NSString *tileSavePath;
@property (nonatomic) int tileOverlayID;
@property (nonatomic) int maxDataLevel;
@property (nonatomic) int minDataLevel;
@property (nonatomic) int minVisibleLevel;
@property (nonatomic) int maxVisibleLevel;
@property (nonatomic) BOOL toSetVisibleRange;
@property (copy, nonatomic) NSString *URLTemplate;
@property (retain, nonatomic) NSCache *tileCache;
@property (retain, nonatomic) QTileDataDownloader *tileDownloader;
@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;
@property (nonatomic) long long searchDepth;
@property (nonatomic) BOOL isHighResoultionTile;
@property (retain, nonatomic) NSString *tileCacheDir;
@property (nonatomic) BOOL enableReuseOnMultiLevel;
@property (nonatomic) long long levelOffset;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTileOverlayCachePath;

- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0 result:(id /* block */)a1;
- (void)cancelLoadOfTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)setup;
- (id)init;
- (id)initWithURLTemplate:(id)a0;
- (void)setMinDataLevel:(int)a0 maxDataLevel:(int)a1;
- (void)setMinVisibleLevel:(int)a0 maxVisibleLevel:(int)a1;
- (void)sendLoadTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0 callback:(id /* block */)a1;
- (void)sendCancelLoadOfTileAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (id)keyForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (id)getDownloadTaskForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (void)setDownloadTask:(id)a0 forTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a1;
- (void)removeDownloadTaskForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (BOOL)shouldRemoverTileOverlayCache;
- (void)removerTileOverlayCache;
- (void)removeMemoryCache;
- (void)onReceivedCacheVersion:(id)a0;
- (id)loadTileCacheDataAtPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (id)fakeUrlForPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)onDownloadSuccess:(id)a0 path:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a1 callback:(id /* block */)a2 task:(id)a3 tileKey:(id)a4;
- (void)onDownloadFail:(id)a0 path:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a1 callback:(id /* block */)a2 task:(id)a3 tileKey:(id)a4;
- (BOOL)writeToDiskCache:(id)a0 tileKey:(id)a1;
- (void).cxx_destruct;

@end

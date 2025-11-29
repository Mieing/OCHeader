@class NSString, QCustomLayerConfigItem;

@interface QCustomLayerTileOverlay : QTileOverlay

@property (copy, nonatomic) NSString *businessKey;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) QCustomLayerConfigItem *serverConfig;

+ (id)getTileOverlayCachePath;
+ (void)updateCustomLayerCaches:(id)a0;

- (id)init;
- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)onDownloadFail:(id)a0 path:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a1 callback:(id /* block */)a2 task:(id)a3 tileKey:(id)a4;
- (BOOL)shouldRemoverTileOverlayCache;
- (void)dealloc;
- (void).cxx_destruct;

@end

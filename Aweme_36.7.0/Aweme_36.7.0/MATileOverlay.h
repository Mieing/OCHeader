@class NSMutableDictionary, NSDictionary, NSArray, NSString, AMapNetworkManager;

@interface MATileOverlay : MABaseOverlay {
    AMapNetworkManager *_netWorkManager;
    struct shared_ptr<lbs::mapnative::MATileOverlayProvider> { struct MATileOverlayProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _tileProvider;
}

@property (retain, nonatomic) NSDictionary *overlaySourceDict;
@property (retain, nonatomic) NSMutableDictionary *pendingOperations;
@property (retain, nonatomic) NSArray *overlaySourceArray;
@property (nonatomic) struct CGSize { double width; double height; } tileSize;
@property long long minimumZ;
@property long long maximumZ;
@property (readonly) NSString *URLTemplate;
@property (nonatomic) BOOL canReplaceMapContent;
@property (nonatomic) BOOL disableOffScreenTileLoading;

- (id)networkManager;
- (void)createCppOverlay;
- (void)cancelLoadOfTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (id)stringKeyOfTile:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (void)removeDowloadingOfTileWithKey:(id)a0;
- (void)addDowloadingOfTile:(id)a0 WithKey:(id)a1;
- (void *)getCppProvider;
- (id)initWithURLTemplateSource:(id)a0;
- (BOOL)shouleLoadTileForTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (void)cancelDownload;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;
- (id)initWithURLTemplate:(id)a0;
- (id)URLForTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;

@end

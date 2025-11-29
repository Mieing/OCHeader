@class NSString, QMapContext, QTileDataDownloader, QUniversalMapCounter;
@protocol QMapDataDelegate;

@interface QMapDataManager : NSObject

@property (retain, nonatomic) QTileDataDownloader *tileDownloader;
@property (nonatomic) long long maxCacheAge;
@property (nonatomic) unsigned long long maxCacheSize;
@property (copy, nonatomic) NSString *cacheFolder;
@property (nonatomic) BOOL toCheckOfflineMapFolder;
@property (weak, nonatomic) QMapContext *mapContext;
@property (weak, nonatomic) id<QMapDataDelegate> delegate;
@property (weak, nonatomic) QUniversalMapCounter *universalMapCounter;

- (id)initWithMapContext:(id)a0;
- (void)dealloc;
- (void)reloadConfig;
- (void)findAndDeleteOutdatedCache:(id)a0;
- (void)clearOutdatedCache;
- (void)cancelDownloadTile:(id)a0;
- (void)downloadTile:(id)a0;
- (void)notifyDidFailLoadingWithError:(id)a0;
- (void)saveTileData:(id)a0 withUrl:(id)a1;
- (void)copyOfflineMapResource:(id)a0;
- (void)clearOfflineMapResource:(id)a0;
- (void)copyOfflineMapLocalResource;
- (void)recordOfflineMapCount;
- (void).cxx_destruct;

@end

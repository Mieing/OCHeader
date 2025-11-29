@class NSCache, NSString, NSMapTable, UIViewController;
@protocol AWEFeedTableViewControllerProtocol;

@interface AWEClientAIAwemeHelper : NSObject <FantaDataCollectorListener, AWEClientAIAwemeHelper> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (retain, nonatomic) NSString *playbackStateTimingStr;
@property (retain, nonatomic) NSMapTable *strongToWeakObjectsMapTable;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> *hotFeedVC;
@property (retain, nonatomic) NSCache *cachedSizeDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getABConfigMap;
+ (id)cachedSizeDatas;
+ (id)sharedInstance;

- (id)currentAwemeModel;
- (id)hotFeedAwemeModel;
- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (id)_getDataSourceWithFeedVC:(id)a0;
- (id)_getCurrentAwemeModelWithFeedVC:(id)a0;
- (long long)innerCacheSizeForVideoID:(id)a0 urlKey:(id)a1;
- (void)updateCachedAwemeModel:(id)a0;
- (id)getAwemeModelWithItemID:(id)a0;
- (id)hotFeedDataSource;
- (long long)cachedSizeForModel:(id)a0;
- (long long)videoSizeForModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)currentDataSource;

@end

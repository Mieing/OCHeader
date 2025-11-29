@class NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface BDLTemplateManager : NSObject {
    void *templateQueueKey;
}

@property (class, readonly, nonatomic) BDLTemplateManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *templateQueue;
@property (retain, nonatomic) NSMutableDictionary *bundleCache;
@property (retain, nonatomic) NSMapTable *dataUpdateBlocks;

+ (id)lynxBundleForGroupID:(id)a0 cardID:(id)a1;
+ (id)dataForCardID:(id)a0 groupID:(id)a1;
+ (void)asyncGetDataForCardID:(id)a0 groupID:(id)a1 completion:(id /* block */)a2;
+ (void)asyncGetDataForDirectURL:(id)a0 completion:(id /* block */)a1;
+ (id)lynxBundlePathForGroupID:(id)a0 cardID:(id)a1;
+ (id)lynxDataForGroupID:(id)a0 cardID:(id)a1;

- (void)removeAllCache;
- (void)registerDataUpdate:(id /* block */)a0 forGroupID:(id)a1;
- (id)lynxBundleForGroupID:(id)a0 cardID:(id)a1;
- (id)dataForCardID:(id)a0 groupID:(id)a1;
- (void)lynxTemplateDataDidUpdate:(id)a0 cardID:(id)a1;
- (void)loadGeckoBundle:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)loadGeckoBundle:(id)a0 completion:(id /* block */)a1;
- (id)cacheObjectForKey:(id)a0;
- (void)runInOperationQueue:(id /* block */)a0;
- (void)asyncGetDataForCardID:(id)a0 groupID:(id)a1 completion:(id /* block */)a2;
- (void)asyncGetDataForDirectURL:(id)a0 completion:(id /* block */)a1;
- (void)loadGeckoBundleAndResource:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)bundleUpdate:(id)a0 success:(BOOL)a1;
- (id)lynxBundleForGroupID:(id)a0;
- (void)removeCacheObjectForKey:(id)a0;
- (void)config;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;
- (void)setCacheObject:(id)a0 forKey:(id)a1;

@end

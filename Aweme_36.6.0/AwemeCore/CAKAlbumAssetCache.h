@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CAKCommonConfigProtocol;

@interface CAKAlbumAssetCache : NSObject

@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSMutableDictionary *pendingCompletions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *libraryLoadingQueue;
@property (retain, nonatomic) NSMutableDictionary *assetCacheHash;
@property (retain, nonatomic) id<CAKCommonConfigProtocol> commonConfig;
@property (nonatomic) BOOL useQueueOpt;

- (void)p_fetchPHAssetResultWithType:(unsigned long long)a0 sortStyle:(long long)a1 ascending:(BOOL)a2 fromAlbumModel:(id)a3 loadingQueue:(id)a4 useCache:(BOOL)a5 completion:(id /* block */)a6;
- (void)addPendingCompletions:(id /* block */)a0 forKey:(id)a1;
- (void)makeCompletionWithResult:(id)a0 andKey:(id)a1;
- (void)setCacheResult:(id)a0 forKey:(id)a1;
- (void)loadCollectionDataWithType:(unsigned long long)a0 sortStyle:(long long)a1 ascending:(BOOL)a2 fromAlbumModel:(id)a3 isCurrent:(BOOL)a4 useCache:(BOOL)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)loadingQueue;

@end

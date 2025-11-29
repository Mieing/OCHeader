@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMAlbumAssetCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetCacheHash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void)setCacheResult:(id)a0 forKey:(id)a1;
- (id)loadCollectionWithKey:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

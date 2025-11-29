@class ACCLRUCache;

@interface ACCMusicAssetCache : NSObject

@property (retain, nonatomic) ACCLRUCache *cache;

+ (id)sharedCache;

- (void)setAsset:(id)a0 forUrl:(id)a1;
- (id)assetForUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

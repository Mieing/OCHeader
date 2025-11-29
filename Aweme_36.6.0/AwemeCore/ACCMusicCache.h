@class ACCLRUCache;

@interface ACCMusicCache : NSObject

@property (retain, nonatomic) ACCLRUCache *cache;

+ (id)sharedCache;

- (void)setModel:(id)a0 forId:(id)a1;
- (id)modelForId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

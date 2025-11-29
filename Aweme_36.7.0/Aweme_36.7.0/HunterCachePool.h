@class HunterCacheConfig, YYMemoryCache;

@interface HunterCachePool : NSObject

@property (retain, nonatomic) HunterCacheConfig *config;
@property (retain, nonatomic) YYMemoryCache *cache;

- (void)save:(id)a0 containerView:(id)a1;
- (id)identifierWithSchema:(id)a0;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)clear:(id)a0;
- (void)clearAll;
- (id)fetch:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end

@class MMKV, BDXThreadSafeDictionary;

@interface BDXPrefetchStorage : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *memoryCache;
@property (retain, nonatomic) MMKV *mmkv;

- (void)setPrefetchResult:(id)a0;
- (id)prefetchResultFromMemoryForKey:(id)a0;
- (id)prefetchResultForKey:(id)a0;
- (id)quickPrefetchResultsForKeys:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)clearMemoryCache;

@end

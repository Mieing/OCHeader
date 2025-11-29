@class NSOperationQueue, NSMutableDictionary, NSString;

@interface IESLiveAudioCache : NSObject <IESLiveAudioCacheProvider>

@property (retain, nonatomic) NSOperationQueue *diskOperationQueue;
@property (retain, nonatomic) NSMutableDictionary *cacheDictionary;
@property (nonatomic) double defaultTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveCacheDictionary;
- (void)performDiskWriteOperation:(id)a0;
- (void)deleteDataAtPath:(id)a0;
- (id)cacheDir;
- (BOOL)hasCacheForKey:(id)a0;
- (void)copyFilePath:(id)a0 asKey:(id)a1 withTimeout:(double)a2;
- (void)removeCacheWithTimeout;
- (void)copyFilePath:(id)a0 asKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeItemFromCache:(id)a0;
- (void)clearCache;
- (id)filePathForKey:(id)a0;
- (void)saveAfterDelay;

@end

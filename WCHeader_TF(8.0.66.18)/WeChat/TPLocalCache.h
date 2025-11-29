@class NSRecursiveLock, NSMutableDictionary, NSString, NSMutableArray;

@interface TPLocalCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *memeryCacheMap;
@property (retain, nonatomic) NSMutableArray *memeryItemArray;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSString *cachePath;
@property (nonatomic) int diskItemCount;
@property (nonatomic) long long diskItemCacheSize;
@property (retain, nonatomic) NSMutableArray *diskItemArray;

- (id)initWithName:(id)a0;
- (void)initDefaultDisk;
- (void)put:(id)a0 value:(id)a1 cacheTime:(double)a2 saveDisk:(BOOL)a3;
- (void)put:(id)a0 value:(id)a1 cacheTime:(double)a2;
- (void)put:(id)a0 value:(id)a1;
- (id)get:(id)a0;
- (id)get:(id)a0 memeryOnly:(BOOL)a1;
- (long long)getFileSize:(id)a0 key:(id)a1;
- (double)getFileLastModifyTime:(id)a0 key:(id)a1;
- (void)clearMemery;
- (void)clearCache;
- (void)removeOneItem:(id)a0;
- (BOOL)writeToFile:(id)a0 cacheObject:(id)a1;
- (void)addInfoToFile:(id)a0 cacheSize:(long long)a1;
- (void)removeItemPath:(id)a0 itemKey:(id)a1;
- (void)writeItemInfo:(long long)a0 itemCount:(int)a1;
- (void)writeItemArray:(id)a0;
- (void)removeWithKey:(id)a0;
- (void)removeAll;
- (void)clearDiskCache;
- (id)logTag;
- (void).cxx_destruct;

@end

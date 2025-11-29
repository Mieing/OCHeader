@class BDPMMKVStorage, BDPNovelLRUCache, BDPNovelStorageConfig;

@interface BDPNovelStorageManager : NSObject

@property (retain, nonatomic) BDPNovelStorageConfig *config;
@property (retain, nonatomic) BDPNovelLRUCache *lruDataCache;
@property (nonatomic) long long sizeRecord;
@property (retain, nonatomic) BDPMMKVStorage *generalStorage;

+ (unsigned long long)getDictionarySize:(id)a0;
+ (unsigned long long)getArraySize:(id)a0;

- (id)getStoragePathWithBookID:(id)a0 type:(long long)a1 dataType:(long long)a2;
- (id)getStorageIDWithDataType:(long long)a0;
- (id)storageForBook:(id)a0 type:(long long)a1 dataType:(long long)a2;
- (id)storageWithParam:(id)a0;
- (void)operationStart:(id)a0 andParam:(id)a1;
- (void)updateBookLRURecord:(id)a0 cacheType:(long long)a1;
- (void)operationComplete:(id)a0 andParam:(id)a1;
- (id)getContentsItemStorageKey:(long long)a0;
- (id)getContentsItemIndexStorageKey:(id)a0;
- (long long)getIndexWithContentID:(id)a0 bookId:(id)a1;
- (id)getContentMetaDicWithIndex:(long long)a0 bookId:(id)a1;
- (id)getStoragePathWithBookID:(id)a0 type:(long long)a1;
- (void)updateWithStorageConfig:(id)a0;
- (void)setBookDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)getBookDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)removeBookDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)setContentsDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)getContentsDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)removeContentsDataWithParam:(id)a0 callback:(id /* block */)a1;
- (BOOL)containsContentWithParam:(id)a0;
- (void)setUserDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)getUserDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)removeUserDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)setUserContentsDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)getUserContentsDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)removeUserContentsDataWithParam:(id)a0 callback:(id /* block */)a1;
- (id)getUserContentStatusDicWithContentID:(id)a0 bookId:(id)a1;
- (id)getContnetMetaDicWithContentID:(id)a0 bookId:(id)a1;
- (void)reportPerformanceStatics:(id)a0 isWrite:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end

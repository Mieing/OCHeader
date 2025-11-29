@class NSString, NSMutableDictionary, NSRecursiveLock;
@protocol AWEFeedCacheDataInspector;

@interface AWEFeedCacheDataDepository : NSObject

@property (retain, nonatomic) id<AWEFeedCacheDataInspector> inspector;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL isDisposable;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSMutableDictionary *cacheIndexObjects;

- (void)clearCacheWithArray:(id)a0;
- (id)availableIds;
- (void)clearAllKeepingArray:(id)a0;
- (id)dataIndexWithAwemeID:(id)a0;
- (void)storeDataWithModel:(id)a0 sourceProvider:(id)a1;
- (void)storageWriteAsyncDic:(id)a0;
- (id)configIndexObjectWithAweme:(id)a0 sourceProvider:(id)a1;
- (BOOL)isDataExistWithAwemeID:(id)a0;
- (void)loadDataWithAwemeID:(id)a0 Completion:(id /* block */)a1;
- (id)initWithTag:(id)a0 inspector:(id)a1;
- (void)storeData:(id)a0 sourceProvider:(id)a1;
- (void)updateDataWithModel:(id)a0 sourceProvider:(id)a1;
- (void)loadDataWithAwemeIDs:(id)a0 Completion:(id /* block */)a1;
- (void)loadAllDataWith:(id /* block */)a0;
- (void)clearDataWithGroupID:(id)a0 includeVideoCache:(BOOL)a1;
- (void)clearCacheWithCount:(long long)a0;
- (void).cxx_destruct;
- (void)clearAll;

@end

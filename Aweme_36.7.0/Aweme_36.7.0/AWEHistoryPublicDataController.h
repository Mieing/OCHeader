@class NSNumber, NSMutableDictionary, NSString;

@interface AWEHistoryPublicDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSMutableDictionary *cachedInsertIDs;
@property (copy, nonatomic) NSString *secUserID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

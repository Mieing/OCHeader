@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AFDVisitorListDataController : NSObject

@property (retain, nonatomic) NSMutableArray *innerSectionDataSourceArray;
@property (retain, nonatomic) NSMutableDictionary *freshVisitorHashTable;
@property (retain, nonatomic) NSMutableDictionary *historyVisitorHashTable;
@property (retain, nonatomic) NSMutableDictionary *cellBusinessModelHashTable;
@property (retain, nonatomic) NSMutableArray *freshVisitorUserIDs;
@property (retain, nonatomic) NSMutableArray *historyVisitorUserIDs;
@property (nonatomic) BOOL isLoadingFresh;
@property (nonatomic) BOOL isLoadingHistory;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) unsigned long long pageCountFresh;
@property (nonatomic) unsigned long long pageCountHistory;
@property (nonatomic) long long pageCursorFresh;
@property (nonatomic) long long pageCursorHistory;
@property (nonatomic) long long unreadCursor;
@property (nonatomic) unsigned long long filterCountFresh;
@property (nonatomic) unsigned long long filterCountHistory;
@property (readonly, copy, nonatomic) NSArray *freshVisitorItems;
@property (readonly, copy, nonatomic) NSArray *historyVisitorItems;
@property (readonly, copy, nonatomic) NSArray *sectionDataSourceArray;
@property (nonatomic) BOOL hasMoreFresh;
@property (nonatomic) BOOL hasMoreHistory;
@property (nonatomic) unsigned long long totalCountFresh;
@property (nonatomic) unsigned long long totalCountHistory;

- (id)addressBookAccess;
- (void)removeAllVisitorData;
- (id)getParamsBoth;
- (BOOL)enableVisitorCache;
- (id)validCacheUIDs;
- (BOOL)enableUseVisitorCacheWithModel:(id)a0 error:(id)a1;
- (id)visitorCacheModel;
- (void)updateDataSourceWithResponseModel:(id)a0 cacheModel:(id)a1;
- (void)trackEventForUseVisitorCacheWithError:(id)a0;
- (void)addVisitorItemsWithType:(long long)a0 userModels:(id)a1;
- (void)updateDataSourceForSection;
- (BOOL)enableUpdateVisitorCache;
- (void)updateCacheModelWithResponseModel:(id)a0;
- (void)fetchFreshVisitorWithCompletion:(id /* block */)a0;
- (void)fetchHistoryVisitorWithCompletion:(id /* block */)a0;
- (id)getParamsFresh;
- (id)getParamsHistory;
- (BOOL)shouldShowFreshVisitors;
- (BOOL)shouldShowHistoryVisitors;
- (void)setVisitorItem:(id)a0 withUserID:(id)a1 withType:(long long)a2;
- (BOOL)hasVisitorPermission;
- (id)filterCacheVisitorsWithResponseModel:(id)a0 cacheModel:(id)a1;
- (void)fetchVisitorsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreVisitorsWithCompletion:(id /* block */)a0;
- (id)cellBusinessModelAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)itemAtIndexPath:(id)a0;

@end

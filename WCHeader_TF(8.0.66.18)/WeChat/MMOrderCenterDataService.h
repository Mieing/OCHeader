@class NSArray, NSString, WCTDatabase, WCTTable;

@interface MMOrderCenterDataService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *orderSearchHistoryTable;
@property (retain, nonatomic) NSArray *prefetchedTabCountItems;
@property (nonatomic) BOOL prefetchedOrderDetailsWeApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOrderCenterEnabledForFinder;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)getOrderListWithOrderType:(unsigned int)a0 evaluationStatus:(unsigned int)a1 filteringAppId:(id)a2 lastIndex:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)searchForOrdersWithKeyword:(id)a0 filteringAppId:(id)a1 offset:(unsigned int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)updatePrefetchedLandingPageTabCountItemsWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)invalidatePrefetchedLandingPageTabCountItems;
- (void)getLandingPageTabCountItemsWithFilteringAppId:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)prefetchOrderDetailsWeApp;
- (void)invalidatePrefetchedOrderDetailsWeApp;
- (id)getSearchHistory;
- (BOOL)addSearchHistory:(id)a0;
- (BOOL)removeSearchHistory:(id)a0;
- (BOOL)clearSearchHistory;
- (void)willRecoverDatabase;
- (id)databasePath;
- (void)openDatabase;
- (void)closeDatabase;
- (void)setupTables;
- (id)createTableWithName:(id)a0 tableClass:(Class)a1;
- (void).cxx_destruct;

@end

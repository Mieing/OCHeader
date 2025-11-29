@class FTSDB;

@interface FTSWeShopDB : NSObject

@property (retain, nonatomic) FTSDB *database;

- (void)dealloc;
- (BOOL)initDB:(id)a0;
- (BOOL)clearTables;
- (long long)getWeShopLastSyncUpdateSeq;
- (BOOL)insertOrUpdateWeShopLastSyncUpdateSeq:(long long)a0;
- (BOOL)modifyRowsTransactionInWeShopTablesWithInsertOrUpdateItems:(id)a0 deleteItems:(id)a1 syncUpdateSeq:(long long)a2;
- (id)queryTextInWeShopTables:(id)a0 limit:(unsigned long long)a1 cancelBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

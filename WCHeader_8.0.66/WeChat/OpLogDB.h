@class WCTDatabase, WCTTable;

@interface OpLogDB : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void)dealloc;
- (BOOL)ConfigWithDir:(id)a0;
- (void)CloseDB;
- (BOOL)InsertOplogInDB:(id)a0;
- (id)GetOplogsAfterOplogId:(unsigned int)a0 limit:(int)a1;
- (BOOL)DeleteOplogInDB:(unsigned int)a0;
- (void).cxx_destruct;

@end

@class WCTDatabase, WCTTable;

@interface WCAdvertiseLogDB : MMObject {
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (id)initWithPath:(id)a0;
- (BOOL)runTransaction:(id /* block */)a0;
- (void)closeDB;
- (id)getLogTable;
- (unsigned int)getMaxLocalId;
- (BOOL)insertADLogItem:(id)a0;
- (id)getADLogs:(unsigned int)a0 toLocalId:(unsigned int)a1 limit:(int)a2;
- (BOOL)deleteADLogs:(unsigned int)a0 toLocalId:(unsigned int)a1;
- (void).cxx_destruct;

@end

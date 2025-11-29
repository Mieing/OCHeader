@class WCTDatabase, WCTTable;

@interface DataReportNewUBACacheWCDB : NSObject {
    WCTDatabase *m_dataBase;
    WCTTable *m_table;
}

- (void)reset;
- (void)close;
- (id)genDBPath;
- (void)save:(id)a0;
- (void)clear;
- (id)query;
- (void).cxx_destruct;

@end

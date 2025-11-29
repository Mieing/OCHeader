@class WCTDatabase, WCTTable;

@interface PublicWifiDB : MMObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_table;

- (void)initDB;
- (void)closeDB;
- (BOOL)cleanDB;
- (BOOL)saveApBase:(id)a0;
- (BOOL)deleteApBase:(id)a0;
- (id)getApBaseWithMac:(id)a0;
- (id)getApBaseWithSsid:(id)a0 opCode:(unsigned int)a1;
- (void).cxx_destruct;

@end

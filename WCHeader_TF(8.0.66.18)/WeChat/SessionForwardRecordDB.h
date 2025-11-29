@class WCTDatabase, WCTTable;

@interface SessionForwardRecordDB : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *forwardRecordTable;
@property (retain, nonatomic) WCTTable *forwardRecordItemTable;

- (id)init;
- (void)dealloc;
- (void)reloadDataBase;
- (void)didRecoverDatabase;
- (void)deleteSession:(id)a0;
- (void)deleteExpiredSessionForwardRecord;
- (void)insertSession:(id)a0 scene:(unsigned long long)a1;
- (void)updateSessionScene:(id)a0 scene:(unsigned long long)a1;
- (void)setHidden:(BOOL)a0 forUsername:(id)a1;
- (id)recentForwardRecords;
- (void).cxx_destruct;

@end

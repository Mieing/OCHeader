@class WCTDatabase;

@interface WXGMigrationInfoDB : NSObject

@property (retain, nonatomic) WCTDatabase *infoDB;

- (void)dealloc;
- (void)closeDB;
- (void)createSessionLastTimeTableWithDeviceID:(id)a0;
- (void)insertSession:(id)a0 withLastTime:(unsigned int)a1 withDeviceID:(id)a2;
- (void)insertSession:(id)a0 withBeginTime:(unsigned int)a1 withEndTime:(unsigned int)a2 withDeviceID:(id)a3;
- (unsigned int)getSessionLastTime:(id)a0 withDeviceID:(id)a1;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)a0 withTmpLastTime:(unsigned int)a1 withDeviceID:(id)a2;
- (BOOL)hasMigrationWithDeviceID:(id)a0;
- (BOOL)hasMigrationWithDeviceID:(id)a0 withSessionName:(id)a1;
- (id)p_getSessionLastTimeTableWithDeviceID:(id)a0;
- (id)p_getSessionTimeIntervalTableWithDeviceID:(id)a0;
- (void)p_mergeTheTimeIntervalArray:(id)a0;
- (void).cxx_destruct;

@end

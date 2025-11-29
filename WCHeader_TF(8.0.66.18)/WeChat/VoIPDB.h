@class WCTDatabase, WCTTable;

@interface VoIPDB : MMObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_table;
@property (retain, nonatomic) WCTTable *m_tableVoIPMessageHistory;

- (id)init;
- (id)pathForDatabase;
- (void)setupDatabase;
- (id)internalCreateTable:(id)a0 tableClass:(Class)a1;
- (void)closeDB;
- (void)clearData;
- (void)closeDBBeforeInit;
- (BOOL)setIlinkStatus:(id)a0 sdkMode:(unsigned int)a1 expireTime:(unsigned int)a2 liveTime:(unsigned int)a3;
- (unsigned int)getSDKModeForContact:(id)a0;
- (unsigned int)getExpireTimeForContact:(id)a0;
- (BOOL)InsertVoIPMessageHistory:(id)a0 isFromServer:(BOOL)a1;
- (id)getVoIPMesageHistoryByLimit:(long long)a0;
- (id)getVoIPMesageHistoryWhere:(const void *)a0 order:(const void *)a1 limit:(long long)a2;
- (BOOL)deleteVoIpMessageHistoryWhere:(const void *)a0;
- (void)onDelMsg:(id)a0 msgList:(id)a1 deleteAll:(BOOL)a2;
- (void).cxx_destruct;

@end

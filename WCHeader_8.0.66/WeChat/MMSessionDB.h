@class NSCache, NSMutableDictionary, WCTDatabase, WCTTable, MMSessionSetting, LSMFileStorage;

@interface MMSessionDB : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_table;
    NSMutableDictionary *m_sessionCache;
    MMSessionSetting *m_sessionSetting;
    LSMFileStorage *m_fileStorage;
    NSCache *m_preLoadSessionCache;
    WCTTable *m_tableSessionDeleteInfo;
    WCTTable *m_tableSessionLastMsgInfo;
    BOOL m_disableAutoFixLastMsg;
}

- (id)init;
- (void)initDB;
- (id)GetAllSession:(BOOL *)a0;
- (id)GetAllSession;
- (BOOL)dbAddOrModifySession:(id)a0;
- (BOOL)dbAddOrModifySessions:(id)a0;
- (BOOL)dbDeleteSession:(id)a0;
- (BOOL)dbDeleteSessions:(id)a0;
- (void)dbImportSessions:(id)a0;
- (void)tryLoadSessionSetting;
- (void)saveSessionSetting;
- (void)SetSessionImported;
- (long long)GetSessionImportTime;
- (BOOL)saveSessionInfo:(id)a0;
- (void)saveSessionInfos:(id)a0;
- (id)loadSessionOfUser:(id)a0;
- (void)deleteSessionOfUser:(id)a0;
- (unsigned int)GetSessionModifyTimeInSeconds:(id)a0;
- (void)ImportSessions:(id)a0;
- (unsigned int)GetSessionVersion;
- (void)SetSessionVersion:(unsigned int)a0;
- (unsigned int)GetSessionFailCount;
- (void)SetSessionFailCount:(unsigned int)a0;
- (unsigned int)GetSessionCount;
- (void)SetSessionCount:(unsigned int)a0;
- (void)CleanupPreLoadSessionCache;
- (void)ASyncFulFillSession:(id)a0;
- (void)FulFillSession:(id)a0 checkStatus:(BOOL)a1;
- (void)AddSession:(id)a0;
- (void)ModifySession:(id)a0;
- (void)AddOrModifySessions:(id)a0;
- (void)DeleteSessionByUserName:(id)a0;
- (void)DeleteSessions:(id)a0;
- (BOOL)InsertOrUpdateSessionDeleteInfo:(id)a0;
- (id)GetSessionDeleteInfo:(id)a0;
- (BOOL)DeleteOutOfDateSessionDeleteInfo;
- (void)onRenewMMDB;
- (void)updateSession:(id)a0 lastMsgSvrId:(long long)a1;
- (void)removeSessionLastMsgRecords:(id)a0;
- (long long)getSessionLastMsgId:(id)a0;
- (void)checkSessionLastMsgUpdate:(id)a0;
- (void).cxx_destruct;

@end

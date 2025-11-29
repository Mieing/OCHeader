@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableSet, FTSMessageDB, FTSMsgIndexState, FTS5MigrationInfo;

@interface FTSMsgIndexMgr : FTSIndexMgr <IMsgExt, WXGImportMessageNotification, IFTSMessageExt, IMMNewSessionMgrExt> {
    NSRecursiveLock *_lock;
    unsigned int _unIndexNewMsgCount;
    NSMutableDictionary *_dicUnIndexMsgCache;
    NSMutableDictionary *_dicSessionMaxId;
    BOOL _hasDeleteTask;
    BOOL _hasMigrationTask;
    NSMutableSet *_newMsgIndexSessions;
    NSMutableSet *_oldMsgIndexSessions;
    FTSMsgIndexState *_indexingState;
    FTS5MigrationInfo *_migrationInfo;
    BOOL m_hasReportMigrationStartIdkey;
    BOOL m_hasReportMigrationEndIdkey;
    BOOL m_needClearAllIndex;
}

@property (retain) NSMutableSet *indexRepairingUsrs;
@property (nonatomic) BOOL isInitingIndex;
@property (retain, nonatomic) FTSMessageDB *ftsMessageDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFTSDB:(id)a0;
- (BOOL)isValidAccount;
- (void)makeSureInitIndexing;
- (void)asyncInitIndex;
- (void)doInitIndexing;
- (void)doInitMsgSourceState;
- (BOOL)updateToDeleteLocalIds:(id)a0 usr:(id)a1;
- (void)resetIndexState;
- (BOOL)needIndexNewMsgFirst;
- (BOOL)hasNewIndexTask;
- (BOOL)canDoIndexing;
- (void)updateIndexStatus:(id)a0 withLocalId:(unsigned int)a1;
- (void)clearIndexStatus:(id)a0;
- (id)captureOrUpdateIndexStatus;
- (void)checkIndexInvalid:(id)a0;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingFireTask:(int)a0;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)cacheUnIndexMsg:(id)a0 forKey:(id)a1;
- (unsigned int)calAllMemMsgCount;
- (void)removeUnIndexMsgFromID:(unsigned int)a0 toID:(unsigned int)a1 forKey:(id)a2;
- (void)clearIndexMemCache;
- (id)safeCopyUnIndexMsgCache;
- (BOOL)haveTaskRunning;
- (BOOL)rebuildIndexForSession:(id)a0;
- (void)fireMsgIndexingTaskLoop;
- (BOOL)internalBuildIndexForNewMsg;
- (BOOL)internalBuildIndexForOldMsg;
- (BOOL)internalDeleteExpiredIndex;
- (BOOL)internalMigrateIndex;
- (void)markMigrationStart;
- (void)markMigrationFinish;
- (id)migrationInfoPath;
- (id)getBatchAddMessage:(BOOL)a0 finishSessions:(id)a1;
- (BOOL)isSessionUsrValid:(id)a0 contact:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)onImportMessage:(id)a0;
- (void)onWillDeleteAllSession;
- (void)onDidDeleteAllSession;
- (void)onSessionRebuildFromContact;
- (void)onFTSMessageDBWillRepairIndexForUsername:(id)a0;
- (void)onFTSMessageDBDidRepairIndexForUsername:(id)a0 result:(BOOL)a1;
- (void).cxx_destruct;

@end

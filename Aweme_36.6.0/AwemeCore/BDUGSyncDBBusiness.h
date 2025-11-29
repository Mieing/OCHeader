@interface BDUGSyncDBBusiness : BDUGSyncDBBase

- (BOOL)updateHistorySynclogWithSynclogs:(id)a0;
- (void)createTable;
- (void)upgradeFrom:(int)a0 to:(int)a1;
- (BOOL)_updateHistorySynclogWithType:(id)a0 topicType:(int)a1 synclogs:(id)a2;
- (id)_getDataWithSql:(id)a0 values:(id)a1;
- (BOOL)_insertHistorySynclogWithSynclogs:(id)a0 insertCount:(unsigned long long)a1 topicType:(int)a2;
- (BOOL)_deleteHistorySynclogWithCountSql:(id)a0 selectSql:(id)a1 deleteSql:(id)a2 fileStorageSet:(id)a3 limit:(long long)a4;
- (BOOL)_addColumn:(id)a0 toTable:(id)a1 alterSql:(id)a2;
- (BOOL)_updateSyncCursorsWithRemoteTopicMap:(id)a0 localSyncCursors:(id)a1 did:(id)a2 uid:(id)a3;
- (id)_updateSnapshotWithData:(id)a0 oldString:(id)a1 syncLog:(id)a2;
- (id)_getSynclogsWithSql:(id)a0 values:(id)a1;
- (BOOL)_deleteReportLog:(id)a0;
- (id)_upgradeForVersion2:(id)a0;
- (id)_upgradeForVersion3:(id)a0;
- (id)_upgradeForVersion4:(id)a0;
- (BOOL)insertOrReplaceBusinesses:(id)a0;
- (BOOL)updateSyncCursorsWithPackets:(id)a0 did:(id)a1 uid:(id)a2;
- (id)readSyncCursors;
- (BOOL)insertSyncLogsWithPackets:(id)a0 did:(id)a1 uid:(id)a2 channel:(unsigned long long)a3;
- (id)readSyncLogWithBusinessID:(long long)a0 did:(id)a1 uid:(id)a2;
- (void)deleteSyncLog:(id)a0;
- (id)readReportLog;
- (BOOL)deleteReportLog:(id)a0 did:(id)a1 uid:(id)a2;
- (id)readSynclogWithSyncIDs:(id)a0;
- (id)readHistorySynclogWithConfig:(id)a0;
- (BOOL)patchSyncLog;
- (BOOL)resetLocalCursor;
- (BOOL)insertBusiness:(id)a0;
- (BOOL)deleteBusiness:(id)a0;
- (BOOL)insertUploadedSyncLog:(id)a0 forBusiness:(long long)a1 forMessageID:(id)a2;
- (BOOL)insertUploadedSyncLogs:(id)a0 forBusiness:(long long)a1;
- (BOOL)deleteDirtyData;
- (id)initWithPath:(id)a0;

@end

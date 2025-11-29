@class FTSDB;

@interface FTSIntelligentMessageDB : NSObject

@property (retain, nonatomic) FTSDB *database;
@property (nonatomic) BOOL isHandlingUsernameFailIdRetry;
@property (nonatomic) BOOL isHandlingAutoReparing;

- (BOOL)asyncCheckAndRepairIntelligent:(id)a0 completion:(id /* block */)a1;
- (void)logFTSIntelligentIndexStatus:(id)a0;
- (BOOL)forceRepairIntelligent:(id)a0;
- (void)dealloc;
- (BOOL)initDB:(id)a0;
- (BOOL)createAllTable;
- (BOOL)clearAllTable;
- (void)preloadCacheUser;
- (BOOL)insertNewRowInIntelligentUserNameIDTable:(id)a0 lastLocalId:(unsigned int)a1;
- (BOOL)batchInsertMsgToFTSTable:(id)a0;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTableWithlimitUsrname:(id)a0 limit:(int)a1 rowidIndexResult:(id)a2;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)a0 rowidIndexResult:(id)a1;
- (id)getInsertIntelligentHadDownloadInValidMsgToFTSTableWithLimitUsrname:(id)a0 limit:(int)a1;
- (unsigned int)getInsertIntelligentHadDownloadInValidMsgCount:(id)a0;
- (unsigned int)getHadBuildIntelligentMsgCount:(id)a0;
- (id)GetFirstIntelligentMsgIndexItem:(id)a0;
- (BOOL)updateIntelligentUserNameInvalid:(id)a0;
- (BOOL)updateFts5IntelligentMsgContentHasDownLoadFlagWithUserName:(id)a0 msgLocalId:(unsigned int)a1;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)a0 faceLabelId:(unsigned int)a1;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)a0;
- (BOOL)repairFaceClusterLabelId:(unsigned int)a0 arrRepeatFaceClusterLabelId:(id)a1;
- (BOOL)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)a0 arrL2NormFaceFeature:(id)a1;
- (id)queryText:(id)a0 limitUsrname:(id)a1 searchType:(unsigned int)a2 cancelBlock:(id /* block */)a3;
- (unsigned int)queryCountText:(id)a0 limitUsrname:(id)a1 searchType:(unsigned int)a2;
- (void)updateDirkMsgIfNeededForChatTable:(id)a0 leftIds:(id)a1 cmpMsgList:(id)a2;
- (unsigned int)getNextCursorMesId:(id)a0;
- (unsigned int)getPreCursorMesId:(id)a0;
- (id)getAllFaceClusterList;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (BOOL)updateFaceClusterItemFaceFeatureWithId:(unsigned int)a0 arrFaceFeature:(id)a1;
- (id)queryIntelligentFaceClusterWithLimitUsrname:(id)a0 arrMsgItem:(id)a1 searchQuery:(id)a2;
- (id)queryIntelligentMsgWithSimilarWord:(id)a0 arrClassificationLabelId:(id)a1;
- (id)queryIntelligentMsg:(id)a0 msgLocalId:(unsigned int)a1;
- (id)getReportIntelligentMsgEveryDay;
- (void)insertSecureRank:(id)a0;
- (BOOL)checkQueryIsSecureRank:(id)a0;
- (BOOL)hasInvalidIntelligentRowsInChatTable;
- (BOOL)deleteInvalidIntelligentRowsInChatTable:(unsigned int)a0 outUsr:(id *)a1 outRemains:(unsigned int *)a2 cancelBlock:(id /* block */)a3;
- (BOOL)updateToDeleteIntelligentLocalIds:(id)a0 usr:(id)a1;
- (void)getAllSessions:(unsigned int *)a0 andAllIndexMsg:(unsigned int *)a1;
- (unsigned int)getIndexCountForUsr:(id)a0;
- (void)getIndexProgressForSession:(id)a0 preCursor:(unsigned long long *)a1 nextCursor:(unsigned long long *)a2;
- (id)queryIntelligentClassificationWithLimitUsrname:(id)a0 arrClassificationLabelId:(id)a1;
- (BOOL)checkValidIntelligentIndexItemByUserName:(id)a0;
- (void)addUserNameInvalidFail:(id)a0;
- (void)retrySetUserNameInvalid;
- (void).cxx_destruct;

@end

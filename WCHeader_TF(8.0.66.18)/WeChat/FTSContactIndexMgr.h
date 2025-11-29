@class FTSContactDB, NSMutableSet, FTSContactIndexInfo;

@interface FTSContactIndexMgr : FTSIndexMgr <IContactMgrExt> {
    NSMutableSet *m_invalidUsernames;
    int *m_unIndexContactCount;
    BOOL m_isIndexing;
    BOOL m_hasCheckIndex;
    BOOL m_shouldUseFTS;
    BOOL *m_indexingType;
    BOOL m_contactHasLoad;
    FTSContactIndexInfo *m_contactIndexInfo;
}

@property (nonatomic) BOOL hasCheckIndexCount;
@property (retain, nonatomic) FTSContactDB *ftsContactDB;

- (id)initWithFTSDB:(id)a0;
- (void)dealloc;
- (BOOL)shouldFireTask;
- (BOOL)contactShouldUseFTS;
- (void)iFTSIndexingInit;
- (void)clearIndexRecordWhenRecoverDB;
- (void)iFTSIndexingFireTask:(int)a0;
- (void)iFTSClearIndex;
- (BOOL)hasIndexTask;
- (void)captureIndexStatus;
- (void)freeIndexStatus;
- (void)updateIndexCount:(id)a0;
- (void)markIndexingStart;
- (void)markIndexingFinish;
- (id)pathForIndexiInfo;
- (void)fireIndexingTaskLoop;
- (void)checkInvalidIndex;
- (void)checkMissingIndex;
- (void)markIndexInvalid:(id)a0;
- (void)checkDeleteInvalidIndex;
- (BOOL)existValidIndexOfContact:(id)a0;
- (id)getAllIndexRecord;
- (void)deleteIndexOfContact:(id)a0;
- (void)onNewContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onContactListUpdate:(unsigned int)a0;
- (void).cxx_destruct;

@end

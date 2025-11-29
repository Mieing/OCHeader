@class FTSIntelligentMessageDB, NSMutableDictionary, NSString, FTSIntelligentMsgIndexMgr, FTSIntelligentMsgSearchMgr, NSMutableArray;

@interface FTSIntelligentMessageMgr : NSObject <FTSIntelligentMsgSearchTaskDelegate> {
    NSMutableDictionary *_dicMsgSearchTask;
    unsigned int m_intelligentSearchType;
}

@property (retain, nonatomic) FTSIntelligentMessageDB *ftsMessageDB;
@property (retain, nonatomic) FTSIntelligentMsgSearchMgr *searchMgr;
@property (retain, nonatomic) NSMutableArray *arrSessionUser;
@property (retain, nonatomic) NSMutableDictionary *dicLatestSession;
@property (retain, nonatomic) FTSIntelligentMsgIndexMgr *indexMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initIndexMgr:(id)a0;
- (id)safeCopyUnIndexMsgCache;
- (void)makePageTaskIfNil:(id)a0;
- (BOOL)isDBSearchFinishFor:(id)a0 taskKey:(id)a1;
- (BOOL)hasIndexMessageResultFor:(id)a0 taskKey:(id)a1;
- (BOOL)hasMemoryMessageResultFor:(id)a0 taskKey:(id)a1;
- (void)setNewestQuery:(id)a0 searchType:(unsigned int)a1 taskKey:(id)a2;
- (id)getArrLastQuerywords:(id)a0;
- (void)prepareRestrictSearch:(id)a0 taskKey:(id)a1;
- (void)asyncSearch:(id)a0 searchType:(unsigned int)a1 taskKey:(id)a2;
- (void)cancelSearch:(id)a0;
- (BOOL)hasSearchResultFor:(id)a0 taskKey:(id)a1;
- (BOOL)hasSearchDoneFor:(id)a0 taskKey:(id)a1;
- (id)getLastQueryText:(id)a0;
- (id)getNewestQuery:(id)a0;
- (BOOL)checkValidIntelligentIndexItemByUserName:(id)a0;
- (id)queryIntelligentMsg:(id)a0 msgLocalId:(unsigned int)a1;
- (id)getAllNeedBuildIndexSessionUserNameAr;
- (id)getReportIntelligentMsgEveryDay;
- (BOOL)checkCanDoIntelligent;
- (BOOL)checkCanDoIntelligentInRAM;
- (unsigned int)syncSearchCount:(id)a0 limitUsrname:(id)a1 searchType:(unsigned int)a2;
- (id)searchIntelligentClassification:(id)a0 limitUserName:(id)a1 forceUpdate:(BOOL)a2;
- (BOOL)checkIntelligentSynonymClassificationHadImageMessage:(id)a0 limitUserName:(id)a1;
- (id)getHadMessageClassificationListWithLimitUserName:(id)a0;
- (BOOL)updateFaceClusterItemFaceFeatureWithId:(unsigned int)a0 arrFaceFeature:(id)a1;
- (id)getAllFaceClusterList;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)a0 faceLabelId:(unsigned int)a1;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)a0;
- (BOOL)repairFaceClusterLabelId:(unsigned int)a0 arrRepeatFaceClusterLabelId:(id)a1;
- (BOOL)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)a0 arrL2NormFaceFeature:(id)a1;
- (void)insertSecureRank:(id)a0;
- (BOOL)checkQueryIsSecureRank:(id)a0;
- (id)querySimilarWordsSearch:(id)a0 limitUserName:(id)a1;
- (void)priorityBuildIndexMsgWithUserName:(id)a0;
- (void)cancelPriorityBuildIndexMsgWithUserName:(id)a0;
- (BOOL)checkPriorityHadFinishOperate:(id)a0;
- (BOOL)checkPriorityImageMessageHadBuildIndex:(id)a0;
- (BOOL)checkAllImageMessageHadBuildIndex:(id)a0;
- (void)onIntelligentMsgSearchTaskResultChanged:(BOOL)a0 taskObj:(id)a1;
- (id)getTaskForkey:(id)a0;
- (id)getTaskForkey:(id)a0 queryText:(id)a1;
- (void)removeTaskForContext:(id)a0;
- (unsigned int)asyncGetFTSIntelligentMsgDBInfoWhenComplete:(id /* block */)a0;
- (void)asyncCheckAndRepairIntelligent:(id)a0;
- (BOOL)forceRepairIntelligent:(id)a0;
- (void)getIndexProgressForSession:(id)a0 preCursor:(unsigned long long *)a1 nextCursor:(unsigned long long *)a2;
- (void).cxx_destruct;

@end

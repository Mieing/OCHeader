@class NSCache, FTSMsgSearchMgr, NSMutableDictionary, FTSMessageDB, NSString, NSMutableArray, FTSMsgIndexMgr;

@interface FTSMessageMgr : NSObject <FTSMsgSearchTaskDelegate> {
    NSMutableDictionary *_dicMsgSearchTask;
    NSCache *_tableIdCache;
}

@property (retain, nonatomic) FTSMessageDB *ftsMessageDB;
@property (retain, nonatomic) FTSMsgSearchMgr *searchMgr;
@property (retain, nonatomic) NSMutableArray *arrSessionUser;
@property (retain, nonatomic) NSMutableDictionary *dicLatestSession;
@property (nonatomic) BOOL needMonitorReport;
@property (retain, nonatomic) FTSMsgIndexMgr *indexMgr;
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
- (void)setNewestQuery:(id)a0 taskKey:(id)a1;
- (void)setAgainSearch:(BOOL)a0 taskKey:(id)a1;
- (id)getNewestQuery:(id)a0;
- (id)getTalkerPartFromQuery:(id)a0 taskKey:(id)a1;
- (id)getRealQueryPartFromQuery:(id)a0 taskKey:(id)a1;
- (unsigned long long)getSessionUserCountForQuery:(id)a0 taskKey:(id)a1;
- (unsigned long long)getMsgItemsCountForQuery:(id)a0 taskKey:(id)a1;
- (unsigned long long)getTotalSessionUserCountForQuery:(id)a0 taskKey:(id)a1;
- (unsigned long long)getTotalMsgItemsCountForQuery:(id)a0 taskKey:(id)a1;
- (id)getSessionMsgItemsForQuery:(id)a0 atIndex:(unsigned long long)a1 taskKey:(id)a2;
- (id)getSessionUsernameForQuery:(id)a0 atIndex:(unsigned long long)a1 taskKey:(id)a2;
- (id)getArrLastQuerywords:(id)a0;
- (id)getLastQueryText:(id)a0;
- (void)prepareRestrictSearch:(id)a0 restrictSessionUsr:(id)a1 restrictTalkerUsr:(id)a2 restrictTalkerMatchTip:(id)a3 restrictTalkerQuery:(id)a4 sessionFirst:(BOOL)a5 taskKey:(id)a6;
- (void)asyncSearch:(id)a0 taskKey:(id)a1;
- (void)cancelSearch:(id)a0;
- (BOOL)hasSearchResultFor:(id)a0 taskKey:(id)a1;
- (BOOL)hasSearchDoneFor:(id)a0 taskKey:(id)a1;
- (BOOL)isLikelyTalkerSearch:(id)a0 taskKey:(id)a1;
- (void)onMsgSearchTaskResultChanged:(BOOL)a0 taskObj:(id)a1;
- (id)getTaskForkey:(id)a0;
- (id)getTaskForkey:(id)a0 queryText:(id)a1;
- (void)removeTaskForContext:(id)a0;
- (unsigned int)asyncGetFTSMsgDBInfoWhenComplete:(id /* block */)a0;
- (unsigned int)getTableIdForMessage:(id)a0 content:(id *)a1 UseCache:(BOOL)a2;
- (void)getIndexProgressForSession:(id)a0 preCursor:(unsigned long long *)a1 nextCursor:(unsigned long long *)a2 fts5Migrated:(BOOL *)a3;
- (BOOL)hasCreateAllIndex:(id)a0;
- (unsigned int)getIndexNotReadyCount:(id)a0;
- (void)asyncMonitorReport;
- (void).cxx_destruct;

@end

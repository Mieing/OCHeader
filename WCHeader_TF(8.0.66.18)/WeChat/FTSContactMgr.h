@class NSString, NSMutableDictionary, FTSContactIndexMgr, FTSContactDB;

@interface FTSContactMgr : NSObject <FTSContactSearchTaskDelegate> {
    NSMutableDictionary *m_dicContactSearchTask;
    FTSContactDB *m_ftsContactDB;
}

@property (retain, nonatomic) NSMutableDictionary *m_dicOriginalSearchText;
@property (nonatomic) BOOL needMonitorReport;
@property (retain, nonatomic) FTSContactIndexMgr *indexMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initIndexMgr:(id)a0;
- (void)doInitWorker;
- (id)getTaskForKey:(id)a0;
- (void)makeTaskIfNil:(id)a0;
- (void)removeTaskForKey:(id)a0;
- (id)getTaskForKey:(id)a0 queryText:(id)a1;
- (void)setNewestQuery:(id)a0 taskKey:(id)a1;
- (id)getNewestQuery:(id)a0;
- (id)getLastQueryText:(id)a0;
- (void)asyncSearch:(id)a0 type:(int)a1 taskKey:(id)a2;
- (void)asyncSearch:(id)a0 type:(int)a1 topHitMgr:(id)a2 taskKey:(id)a3;
- (void)asyncSearch:(id)a0 type:(int)a1 topHitMgr:(id)a2 extendSearchContact:(id)a3 taskKey:(id)a4;
- (void)asyncSearchWithMixedStrategy:(id)a0 pinyinText:(id)a1 type:(int)a2 topHitMgr:(id)a3 taskKey:(id)a4;
- (void)cancelSearchWithTaskKey:(id)a0;
- (void)selectContact:(id)a0 taskKey:(id)a1;
- (unsigned int)getTotalCountWithTaskKey:(id)a0;
- (id)getAllContactsWithTaskKey:(id)a0;
- (id)getSingleContactsWithTaskKey:(id)a0;
- (unsigned int)getSingleContactsCountWithTaskKey:(id)a0;
- (id)getGroupContactsWithTaskKey:(id)a0;
- (unsigned int)getGroupContactsCountWithTaskKey:(id)a0;
- (id)getBrandContactsWithTaskKey:(id)a0;
- (unsigned int)getBrandContactsCountWithTaskKey:(id)a0;
- (id)getBrandServiceContactsWithTaskKey:(id)a0;
- (unsigned int)getBrandServiceContactsCountWithTaskKey:(id)a0;
- (id)getAllSearchMatchTipWithTaskKey:(id)a0;
- (id)getMatchTipForUserName:(id)a0 taskKey:(id)a1;
- (BOOL)hasSearchDoneFor:(id)a0 taskKey:(id)a1;
- (BOOL)hasMatchWechatIDWithTaskKey:(id)a0;
- (BOOL)isMultiKeyMatchWithTaskKey:(id)a0;
- (void)setTopHitMgr:(id)a0 taskKey:(id)a1;
- (void)onContactSearchTaskFinish:(id)a0;
- (void)monitorReport;
- (id)syncSearchTextForSingleContact:(id)a0;
- (void)setOriginalSearchText:(id)a0 forTaskKey:(id)a1;
- (void)removeOriginalSearchTextForTaskKey:(id)a0;
- (id)getOriginalSearchText:(id)a0;
- (void).cxx_destruct;

@end

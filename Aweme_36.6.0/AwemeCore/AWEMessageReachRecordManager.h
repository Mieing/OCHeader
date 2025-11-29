@class NSString, MMKV, NSMutableDictionary;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachRecordManager : NSObject <AWEUserMessage, AWEMessageReachRecordAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (readonly, nonatomic) MMKV *mmkvJournal;
@property (nonatomic) BOOL hasJournalMapLoad;
@property (retain, nonatomic) NSMutableDictionary *journalMap;
@property (nonatomic) long long maxCount;
@property (nonatomic) double timeLimit;
@property (nonatomic) double lastSideBarConsumeTime;
@property (nonatomic) double latestSideBarMsgTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)printAllRecord;

- (void)didFinishLoginWithUid:(id)a0;
- (void)addNotification;
- (void)didFinishLogout;
- (void)loadCacheForColdLaunch:(id /* block */)a0;
- (void)loadCacheComplete:(id)a0;
- (void)updateTemplateStorageModel:(id)a0 forTemplateID:(id)a1;
- (void)updateMsgTimeIfNeed:(double)a0;
- (void)loadJournalMapOnMainThreadIfNeeded;
- (id)getJournalMapFromCache;
- (void)loadJournalMapIfNeeded;
- (void)deleteEarliestRecordsWithJournalMap:(id)a0;
- (id)earliestRecordsWithCount:(long long)a0 journalMap:(id)a1;
- (void)logWithNoticeTemplateStorageModel:(id)a0;
- (id)getStorageModelWithTemplateId:(id)a0 currentTimeInterval:(double)a1;
- (void)logSideBarConsume;
- (void).cxx_destruct;
- (void)clearAll;
- (id)initWithConfig:(id)a0;

@end

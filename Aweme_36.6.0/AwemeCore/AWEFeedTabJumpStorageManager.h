@class NSString, MMKV, AWEFeedTabJumpStorage;

@interface AWEFeedTabJumpStorageManager : NSObject <AWEHPTabJumpFrequencyControlProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) AWEFeedTabJumpStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)checkFrequencyControlWithTabID:(id)a0;
- (id)getRequestParamForShownTabIDs;
- (BOOL)addTriggerRecordWithTabID:(id)a0 strategyID:(id)a1 awemeID:(id)a2 eventType:(long long)a3;
- (long long)getTriggerRecordCountWithTabID:(id)a0 strategyID:(id)a1;
- (void)recordTabJumpGuidanceConsumptionWithModel:(id)a0;
- (void)recordTabJumpGuidanceShowEventWithModel:(id)a0;
- (id)getShowedAwemeIDs;
- (void)clearShowRecordWithExpireHour:(long long)a0;
- (long long)getShowRecordCount;
- (id)getLastShowTimestampWithTabID:(id)a0;
- (BOOL)canGuideButtonShowForExitStrategy:(id)a0;
- (void)updateLastShowTimestampWithTabID:(id)a0;
- (id)findStorageWithTabID:(id)a0;
- (id)createStorageWithTabID:(id)a0;
- (BOOL)p_checkFrequencyControlWithTabID:(id)a0 includesExitStrategy:(BOOL)a1;
- (BOOL)p_canGuideButtonShowForExitDayStrategy:(id)a0;
- (BOOL)p_canGuideButtonShowForExitHourStrategy:(id)a0;
- (BOOL)p_checkAllFrequencyControlWithTabID:(id)a0;
- (void)clearTriggerRecordsWithTabID:(id)a0;
- (void)addShowRecordWithTabID:(id)a0 awemeID:(id)a1;
- (void)refreshShowRecordsForExitWithTabID:(id)a0 isClicked:(BOOL)a1;
- (void)asyncCheckAllFrequencyControlWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)asyncRecordTabJumpGuidanceShowEventWithModel:(id)a0;
- (void)asyncRecordTabJumpGuidanceConsumptionWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadData;
- (void)saveData;

@end

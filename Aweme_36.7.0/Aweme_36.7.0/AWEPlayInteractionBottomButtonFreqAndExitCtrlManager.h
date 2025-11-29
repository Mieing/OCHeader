@class NSString, NSMutableDictionary, MMKV;

@interface AWEPlayInteractionBottomButtonFreqAndExitCtrlManager : NSObject <AWEPlayInteractionBottomButtonFreqAndExitCtrlManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *btnShowRecord;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *freqCtrlResultCache;
@property (retain, nonatomic) NSMutableDictionary *exitCtrlResultCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scenesToCtrl;
+ (id)freqCtrlResultCacheKeyForModel:(id)a0;
+ (id)exitCtrlResultCacheKeyForModel:(id)a0;
+ (long long)bizFreqCtrlModelCountForScene:(id)a0 ctrlStrategy:(id)a1;
+ (long long)bizFreqCtrlButtonShowMaxCountForScene:(id)a0 ctrlStrategy:(id)a1;
+ (long long)containerFreqCtrlModelCountForScene:(id)a0;
+ (long long)containerFreqCtrlButtonShowMaxCountForScene:(id)a0;
+ (id)bizUnConsumedRecordKeyForScene:(id)a0 btnId:(id)a1;
+ (long long)bizExitCtrlButtonUnConsumedCountForScene:(id)a0 ctrlStrategy:(id)a1;
+ (double)bizExitCtrlButtonAvoidPeriodForScene:(id)a0 ctrlStrategy:(id)a1;
+ (double)bizExitCtrlUnConsumedRecordPeriodForScene:(id)a0 ctrlStrategy:(id)a1;
+ (id)containerUnConsumedRecordKeyForScene:(id)a0;
+ (long long)containerExitCtrlButtonUnConsumedCountForScene:(id)a0;
+ (double)containerExitCtrlButtonAvoidPeriodForScene:(id)a0;
+ (double)containerExitCtrlUnConsumedRecordPeriodForScene:(id)a0;
+ (id)bizFreqCtrlConfigForScene:(id)a0 ctrlStrategy:(id)a1;
+ (id)containerFreqCtrlConfigForScene:(id)a0;
+ (id)defaultBizFreqCtrlConfigForScene:(id)a0;
+ (id)bizExitCtrlConfigForScene:(id)a0 ctrlStrategy:(id)a1;
+ (id)containerExitCtrlConfigForScene:(id)a0;
+ (id)defaultBizExitCtrlConfigForScene:(id)a0;
+ (id)sharedManager;

- (void)clearShowRecordForScene:(id)a0;
- (void)clearFreqAndExitControlCheckResultCache;
- (BOOL)isFreqAndExitControlSatisfiedWithAwemeModel:(id)a0 infoModel:(id)a1;
- (void)addBtnShowRecordForModel:(id)a0 btnId:(id)a1;
- (void)addUnconsumedRecordForScene:(id)a0 btnId:(id)a1;
- (void)clearUnconsumedRecordForScene:(id)a0 btnId:(id)a1;
- (void)resetFreqAndExitControlCheckResultForAwemeModel:(id)a0;
- (BOOL)isFreqControlSatisfiedWithAwemeModel:(id)a0 infoModel:(id)a1;
- (BOOL)isExitControlSatisfiedWithAwemeModel:(id)a0 infoModel:(id)a1;
- (void)updateFreqCtrlResultCacheWithKey:(id)a0 btnId:(id)a1 result:(long long)a2;
- (BOOL)isBizFreqControlSatisfiedWithAwemeModel:(id)a0 btnId:(id)a1 strategy:(id)a2;
- (BOOL)isContainerFreqControlSatisfiedWithAwemeModel:(id)a0;
- (void)updateExitCtrlResultCacheWithKey:(id)a0 btnId:(id)a1 result:(long long)a2;
- (BOOL)isBizExitControlSatisfiedWithAwemeModel:(id)a0 btnId:(id)a1 strategy:(id)a2 currentTimeStamp:(double)a3;
- (BOOL)isContainerExitControlSatisfiedWithAwemeModel:(id)a0 currentTimeStamp:(double)a1;
- (void).cxx_destruct;

@end

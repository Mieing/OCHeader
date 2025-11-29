@class NSString, MMKV, AWEAntiAddictNoticeSettingModel, NSDictionary, NSMutableDictionary, NSObject, AWEAntiAddictStrategyData, AWEAntiAddictTimeManagerSettingModel;
@protocol OS_dispatch_queue;

@interface AWEAntiAddictStorage : NSObject <AWEAntiAddictLogProtocol>

@property (retain) AWEAntiAddictNoticeSettingModel *noticeSettingModel;
@property (retain) AWEAntiAddictTimeManagerSettingModel *timeManagerSettingModel;
@property (retain) AWEAntiAddictStrategyData *strategyData;
@property (retain) NSDictionary *constStrategyData;
@property (retain) NSMutableDictionary *memoryData;
@property (retain) NSDictionary *constMemoryData;
@property BOOL settingPrepared;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MMKV *mmkv;
@property double antiAddictionDayTime;
@property double antiAddictionNightTime;
@property double antiAddictVideoRetraceInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategySettingDictionary;
+ (long long)antiAddictRelieveVideoRevokeInterval;
+ (id)timeManagerSettingDictionary;
+ (id)defaultSettingDictionaryV2;
+ (id)defaultTimeManagerSettingDictionary;
+ (id)moduleName;

- (void)updatePreparedDataWithDic:(id)a0 validDate:(id)a1;
- (id)getPreparedData;
- (id)loadTimeCounter;
- (void)saveTimeCounter:(id)a0;
- (void)saveStrategyData;
- (void)loadStrategyData;
- (void)loadMemoryData;
- (id)maxMinuteUsedInLast7DaysAtDate:(id)a0;
- (id)extraUseDurationMapAtDate:(id)a0;
- (void)_updatePreparedDataWithDic:(id)a0 validDate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setup;

@end

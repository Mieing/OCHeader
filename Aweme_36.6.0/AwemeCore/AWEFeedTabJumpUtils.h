@interface AWEFeedTabJumpUtils : NSObject

+ (id)tabBarItemTypeToTabIDMap;
+ (id)getCurrentTimeStamp;
+ (void)postError:(id)a0 forTabId:(id)a1 withAwemeModel:(id)a2;
+ (BOOL)checkCanLandingTabWithTabID:(id)a0;
+ (BOOL)isExpiredForDay:(double)a0 timestamp:(id)a1;
+ (id)referStringToTabIDMap;
+ (id)clearExpireShowRecordWithArray:(id)a0 expireHour:(long long)a1;
+ (id)clearExpireTriggerRecordWithArray:(id)a0;
+ (BOOL)isTriggeredWithAwemeID:(id)a0 strategyID:(id)a1 timestamps:(id)a2;
+ (BOOL)isExpiredForHours:(double)a0 timestamp:(id)a1;
+ (BOOL)checkFrequencyControlForGuideViewWithStorageManager:(id)a0 withStrategyModel:(id)a1;

@end

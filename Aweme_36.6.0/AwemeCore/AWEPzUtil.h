@interface AWEPzUtil : NSObject

+ (void)trackEvent:(id)a0 withParams:(id)a1;
+ (id)getSerialQueue;
+ (double)getCurrentServerTime;
+ (double)getCurrentServerTimeDefaultLocalTime;
+ (void)markDidEnterFeedReady;
+ (void)markDidEnterForeground;
+ (void)purgeJournalIfNeed;
+ (BOOL)checkComponent:(id)a0 inScopes:(id)a1 excludedScopes:(id)a2;
+ (void)sendEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (long long)durationFromColdLaunch;
+ (long long)launchStageMask;
+ (long long)feedReadyFromLaunch;
+ (long long)firstPrefetchRecordFromLaunch;
+ (BOOL)didEnterFeedReady;
+ (long long)durationFromMediaTime:(double)a0;
+ (void)syncMeasureBlockInvoke:(id /* block */)a0 measurementHandler:(id /* block */)a1;
+ (id)getCurrentServerDateDefaultLocalDate;
+ (void)updateMemoryLevel:(long long)a0;
+ (void)syncMeasureBlockInvokeV2:(id /* block */)a0 measurementHandler:(id /* block */)a1;
+ (void)markDidFirstPrefetchRecord;
+ (void)purgeJournalWithIgnoreFC:(BOOL)a0;
+ (void)getAllDomainDBLimitCompletion:(id /* block */)a0;
+ (BOOL)checkComponent:(id)a0 inScopes:(id)a1;
+ (BOOL)checkComponent:(id)a0 inScope:(id)a1;
+ (BOOL)didFirstPrefetchRecord;
+ (BOOL)didEnterForeground;
+ (long long)memoryLevel;

@end

@interface ACCSideslipPanelListDataTrackerHelper : NSObject

+ (void)trackFetchDefaultListStart;
+ (void)trackListRenderWhenBackupWithDataCount:(unsigned long long)a0;
+ (void)trackLegacyEffectPanelListRenderEndWithError:(id)a0;
+ (void)trackListRenderEndWithTotalList:(id)a0 repository:(id)a1 rightFirstIndex:(long long)a2 firstFetchEffectShowCount:(unsigned long long)a3 materialsRequestHasUpdateLists:(BOOL)a4 isBackup:(BOOL)a5;
+ (void)trackAllListRenderEndWithTotalList:(id)a0 rightFirstIndex:(long long)a1;
+ (void)trackListRenderWhenTimeOut;
+ (void)trackPanelStageAppendWithTracker:(id)a0 isBackup:(BOOL)a1;

@end

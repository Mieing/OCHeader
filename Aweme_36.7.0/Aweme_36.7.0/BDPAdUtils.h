@interface BDPAdUtils : NSObject

+ (id)getLocalCacheWithKey:(id)a0 type:(Class)a1 sandbox:(id)a2;
+ (void)updateLocalCacheWithObject:(id)a0 key:(id)a1 sandbox:(id)a2;
+ (long long)localErrorCodeFromAdError:(id)a0;
+ (id)extraTrackerInfoForModel:(id)a0 schema:(id)a1 adUId:(id)a2;
+ (id)_dictionaryWithKey:(id)a0 value:(id)a1;
+ (id)localErrorFromAdError:(id)a0;
+ (id)extraTrackerInfoForUniqueId:(id)a0 adUId:(id)a1;
+ (id)extraPangleTrackerWithUniqueID:(id)a0 adUid:(id)a1 adSlotType:(id)a2;
+ (id)extraVideoAdTrackerWithUniqueID:(id)a0;
+ (id)localErrorCodeFromPangleAdError:(id)a0;
+ (long long)localErrorCodeFromLocalErrorCode:(long long)a0;
+ (id)preCheckForOperateAd;
+ (BOOL)shouldHandleNoti:(id)a0 withUniqueID:(id)a1;

@end

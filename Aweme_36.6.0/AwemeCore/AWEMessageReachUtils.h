@interface AWEMessageReachUtils : NSObject

+ (id)currentUid;
+ (double)getCurrentServerTime;
+ (double)getCurrentServerTimeDefaultLocalTime;
+ (id)mergeTwoBizParams:(id)a0 bizParams2:(id)a1;
+ (id)storageKeyWithUserID:(id)a0;
+ (BOOL)isOtherMode;
+ (id)messageReachPrecheckComponentKey;
+ (long long)getCurrentMediaTimeForMillisecond;
+ (id)getDescriptionStringWithUnreadModel:(id)a0;
+ (id)getBadgeComponentIDWithTabID:(id)a0;
+ (BOOL)isSelectedWithChannelID:(id)a0;
+ (id)compactMapAsLoc:(id)a0;
+ (void)stringByAppendingSymbolAndString:(id)a0 symbol:(id)a1 aString:(id)a2;
+ (id)currentDid;
+ (id)messageReachServerFrequencyGlobalKey;
+ (id)messageReachServerFrequencySourceKey;
+ (id)messageReachPitayaParamsKey;
+ (id)messageReachPrecheckScenesKey;
+ (id)messageReachColdLaunchRecoveryUIDKey;
+ (id)messageReachColdLaunchRecoveryDIDKey;
+ (id)coverParams1:(id)a0 withParams2:(id)a1;
+ (id)messageReachTemplateRecordKey;
+ (id)messageReachLastConsumeTimeKey;
+ (id)getDescriptionStringWithUpdateInfo:(id)a0;
+ (id)storageUserKey;
+ (id)getDescriptionStringWithDotDetail:(id)a0;
+ (long long)indexOfTabWithChannelID:(id)a0;
+ (id)messageReachSubscribeSuccessPopCountKey;
+ (void)checkKeyConflictsWithCommonParams:(id)a0 bizParams:(id)a1 bizID:(id)a2;
+ (id)toJsonString:(id)a0;

@end

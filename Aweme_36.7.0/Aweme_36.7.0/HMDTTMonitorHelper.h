@interface HMDTTMonitorHelper : NSObject

+ (BOOL)checkArrayDataFormat:(id)a0;
+ (BOOL)fastCheckArrayDataFormat:(id)a0;
+ (id)generateLogID;
+ (id)reportHeaderParamsWithInjectedInfo:(id)a0;
+ (id)logTypeStrForType:(long long)a0;
+ (void)registerCrashCallbackToLog;
+ (void)saveLatestLogWithServiceName:(id)a0 logType:(id)a1 appID:(id)a2;
+ (id)filterTrackerReservedKeysWithDataDict:(id)a0;
+ (BOOL)fastCheckDictionaryDataFormat:(id)a0;
+ (BOOL)checkDictionaryDataFormat:(id)a0;
+ (id)generateUploadID;

@end

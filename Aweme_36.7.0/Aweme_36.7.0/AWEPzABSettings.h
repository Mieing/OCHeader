@interface AWEPzABSettings : NSObject

+ (id)abVersion;
+ (BOOL)enablePreloadLocalDomainConfig;
+ (BOOL)enablePreloadDatabase;
+ (BOOL)enablePreloadJournal;
+ (BOOL)enableRecordCacheObjc;
+ (BOOL)enablePizzaSwiftImpl;
+ (BOOL)requestForbid;
+ (BOOL)frameForbid;
+ (id)connectChangeRequestConfig;
+ (id)recordCacheDomainConfigMap;
+ (long long)dataRequestInterval;
+ (long long)dbCleanInterval;
+ (BOOL)trackForbid;
+ (double)connectChangeRequestTimeIntervalS;
+ (BOOL)connectChangeRequestDowngradeEnable;
+ (BOOL)enableTrackComponentAction;
+ (BOOL)enableTrackParseLocalData;
+ (BOOL)enableTrackDBTrace;
+ (BOOL)strategyExecuteOrderOpt;
+ (BOOL)databaseQueryOpt;
+ (long long)verifyOnMainQueueOnly;
+ (BOOL)enableOptionalTrack;
+ (BOOL)useWCDB2;

@end

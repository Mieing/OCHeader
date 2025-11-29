@interface AWEDiscoverDFormatLogger : NSObject

@property (nonatomic) BOOL enableFormatLogger;
@property (nonatomic) BOOL enableFormatLoggerInstance;

+ (void)logInfoWithSubModule:(long long)a0 where:(id)a1 what:(id)a2 extra:(id)a3;
+ (void)logWithLevel:(long long)a0 subModule:(long long)a1 where:(id)a2 what:(id)a3 extra:(id)a4;
+ (void)logWithLevel:(long long)a0 subModule:(long long)a1 linkIDs:(id)a2 eventType:(id)a3 where:(id)a4 what:(id)a5 who:(id)a6 extra:(id)a7;
+ (void)logInfoWithSubModule:(long long)a0 where:(id)a1 what:(id)a2;
+ (void)logInfoWithSubModule:(long long)a0 what:(id)a1;
+ (void)logWarnWithSubModule:(long long)a0 where:(id)a1 what:(id)a2 extra:(id)a3;
+ (void)logWarnWithSubModule:(long long)a0 where:(id)a1 what:(id)a2;
+ (void)logWarnWithSubModule:(long long)a0 what:(id)a1;
+ (void)logErrorWithSubModule:(long long)a0 where:(id)a1 what:(id)a2 extra:(id)a3;
+ (void)logErrorWithSubModule:(long long)a0 where:(id)a1 what:(id)a2;
+ (void)logErrorWithSubModule:(long long)a0 what:(id)a1;
+ (id)sharedInstance;

- (id)p_getSubModuleName:(long long)a0;

@end

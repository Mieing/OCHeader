@interface AMapAnalyticsLogProvider : NSObject

+ (id)JSONErrorLogWithLogs:(id)a0;
+ (id)eventLogWithID:(id)a0 params:(id)a1 component:(id)a2;
+ (id)errorLogWithType:(id)a0 name:(id)a1 detail:(id)a2 component:(id)a3;
+ (id)eventLogWithLogs:(id)a0;
+ (id)logStringWithDictionary:(id)a0 encrypted:(BOOL)a1 appendComma:(BOOL)a2;
+ (id)errorLogHeader;
+ (void)decodeLogDicFromLogData:(id)a0 analysisJson:(id)a1;
+ (id)decodeLogDicFromLogData:(id)a0;

@end

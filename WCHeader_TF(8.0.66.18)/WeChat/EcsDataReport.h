@interface EcsDataReport : NSObject

+ (void)reportEcsDataWithEventId:(id)a0 eventName:(id)a1 params:(id)a2 target:(id)a3;
+ (void)reportEcsShareDataWithCardId:(id)a0 bizReportData:(id)a1 scene:(unsigned long long)a2 event:(unsigned long long)a3 target:(id)a4;
+ (void)reportEcsCardDataWithEventId:(id)a0 eventName:(id)a1 cardId:(id)a2 shareUsrName:(id)a3 bizReportData:(id)a4 scene:(unsigned long long)a5 target:(id)a6;
+ (id)eventIdForEvent:(unsigned long long)a0;

@end

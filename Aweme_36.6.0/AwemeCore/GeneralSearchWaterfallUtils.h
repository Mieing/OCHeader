@interface GeneralSearchWaterfallUtils : NSObject

+ (BOOL)hasRecordInInnerFlowBackupMap:(id)a0 searchID:(id)a1;
+ (void)appendRecordForInnerFlowBackupMap:(id)a0 searchID:(id)a1;
+ (void)appendForInnerFlowConsumeWithItemID:(id)a0 searchID:(id)a1;
+ (long long)hasRecordInInnerFlowNewBackupMap:(id)a0 searchID:(id)a1;
+ (void)trackInnerFlowDatasourceMonitor:(id)a0;
+ (void)appendRecordForInnerFlowNewBackupMap:(id)a0 searchID:(id)a1 Index:(long long)a2;
+ (void)appendRecordForInnerFlowPitayaSet:(id)a0;
+ (BOOL)hasRecordInInnerFlowPitayaSet:(id)a0;
+ (BOOL)hasConsumeItemInInnerFlowWithItemId:(id)a0 searchID:(id)a1;
+ (void)resetRecordsInInnerFlowBackupMapWithSearchID:(id)a0;
+ (void)resetRecordInInnerFlowPitayaSet;

@end

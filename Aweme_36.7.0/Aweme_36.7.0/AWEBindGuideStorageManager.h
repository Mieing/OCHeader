@interface AWEBindGuideStorageManager : NSObject

+ (id)shareManager;

- (void)recordTaskStorage:(id)a0 uid:(id)a1;
- (void)recordUidStorage:(id)a0 isRecordRedDotDismiss:(BOOL)a1;
- (void)recordRedDotShowTaskStorage:(id)a0 uid:(id)a1;
- (void)recordRedDotClickTaskStorage:(id)a0 uid:(id)a1 enterFrom:(id)a2;
- (id)storageKeyOfTaskId:(id)a0 uid:(id)a1;
- (void)logForKey:(id)a0 message:(id)a1;
- (id)storageKeyOfUid:(id)a0;
- (id)storageOfTaskId:(id)a0 uid:(id)a1;
- (id)storageOfUid:(id)a0;
- (void)recordShowTaskId:(id)a0 uid:(id)a1;
- (void)recordRedDotShowTaskId:(id)a0 uid:(id)a1;
- (void)recordRedDotClickTaskId:(id)a0 uid:(id)a1 enterFrom:(id)a2;
- (void)clearShowTaskId:(id)a0 uid:(id)a1;

@end

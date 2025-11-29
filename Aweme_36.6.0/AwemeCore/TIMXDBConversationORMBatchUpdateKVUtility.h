@class TIMXSDKInstance;

@interface TIMXDBConversationORMBatchUpdateKVUtility : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;

- (id)initWithSDKRoot:(id)a0;
- (void)updateVersionWithKey:(id)a0 version:(id)a1;
- (id)currentVersionWithKey:(id)a0;
- (id)currentBatchUpdateStatusWithKey:(id)a0;
- (void)updateStatusWithKey:(id)a0 version:(id)a1;
- (BOOL)migrateStatus;
- (void)updateMigrateStatusWithStatus:(BOOL)a0;
- (BOOL)prevBatchUpdateEnableStatus;
- (void)updatePrevBatchUpdateEnableStatus:(BOOL)a0;
- (void).cxx_destruct;

@end

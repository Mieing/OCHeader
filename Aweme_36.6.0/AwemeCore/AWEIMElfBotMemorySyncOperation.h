@interface AWEIMElfBotMemorySyncOperation : NSObject

+ (void)startAskWithContext:(id)a0;
+ (void)processSyncMessageContext:(id)a0;
+ (void)requestWithRequestContext:(id)a0 command:(id)a1 extraSyncData:(id)a2;
+ (BOOL)canContinueWithContext:(id)a0 dataModel:(id)a1 command:(id)a2;
+ (void)processSyncMessageContext:(id)a0 command:(id)a1 commands:(id)a2;
+ (void)processSyncMessageAskWithContext:(id)a0 command:(id)a1;
+ (void)processSyncMessageSyncWithContext:(id)a0 command:(id)a1 commands:(id)a2;
+ (void)processSyncMessageAckWithContext:(id)a0 command:(id)a1;
+ (BOOL)shouldContinueAndUpdateDataWithContext:(id)a0 command:(id)a1;
+ (void)sendNextStepWithContext:(id)a0 command:(id)a1 extraSyncData:(id)a2;
+ (long long)maxTimestampWithSyncDataModel:(id)a0;
+ (void)savePeerDeviceTimestampContext:(id)a0;
+ (void)refreshLocalDataWithConversation:(id)a0;
+ (void)refreshLocalDeleteDataWithConversation:(id)a0;
+ (id)syncDataDictionaryWithRequestContext:(id)a0;
+ (id)requestModelWithRequestContext:(id)a0;

@end

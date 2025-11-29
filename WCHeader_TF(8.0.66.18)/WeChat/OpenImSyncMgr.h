@interface OpenImSyncMgr : NSObject <INewSyncPluginExt>

- (id)initWithRegister;
- (void)NotifyCheckSelector;
- (void)NotifyCmd:(id)a0;
- (id)handleModOpenIMChatRoomContact:(id)a0;
- (id)HandleModOpenIMChatRoomMemberContact:(id)a0;

@end

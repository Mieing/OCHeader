@interface IESIMGroupImpl.GroupPushCoordinator : HTSService <IESIMGroupPushCoordinatorProtocol, IESIMConversationLifeCyleMessage, IESIMUserServiceMessage> {
    void /* unknown type, empty encoding */ publicController;
    void /* unknown type, empty encoding */ enable;
    void /* unknown type, empty encoding */ resetHistoryEnable;
}

- (BOOL)enableShowLastestMessagePushWithConversation:(id)a0;
- (void)didShowLastestMessagePushWithConversation:(id)a0;
- (void)messageVCDidAppearWithConversation:(id)a0 trackSessionID:(id)a1;
- (void)didFinishLoginWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

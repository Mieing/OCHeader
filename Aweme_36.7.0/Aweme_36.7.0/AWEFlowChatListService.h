@interface AWEFlowChatListService : NSObject <FlowIMX.FlowIMConversationServiceDelegate, IESIMChatListBizCellInfoProtocol> {
    void /* unknown type, empty encoding */ currentServiceModel;
}

- (void)conversationLastMessageChanged:(id)a0;
- (void)conversationInfosChanged:(id)a0;
- (id)sessionIDList;
- (void)stickOnTopStateDidChange:(BOOL)a0 reason:(unsigned long long)a1;
- (BOOL)shouldStickOnTopByDefault;
- (void)flowAccessStateChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)businessID;
- (void)dealloc;

@end

@interface AWEIMGrowthImpl.StreakFakeTrigger : NSObject <IESIMChatDataManagerDelegate, AWEIMVoipFinishMessage, IESIMMessageSenderDelegate> {
    void /* unknown type, empty encoding */ kAWEIMStreakFakeMessageDidHandle;
    void /* unknown type, empty encoding */ kIESIMSendMsgServerTimeKey;
    void /* unknown type, empty encoding */ kIESIMCommandMsgStartType;
    void /* unknown type, empty encoding */ kIESIMMsgExtRelationTypeKey;
    void /* unknown type, empty encoding */ kIESIMMsgExtVisibleKey;
    void /* unknown type, empty encoding */ kIESIMMsgExtInvisibleKey;
    void /* unknown type, empty encoding */ specialMessageMockUid;
    void /* unknown type, empty encoding */ specialMessageMockOtherUid;
    void /* unknown type, empty encoding */ messageTypeBlackList;
    void /* unknown type, empty encoding */ messageTypeSpecialList;
    void /* unknown type, empty encoding */ messageExtDisallowRules;
    void /* unknown type, empty encoding */ chatRecordLock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)iesim_onConversationDataSourceMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)handleVoipFinishMessage:(id)a0 withConversationID:(id)a1 timestamp:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

@class NSString;

@interface IESIMGroupAssistantMessageListComponent : AWEIMComponentBase <IESIMGroupAssistantMessageListProtocol, AWEIMConversationInfoOtherSubscriberProtocol, IESIMMessageEmoticonReplyMessage> {
    void /* function */ groupAssistantSecUid;
    void /* unknown type, empty encoding */ _groupAssistantUid;
}

@property (nonatomic, copy) NSString *groupAssistantSecUid;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (BOOL)isMentionGroupAssistantForMessage:(id)a0 context:(id)a1;
- (id)mentionGroupAssistantExtraParamsForMessage:(id)a0 context:(id)a1;
- (void)didAddEmoticonReplyWithKey:(id)a0 toMessage:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

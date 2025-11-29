@class AWEIMMessage;

@interface IESIMGroupAssistantSugResolveComponent : AWEIMComponentBase <AWEIMMessageListDataAction, IESIMGroupAssistantSugResolveInterface> {
    void /* unknown type, empty encoding */ latestMsgComp;
}

@property (nonatomic, retain) AWEIMMessage *targetMessage;
@property (nonatomic) long long minShowSugMsgIndex;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end

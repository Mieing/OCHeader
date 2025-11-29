@interface IESIMGroupAssistantEnterChatComponent : AWEIMComponentBase <IESIMGroupMessageListEnterChatSubscriber> {
    void /* unknown type, empty encoding */ botInfo;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)groupEnterChatParamsForScene:(long long)a0;
- (void)updateGroupEnterScene:(long long)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end

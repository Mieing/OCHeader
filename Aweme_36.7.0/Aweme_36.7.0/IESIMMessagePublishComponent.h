@interface IESIMMessagePublishComponent : AWEIMComponentBase <AWEIMMessageConversationDelegate, AWEIMGroupImpl.IESIMMessagePublishComponentProtocol, IESIMLoadingToastDelegate> {
    void /* unknown type, empty encoding */ fetchState;
    void /* unknown type, empty encoding */ completionAction;
    void /* unknown type, empty encoding */ firstFrameOpt;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loading;
    void /* unknown type, empty encoding */ loadingDelayTimer;
}

- (void)loadingToastDidClosed:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)participantsDidUpdate;
- (void)showOnboardingPageIfNeededOn:(id)a0 entranceFrom:(id)a1 next:(id /* block */)a2;
- (void)longPressMessageBubble;
- (void)resetChatMultiSelectState;
- (void).cxx_destruct;
- (id)init;

@end

@interface IESIMConversationSwiftImpl.ConversationDeleteMessageAfterDisplayComponent : AWEIMComponentBase <IESIMConversationDeleteMessageAfterDisplayInterface, AWEIMMessageTableViewAction> {
    void /* unknown type, empty encoding */ messagesLocal;
    void /* unknown type, empty encoding */ messagesRemote;
    void /* unknown type, empty encoding */ messageListDataService;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tryToAddWaitDeleteListWithMessage:(id)a0;
- (void)tryToRemoveWaitDeleteListWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;

@end

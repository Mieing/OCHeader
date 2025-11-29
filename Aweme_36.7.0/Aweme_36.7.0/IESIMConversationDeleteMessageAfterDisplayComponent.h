@class NSString, NSMutableSet;
@protocol AWEIMMessageListDataInterface;

@interface IESIMConversationDeleteMessageAfterDisplayComponent : AWEIMComponentBase <AWEIMMessageTableViewAction, IESIMConversationDeleteMessageAfterDisplayInterface>

@property (retain, nonatomic) NSMutableSet *messagesForDeleteAfterDisplayLocal;
@property (retain, nonatomic) NSMutableSet *messagesForDeleteAfterDisplayRemote;
@property (weak, nonatomic) id<AWEIMMessageListDataInterface> messageListDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)tryToAddWaitDeleteListWithMessage:(id)a0;
- (void)tryToRemoveWaitDeleteListWithMessage:(id)a0;
- (void)p_handleApplicationWillTerminationNty:(id)a0;
- (void)p_deleteMessages;
- (long long)p_deleteMessageMaxCount;
- (void)p_deleteMessagesWithMessages:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;

@end

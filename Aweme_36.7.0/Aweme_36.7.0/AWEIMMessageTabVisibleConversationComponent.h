@class NSString;
@protocol AWEIMChatListInterface;

@interface AWEIMMessageTabVisibleConversationComponent : AWEIMComponentBase <AWEIMMessageTabVisibleConversationInterface>

@property (weak, nonatomic) id<AWEIMChatListInterface> chatListService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)orderedVisibleChatModelsArray;
- (id)orderedVisibleChatViewModelsArray;
- (BOOL)p_cellIsVisiable:(id)a0;
- (void).cxx_destruct;
- (id)visibleConversations;

@end

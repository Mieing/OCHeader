@class AWEIMComponentManager, NSArray, NSDictionary, NSString, AWEIMUnreadMessagesConsumerCache, NSObject;
@protocol OS_dispatch_queue, AWEIMChatListHintProviderUpdateHintInterface;

@interface AWEIMUnreadMessagesConsumerManager : AWEIMComponentBase <IESIMChatDataManagerDelegate, AWEUserMessage, AWEIMChatListHintProviderCellEventObserver, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMUnreadMessagesConsumerDelegate>

@property (copy, nonatomic) NSArray *consumers;
@property (copy, nonatomic) NSDictionary *keyToConsumer;
@property (copy) NSArray *onlineUnreadMessagesConsumers;
@property (copy) NSDictionary *keyToOnlineUnreadMessagesConsumer;
@property (retain, nonatomic) AWEIMUnreadMessagesConsumerCache *unreadInfoCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue;
@property (weak, nonatomic) id<AWEIMChatListHintProviderUpdateHintInterface> updateHintInterface;
@property (nonatomic) BOOL disableConsumtionOnUpdatedMessages;
@property (nonatomic) BOOL revertCheckCidIsEmpty;
@property (nonatomic) BOOL shouldHintClearOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)__queriedStatusFlagKey;
+ (BOOL)enableOnlineUnreadMessagesConsumerBySetting;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)iesim_onConversationDataSourceMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void)iesim_onConversationDataSourceMessagesUpdated:(id)a0 belongingConversationMap:(id)a1;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)updateStrangerConversationCellWhenStrangerChatUpdate:(id)a0;
- (void)asyncUpdateHintVMWithChatModel:(id)a0;
- (void)setObject:(id)a0 forConversationId:(id)a1 filterOption:(id)a2 cacheName:(id)a3;
- (id)objectForConversationId:(id)a0 filterOption:(id)a1 cacheName:(id)a2;
- (id)objectForConversationId:(id)a0 key:(id)a1;
- (void)setObject:(id)a0 forConversationId:(id)a1 key:(id)a2;
- (void)__setup;
- (void)appendOnlineUnreadMessagesConsumer:(id)a0;
- (id)consumerHandleQueue;
- (void)consumerRequestUpdateHint:(id)a0 newHint:(id)a1 forConversationID:(id)a2;
- (id)consumerKeyToFilterOptionsWithChat:(id)a0;
- (id)requestSetFromConsumerKeyToFilterOptionsDict:(id)a0;
- (id)__customConversationIdFromFilterOptions:(id)a0;
- (id)unqueriedTypeToFilterOptionsFromRequestSet:(id)a0 withConversationId:(id)a1;
- (void)__querySenderIdWithConversationId:(id)a0 filterOption:(id)a1 filterOptionToMessagesDict:(id)a2 completion:(id /* block */)a3;
- (void)__queryMessageTypesWithConversationId:(id)a0 filterOptionSet:(id)a1 filterOptionToMessagesDict:(id)a2 completion:(id /* block */)a3;
- (void)__queryHintTypeWithConversationId:(id)a0 filterOptionSet:(id)a1 filterOptionToMessagesDict:(id)a2 completion:(id /* block */)a3;
- (void)__queryHintTypeCollectionWithConversationId:(id)a0 filterOptionSet:(id)a1 filterOptionToMessagesDict:(id)a2 completion:(id /* block */)a3;
- (void)notifyConsumersWithConsumerKeyToFilterOptionsDict:(id)a0 filterOptionToMessagesDict:(id)a1 conversationId:(id)a2;
- (void)__updateHintWithConsumerKeyToFilterOptionsDict:(id)a0 conversation:(id)a1 strangerConversation:(id)a2 chatSessionId:(id)a3;
- (BOOL)__hasQueriedForConversationId:(id)a0 filterOption:(id)a1;
- (id)filterOptionToMessagesDictWithConsumerKey:(id)a0 consumerKeyToFilterOptionsDict:(id)a1 filterOptionToMessagesDict:(id)a2;
- (id)__getHintModelsForConversation:(id)a0 strangerConversation:(id)a1 consumerKeyToFilterOptionsDict:(id)a2;
- (void)__updateCellComponentWithHint:(id)a0 conversationId:(id)a1;
- (void)__handleDBMessages:(id)a0 withConversationId:(id)a1 filterOptionType:(long long)a2 reqestedfilterOptions:(id)a3 filterOptionToMessagesDict:(id)a4 completion:(id /* block */)a5;
- (void)__batchHandleDBDictMessages:(id)a0 withConversationId:(id)a1 filterOptionType:(long long)a2 reqestedfilterOptions:(id)a3 filterOptionToMessagesDict:(id)a4 completion:(id /* block */)a5;
- (void)__handleDBMessagesDict:(id)a0 withConversationId:(id)a1 filterOptionType:(long long)a2 reqestedfilterOptions:(id)a3 filterOptionToMessagesDict:(id)a4 completion:(id /* block */)a5;
- (void)__flagQueriedStatusForConversationId:(id)a0 filterOption:(id)a1;
- (id)__filterOptionToMessagesDictFromMessages:(id)a0 withFilterOptionType:(long long)a1;
- (void)__clearUnreadMessagesCacheForConversationId:(id)a0;
- (void)__clearAllUnreadMessageConsumerHintsForConversationId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

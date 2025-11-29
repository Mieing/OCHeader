@class TIMXOStrangerConversationDataSource, NSString, TIMXSDKInstance, NSHashTable;

@interface IESIMStrangerChatDataManager : NSObject <TIMXOStrangerConversationDataSourceDelegate, IESIMTIMXLifeMessage, IESIMStrangerChatDataManagerProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (retain) TIMXOStrangerConversationDataSource *dataSource;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)removeStrangerChat:(id)a0 completion:(id /* block */)a1;
- (void)markConversationAsRead:(id)a0 completion:(id /* block */)a1;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (void)p_clearPropertyOfSDK;
- (void)fetchStrangerChatListWithBizInfo:(id)a0 completion:(id /* block */)a1;
- (void)loadRemedialyStrangerConversationsWithBizInfo:(id)a0 completion:(id /* block */)a1;
- (void)fetchMessagesInConversation:(id)a0 completion:(id /* block */)a1;
- (void)deleteMessage:(long long)a0 inConversation:(id)a1 sendToServer:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteMessageNew:(id)a0 inConversation:(id)a1 sendToServer:(BOOL)a2 completion:(id /* block */)a3;
- (void)strangerConversationCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (void)strangerMessageCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (id)getFetcher;
- (void)strangerConversationDataSourceDidUpdate:(id)a0 updateConversationIdentifiers:(id)a1 reason:(long long)a2;
- (void)fetchStrangerChatListWithCompletion:(id /* block */)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)unreadCount;
- (void)dealloc;

@end

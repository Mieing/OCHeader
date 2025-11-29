@class BDECPigeonMessageDataSourceOptions, BDECPigeonClientV2, NSArray, BDECPigeonMultiDelegate, NSString;
@protocol BDECPigeonConversationInterface, BDECPigeonMessageDataSourceDelegate;

@interface BDECPigeonNetworkMessageDataSource : NSObject <BDECPigeonChannelDelegate, BDECPigeonMessageDataSourceInterface>

@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) id<BDECPigeonConversationInterface> conversation;
@property (retain, nonatomic) BDECPigeonMessageDataSourceOptions *options;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL hasOlderMessages;
@property (copy) NSArray *data;
@property (retain, nonatomic) BDECPigeonMultiDelegate<BDECPigeonMessageDataSourceDelegate> *multiDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasNewerMessages;
@property (nonatomic) BOOL descendOrder;

- (void)loadHistoryMessagesWithCompletion:(id /* block */)a0;
- (void)channel:(id)a0 notifyDidInsertNewMessages:(long long)a1 messages:(id)a2 belongingConversationMap:(id)a3;
- (void)channel:(id)a0 onMessageUpdated:(id)a1 conversation:(id)a2;
- (void)channel:(id)a0 onMessageReadUpdatedWithConversationIdList:(id)a1;
- (id)initWithConversation:(id)a0 client:(id)a1 options:(id)a2;
- (void)loadHistoryMessagesWithNeedMessageCount:(long long)a0 retryCount:(long long)a1 currentMessageArr:(id)a2 completion:(id /* block */)a3;
- (void)insertMessagesToListWithMessages:(id)a0 completion:(id /* block */)a1;
- (void)generatePigeonMessageArrWithRawDataArr:(id)a0 callback:(id /* block */)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

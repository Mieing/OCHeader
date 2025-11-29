@class NSArray, NSString;
@protocol BDECPigeonChannelInterface, BDECPigeonMessageDataSourceInterface;

@interface AWEECOMIMPaasMessagesInConversationDataSourceBridgeNew : NSObject <BDECPigeonChannelDelegate, BDECPigeonMessageDataSourceDelegate, AWEECOMIMPaasMessagesInConversationDataSourceBridgeProtocol>

@property (retain, nonatomic) id<BDECPigeonMessageDataSourceInterface> messageDataSource;
@property (retain, nonatomic) id<BDECPigeonChannelInterface> channel;
@property (copy, nonatomic) NSArray *getMessageCallbackBlockArrays;
@property (copy) NSArray *preMessageIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMoreHistoryMessages;
@property (readonly, nonatomic) BOOL hasMoreNewMessages;
@property (copy, nonatomic) id /* block */ messagesDataSourceUpdateCallback;
@property (copy, nonatomic) id /* block */ messagesDataSourceDeleteCallback;
@property (copy, nonatomic) id /* block */ messagesDataSourceInsertCallback;
@property (copy, nonatomic) id /* block */ conversationUpdateCallback;
@property (copy, nonatomic) id /* block */ messagesDataSourceReadUpdateCallback;

+ (id)initWithInitialLocationLatestMessageForBizConversationID:(id)a0 options:(id)a1 belongClient:(id)a2;

- (void)loadHistoryMessagesWithCompletion:(id /* block */)a0;
- (void)loadMsgsWithIndexV2:(long long)a0 direction:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)loadOlderCompletion:(id /* block */)a0;
- (void)loadNewerCompletion:(id /* block */)a0;
- (void)channel:(id)a0 onConversationUpdated:(id)a1;
- (void)channel:(id)a0 notifyDidInsertNewMessages:(long long)a1 messages:(id)a2 belongingConversationMap:(id)a3;
- (void)loadHistoryMessagesWithCurrentNewMessages:(id)a0 completion:(id /* block */)a1;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1;
- (void)messageDataSource:(id)a0 onMessageUpdate:(id)a1;
- (void)messageDataSourceOnReadMessageChanged:(id)a0;
- (id)initWithDataSource:(id)a0 channel:(id)a1;
- (void).cxx_destruct;

@end

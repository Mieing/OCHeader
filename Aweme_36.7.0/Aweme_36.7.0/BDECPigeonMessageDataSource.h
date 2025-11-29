@class BDECPigeonMessageDataSourceOptions, BDECPigeonClientV2, NSArray, NSDictionary, BDECPigeonMultiDelegate, NSString;
@protocol BDECIMCloudMessagesInConversationDataSourceV2Interface, BDECPigeonConversationInterface, BDECPigeonMessageDataSourceDelegate;

@interface BDECPigeonMessageDataSource : NSObject <BDECPigeonChannelDelegate, BDECIMCloudMessagesInConversationDataSourceV2Delegate, BDECPigeonMessageDataSourceInterface>

@property (retain, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceV2Interface> dataSource;
@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) id<BDECPigeonConversationInterface> conversation;
@property (retain, nonatomic) BDECPigeonMessageDataSourceOptions *options;
@property (copy) NSArray *data;
@property (copy) NSDictionary *dataMap;
@property (retain, nonatomic) BDECPigeonMultiDelegate<BDECPigeonMessageDataSourceDelegate> *multiDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (readonly, nonatomic) BOOL hasNewerMessages;
@property (nonatomic) BOOL descendOrder;

- (void)loadHistoryMessagesWithCompletion:(id /* block */)a0;
- (void)loadMsgsWithIndexV2:(long long)a0 direction:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)loadOlderCompletion:(id /* block */)a0;
- (void)loadNewerCompletion:(id /* block */)a0;
- (void)channel:(id)a0 onMessageUpdated:(id)a1 conversation:(id)a2;
- (void)channel:(id)a0 onMessageReadUpdatedWithConversationIdList:(id)a1;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1 completion:(id /* block */)a2;
- (id)messageWithId:(id)a0;
- (id)initWithConversation:(id)a0 client:(id)a1 options:(id)a2;
- (long long)needMessageCount;
- (void)loadHistoryMessagesWithNeedMessageCount:(long long)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)loadHistoryMessagesWithDirection:(unsigned long long)a0 indexV2:(long long)a1 needMessageCount:(long long)a2 retryCount:(long long)a3 completion:(id /* block */)a4;
- (void)trackLoadHistoryStartTime:(long long)a0 isFirstPage:(BOOL)a1 previousCount:(unsigned long long)a2 success:(BOOL)a3 error:(id)a4;
- (BOOL)p_shouldHideMessage:(id)a0;
- (void)trackMessageUpdateStartTime:(long long)a0 reason:(long long)a1 previousCount:(unsigned long long)a2 updateCount:(unsigned long long)a3;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

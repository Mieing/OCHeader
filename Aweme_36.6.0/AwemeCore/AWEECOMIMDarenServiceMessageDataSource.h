@class NSString, NSArray, NSObject, BDECPigeonClientConfigV2;
@protocol BDECIMCloudMessagesInConversationDataSourceV2Interface, OS_dispatch_queue;

@interface AWEECOMIMDarenServiceMessageDataSource : NSObject <BDECIMCloudMessagesInConversationDataSourceV2Delegate>

@property (retain, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceV2Interface> messageDataSource;
@property (retain, nonatomic) BDECPigeonClientConfigV2 *clientConfig;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageDataQueue;
@property (copy) NSArray *preMessageIds;
@property (nonatomic) unsigned long long messageCountPerPage;
@property (nonatomic) BOOL firstLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadHistoryMessagesWithCompletion:(id /* block */)a0;
- (BOOL)hasOlderMessages;
- (id)initWithBizConversationID:(id)a0 options:(id)a1 belongeClientConfig:(id)a2;
- (void)loadHistoryMessagesWithCurrentNewMessages:(id)a0 completion:(id /* block */)a1;
- (void)messageLoadProcessWithCurrentNewMessages:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

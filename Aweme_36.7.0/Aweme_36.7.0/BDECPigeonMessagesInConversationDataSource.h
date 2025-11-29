@class NSString, NSArray, BDECIMClient, NSObject, BDECIMMessagesInConversationDataSource;
@protocol OS_dispatch_queue;

@interface BDECPigeonMessagesInConversationDataSource : NSObject

@property (retain, nonatomic) BDECIMMessagesInConversationDataSource *messagesDataSource;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *bizConversationId;
@property (nonatomic) int inbox;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageDataQueue;
@property (copy) NSArray *preMessageIds;
@property (nonatomic) unsigned long long messageCountPerPage;
@property (nonatomic) BOOL firstLoad;
@property (retain, nonatomic) BDECIMClient *client;
@property (readonly, nonatomic) BOOL hasMoreHistoryMessages;
@property (copy, nonatomic) id /* block */ messagesDataSourceUpdateCallback;
@property (copy, nonatomic) id /* block */ messagesDataSourceInsertCallback;
@property (copy, nonatomic) id /* block */ conversationUpdateCallback;
@property (copy, nonatomic) id /* block */ conversationDissolvedCallback;
@property (copy, nonatomic) id /* block */ messagesDataSourceReadUpdateCallback;
@property (copy, nonatomic) id /* block */ readMessageChangeCallback;

+ (id)initWithInitialLocationLatestMessageForBizConversationID:(id)a0 options:(id)a1;
+ (id)initWithInitialLocationLatestMessageForBizConversationID:(id)a0 options:(id)a1 belongeClient:(id)a2;

- (void)loadHistoryMessagesWithCompletion:(id /* block */)a0;
- (void)loadHistoryMessagesWithCurrentNewMessages:(id)a0 completion:(id /* block */)a1;
- (void)messageLoadProcessWithCurrentNewMessages:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)onReceiveIMConversationUpdate:(id)a0;
- (void)onReceiveIMConversationDissolved:(id)a0;
- (void)didInsertNewMessageNotification:(id)a0;
- (void)onReceiveMessageUpdate:(id)a0;
- (BOOL)shouldLoadMoreHistoryDataWithCurCount:(unsigned long long)a0;
- (void)onReceiveMessageDataSourceUpdated:(id)a0 afterUpdateMessageIdentifiers:(id)a1 reason:(long long)a2;
- (void)onPigeonReadMessageDidUpdate:(id)a0;
- (id)initWithBizConversationID:(id)a0 options:(id)a1 belongeClient:(id)a2;
- (void).cxx_destruct;

@end

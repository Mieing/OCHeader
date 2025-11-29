@class NSString, NSMutableDictionary, NSArray;
@protocol BDECPigeonChannelConversationDataSourceInterface;

@interface BDECPigeonBCChannel : BDECPigeonChannel <BDECPigeonClientDelegate, BDECPigeonSingleConversationChannelInterface>

@property BOOL isFetchingBigMessageReads;
@property (retain) NSMutableDictionary *sendingMsgDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *bizType;
@property (readonly, copy, nonatomic) NSArray *inboxes;
@property (readonly, nonatomic) unsigned long long communicateType;
@property (readonly) id<BDECPigeonChannelConversationDataSourceInterface> dataSource;

+ (id)channelWithBizType:(id)a0 inboxes:(id)a1 communicateType:(unsigned long long)a2 client:(id)a3;

- (id)conversationWithId:(id)a0;
- (void)client:(id)a0 onLongConnectionStateChanged:(unsigned long long)a1;
- (void)fetchMessageReadsWithPigeonConversations:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCurrentUserConvWithConversationID:(id)a0;
- (id)conversationWithInner:(id)a0;
- (id)buildReqModelsWithConversations:(id)a0;
- (void)p_handleFetchMessageReadsWithReqListModel:(id)a0;
- (void)onMessageSendResponse:(id)a0 message:(id)a1 messageIdentifier:(id)a2 conversation:(id)a3 error:(id)a4;
- (void)conversationDidSendMessageWithMessageID:(id)a0 sendMessage:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

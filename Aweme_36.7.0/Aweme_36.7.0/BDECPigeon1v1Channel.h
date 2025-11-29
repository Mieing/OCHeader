@class NSString, NSMutableDictionary, NSArray;
@protocol BDECPigeonChannelConversationDataSourceInterface;

@interface BDECPigeon1v1Channel : BDECPigeonChannel <BDECPigeonClientDelegate, BDECPigeonSingleConversationChannelInterface>

@property (retain) NSMutableDictionary *readIndexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *bizType;
@property (readonly, copy, nonatomic) NSArray *inboxes;
@property (readonly, nonatomic) unsigned long long communicateType;
@property (readonly) id<BDECPigeonChannelConversationDataSourceInterface> dataSource;

+ (id)channelWithBizType:(id)a0 inboxes:(id)a1 communicateType:(unsigned long long)a2 client:(id)a3;

- (void)client:(id)a0 onWSMessageReceive:(long long)a1 info:(id)a2;
- (void)fetchMessageReadsWithPigeonConversations:(id)a0 completion:(id /* block */)a1;
- (long long)indexOfReadForConversationId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

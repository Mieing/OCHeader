@class NSString, NSArray;
@protocol BDECPigeonChannelConversationDataSourceInterface;

@interface BDECPigeonGroupChannel : BDECPigeonChannel <BDECPigeonClientDelegate, BDECPigeonGroupConversationChannelInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *bizType;
@property (readonly, copy, nonatomic) NSArray *inboxes;
@property (readonly, nonatomic) unsigned long long communicateType;
@property (readonly) id<BDECPigeonChannelConversationDataSourceInterface> dataSource;

+ (id)channelWithBizType:(id)a0 inboxes:(id)a1 communicateType:(unsigned long long)a2 client:(id)a3;
+ (Class)conversationClass;

- (void)client:(id)a0 onLongConnectionStateChanged:(unsigned long long)a1;
- (void)fetchMessageReadsWithPigeonConversations:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end

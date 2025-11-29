@class TIMXECOMSubConversation, NSString, NSDictionary, BDECIMClientConfig, NSArray;

@interface BDECIMCloudSubConversation : NSObject <BDECIMCloudSubConversationInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXECOMSubConversation *timxSubConversation;
@property (readonly) long long subConversationShortID;
@property (readonly) int status;
@property (readonly, copy) NSString *bizStatus;
@property (readonly, copy) NSDictionary *extra;
@property (readonly) long long createTime;
@property (readonly, copy) NSArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 config:(id)a1;
- (long long)getCurrentServerIDFromSubConversation;
- (void).cxx_destruct;

@end

@class TIMXECOMSubConversation, NSString, NSDictionary, NSArray, BDECPigeonClientConfigV2;

@interface BDECIMCloudSubConversationV2 : NSObject <BDECIMCloudSubConversationV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXECOMSubConversation *timxSubConversation;
@property (readonly, copy) NSString *subConversationIdentifier;
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

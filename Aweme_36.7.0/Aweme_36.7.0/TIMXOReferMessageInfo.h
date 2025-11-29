@class NSString;

@interface TIMXOReferMessageInfo : MTLModel <TIMXReferMessageInfoProtocol>

@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long messageType;
@property (copy) NSString *hint;
@property long long status;
@property (nonatomic) long long rootMessageServerID;
@property (nonatomic) long long rootMessageConversationIndex;
@property (nonatomic) long long refMsgIndexInConvV1;
@property (nonatomic) long long refMsgIndexInConvV2;
@property (nonatomic) int refMsgInvisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithJsonString:(id)a0;
+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toDictionary;

@end

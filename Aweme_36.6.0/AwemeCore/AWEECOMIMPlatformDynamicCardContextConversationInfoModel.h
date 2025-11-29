@class NSString;

@interface AWEECOMIMPlatformDynamicCardContextConversationInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shortConversationId;
@property (copy, nonatomic) NSString *talkId;
@property (copy, nonatomic) NSString *talkStatus;
@property (copy, nonatomic) NSString *isClosed;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *curUid;
@property (copy, nonatomic) NSString *otherId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

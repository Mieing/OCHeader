@class NSString;

@interface AWEECOMIMPlatformDynamicCardContextMessageInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *serverMessageId;
@property (copy, nonatomic) NSString *clientMessageId;
@property (copy, nonatomic) NSString *senderRole;
@property (copy, nonatomic) NSString *toUid;
@property (copy, nonatomic) NSString *fromUid;
@property (copy, nonatomic) NSString *isSender;
@property (copy, nonatomic) NSString *messageTalkId;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *messageUUId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

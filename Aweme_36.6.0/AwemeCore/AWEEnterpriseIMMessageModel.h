@class NSString;

@interface AWEEnterpriseIMMessageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *secFromUid;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *convShortId;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *serverMessageId;
@property (nonatomic) long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

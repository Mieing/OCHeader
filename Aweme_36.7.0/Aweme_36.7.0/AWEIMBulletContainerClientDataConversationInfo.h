@class NSString;

@interface AWEIMBulletContainerClientDataConversationInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *conversationShortID;
@property (nonatomic) unsigned long long chatType;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *groupOwnerType;
@property (copy, nonatomic) NSString *privateType;
@property (copy, nonatomic) NSString *curUID;
@property (copy, nonatomic) NSString *otherUID;
@property (copy, nonatomic) NSString *ownerUid;
@property (nonatomic) BOOL groupIsInvalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configDataWithIESConversation:(id)a0;
- (void)configDataWithConversation:(id)a0;
- (void).cxx_destruct;

@end

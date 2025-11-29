@class NSString, NSMutableDictionary, TIMXPBNMessageBody;

@interface BDECIMCloudMessageBody : NSObject <BDECIMCloudMessageBodyInterface>

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) long long indexInConversation;
@property (nonatomic) BOOL hasIndexInConversation;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) long long sender;
@property (nonatomic) BOOL hasSender;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (nonatomic) unsigned long long ext_Count;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long orderInConversation;
@property (nonatomic) BOOL hasOrderInConversation;
@property (copy, nonatomic) NSString *secSender;
@property (nonatomic) BOOL hasSecSender;
@property (nonatomic) unsigned long long propertyList_Count;
@property (retain, nonatomic) NSMutableDictionary *userProfile;
@property (nonatomic) unsigned long long userProfile_Count;
@property (nonatomic) long long indexInConversationV2;
@property (nonatomic) BOOL hasIndexInConversationV2;
@property (nonatomic) BOOL hasReferenceInfo;
@property (nonatomic) long long indexInConversationV1;
@property (nonatomic) BOOL hasIndexInConversationV1;
@property (nonatomic) long long subConversationShortId;
@property (nonatomic) BOOL hasSubConversationShortId;
@property (retain, nonatomic) TIMXPBNMessageBody *innerTIMXMsgBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInnerMsgBody:(id)a0;
- (void).cxx_destruct;

@end

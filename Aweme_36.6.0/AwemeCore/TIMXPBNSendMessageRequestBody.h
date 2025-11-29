@class NSString, NSMutableDictionary, TIMXPBNReferencedMessageInfo, GPBInt64Array, NSData;

@interface TIMXPBNSendMessageRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL hasTicket;
@property (copy, nonatomic) NSString *clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (retain, nonatomic) GPBInt64Array *mentionedUsersArray;
@property (readonly, nonatomic) unsigned long long mentionedUsersArray_Count;
@property (nonatomic) BOOL ignoreBadgeCount;
@property (nonatomic) BOOL hasIgnoreBadgeCount;
@property (retain, nonatomic) TIMXPBNReferencedMessageInfo *refMsgInfo;
@property (nonatomic) BOOL hasRefMsgInfo;
@property (retain, nonatomic) NSMutableDictionary *clientExt;
@property (readonly, nonatomic) unsigned long long clientExt_Count;
@property (copy, nonatomic) NSString *unuseField1;
@property (nonatomic) BOOL hasUnuseField1;
@property (nonatomic) long long subConversationShortId;
@property (nonatomic) BOOL hasSubConversationShortId;
@property (nonatomic) long long serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) long long parentConvShortId;
@property (nonatomic) BOOL hasParentConvShortId;
@property (nonatomic) long long rootMessageId;
@property (nonatomic) BOOL hasRootMessageId;
@property (copy, nonatomic) NSString *rootClientMessageId;
@property (nonatomic) BOOL hasRootClientMessageId;
@property (retain, nonatomic) NSMutableDictionary *properties;
@property (readonly, nonatomic) unsigned long long properties_Count;
@property (nonatomic) BOOL orderedMessage;
@property (nonatomic) BOOL hasOrderedMessage;
@property (copy, nonatomic) NSData *aiChatContext;
@property (nonatomic) BOOL hasAiChatContext;
@property (nonatomic) long long toUserId;
@property (nonatomic) BOOL hasToUserId;

+ (id)descriptor;

@end

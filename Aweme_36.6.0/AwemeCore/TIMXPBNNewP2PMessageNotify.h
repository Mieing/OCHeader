@class NSString, NSMutableDictionary, TIMXPBNMsgTrace;

@interface TIMXPBNNewP2PMessageNotify : GPBMessage

@property (nonatomic) int sendType;
@property (nonatomic) BOOL hasSendType;
@property (nonatomic) long long sender;
@property (nonatomic) BOOL hasSender;
@property (copy, nonatomic) NSString *secSender;
@property (nonatomic) BOOL hasSecSender;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (retain, nonatomic) TIMXPBNMsgTrace *trace;
@property (nonatomic) BOOL hasTrace;
@property (copy, nonatomic) NSString *sendTimeSource;
@property (nonatomic) BOOL hasSendTimeSource;
@property (copy, nonatomic) NSString *clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;

+ (id)descriptor;

@end

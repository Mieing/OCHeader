@class NSString, NSMutableDictionary;

@interface TIMXPBNCSBMessage : GPBMessage

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
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) long long msgCreateTime;
@property (nonatomic) BOOL hasMsgCreateTime;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

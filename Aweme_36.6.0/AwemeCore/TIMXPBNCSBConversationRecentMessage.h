@class TIMXPBNCSBConversationInfo, TIMXPBNCSBMessage;

@interface TIMXPBNCSBConversationRecentMessage : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) TIMXPBNCSBMessage *message;
@property (nonatomic) BOOL hasMessage;
@property (retain, nonatomic) TIMXPBNCSBConversationInfo *conversationInfo;
@property (nonatomic) BOOL hasConversationInfo;

+ (id)descriptor;

@end

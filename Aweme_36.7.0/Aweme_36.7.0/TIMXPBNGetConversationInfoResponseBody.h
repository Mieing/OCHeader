@class TIMXPBNConversationInfo;

@interface TIMXPBNGetConversationInfoResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNConversationInfo *conversationInfo;
@property (nonatomic) BOOL hasConversationInfo;

+ (id)descriptor;

@end

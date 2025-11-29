@class TIMXPBNConversationCoreInfo;

@interface TIMXPBNGetConversationCoreInfoResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNConversationCoreInfo *conversationCoreInfo;
@property (nonatomic) BOOL hasConversationCoreInfo;

+ (id)descriptor;

@end

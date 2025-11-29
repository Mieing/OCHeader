@class TIMXPBNCSBConversationInfo;

@interface TIMXPBNGetCSBConversationInfoResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNCSBConversationInfo *conversationInfo;
@property (nonatomic) BOOL hasConversationInfo;

+ (id)descriptor;

@end

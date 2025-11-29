@class TIMXPBNThreadBubbleMessages, NSMutableArray, TIMXPBNConversationInfoV2;

@interface TIMXPBNConversationMessage : GPBMessage

@property (retain, nonatomic) TIMXPBNConversationInfoV2 *conversations;
@property (nonatomic) BOOL hasConversations;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (retain, nonatomic) TIMXPBNThreadBubbleMessages *threadBubbleMessage;
@property (nonatomic) BOOL hasThreadBubbleMessage;

+ (id)descriptor;

@end

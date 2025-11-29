@class NSString, NSMutableDictionary;

@interface TIMXPBNConversationUpdateBotRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long botId;
@property (nonatomic) BOOL hasBotId;
@property (retain, nonatomic) NSMutableDictionary *bizExt;
@property (readonly, nonatomic) unsigned long long bizExt_Count;

+ (id)descriptor;

@end

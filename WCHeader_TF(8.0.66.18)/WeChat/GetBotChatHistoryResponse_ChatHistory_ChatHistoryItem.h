@class NSString;

@interface GetBotChatHistoryResponse_ChatHistory_ChatHistoryItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int ts;
@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) int msgType;

+ (void)initialize;

@end

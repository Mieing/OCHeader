@class NSString, NSMutableArray;

@interface GetBotChatHistoryResponse_ChatHistory : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *singleChatUsername;
@property (nonatomic) unsigned long long singleChatUin;
@property (retain, nonatomic) NSMutableArray *sessionHistory;

+ (void)initialize;

@end

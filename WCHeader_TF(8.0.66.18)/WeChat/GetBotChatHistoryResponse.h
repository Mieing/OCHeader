@class NSString, NSMutableArray;

@interface GetBotChatHistoryResponse : WXPBGeneratedMessage

@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSMutableArray *activeChatList;
@property (retain, nonatomic) NSMutableArray *chatHistoryList;
@property (retain, nonatomic) NSMutableArray *robotChatHistoryList;

+ (void)initialize;

@end

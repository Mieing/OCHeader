@class NSString, NSMutableArray;

@interface ChatHistoryMsgList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *msgList;
@property (retain, nonatomic) NSString *fromUsr;

+ (void)initialize;

@end

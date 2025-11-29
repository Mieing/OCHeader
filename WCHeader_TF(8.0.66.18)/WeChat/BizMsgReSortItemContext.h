@class CommItemContext;

@interface BizMsgReSortItemContext : WXPBGeneratedMessage

@property (retain, nonatomic) CommItemContext *commContext;
@property (nonatomic) BOOL isReqMsg;

+ (void)initialize;

@end

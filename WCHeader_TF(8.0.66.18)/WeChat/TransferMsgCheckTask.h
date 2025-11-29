@class NSString, MsgCheckReq;

@interface TransferMsgCheckTask : WXPBGeneratedMessage

@property (retain, nonatomic) MsgCheckReq *request;
@property (nonatomic) unsigned int taskFireTime;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) int isOpenIm;

+ (void)initialize;

- (void)setIsOpenIm:(int)a0;
- (int)isOpenIm;
- (void)setToUserName:(id)a0;
- (id)toUserName;
- (void)setTaskFireTime:(unsigned int)a0;
- (unsigned int)taskFireTime;
- (void)setRequest:(id)a0;
- (id)request;

@end

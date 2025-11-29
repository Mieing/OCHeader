@class BaseRequest, WeAppNotifyMsg;

@interface GetWeAppCellNotifyMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) WeAppNotifyMsg *msgInfo;

+ (void)initialize;

@end

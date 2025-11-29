@class WeAppNotifyMsg, BaseResponse;

@interface GetWeAppCellNotifyMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WeAppNotifyMsg *msgInfo;
@property (nonatomic) unsigned int updateIntervalTime;

+ (void)initialize;

@end

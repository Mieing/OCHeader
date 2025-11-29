@class CreationCenterNotifyInfo, BaseResponse;

@interface CreationCenterResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CreationCenterNotifyInfo *notifyInfo;

+ (void)initialize;

@end

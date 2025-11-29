@class BaseResponse, MobileInfo, NSData, SimMobileLogicResp;

@interface GetMobileResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SimMobileLogicResp *logicresp;
@property (retain, nonatomic) NSData *respSpamInfo;
@property (retain, nonatomic) MobileInfo *mobileInfo;

+ (void)initialize;

@end

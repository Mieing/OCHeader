@class NSString, BaseResponse;

@interface PayIBGGetJumpUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

@end

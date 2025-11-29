@class NSString, BaseResponse;

@interface GetSnsAdCouponCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int ret;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end

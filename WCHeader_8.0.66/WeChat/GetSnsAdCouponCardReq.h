@class BaseRequest, NSString;

@interface GetSnsAdCouponCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *stockid;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *compid;

+ (void)initialize;

@end

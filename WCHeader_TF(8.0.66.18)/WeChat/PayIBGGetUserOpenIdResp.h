@class NSString, BaseResponse;

@interface PayIBGGetUserOpenIdResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;

+ (void)initialize;

@end

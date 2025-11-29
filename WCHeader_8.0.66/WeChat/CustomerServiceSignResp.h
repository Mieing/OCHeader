@class NSString, BaseResponse;

@interface CustomerServiceSignResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *signedUrl;

+ (void)initialize;

@end

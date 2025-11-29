@class NSString, BaseResponse;

@interface GetStarCDNURLResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end

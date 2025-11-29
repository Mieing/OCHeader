@class NSString, BaseResponse;

@interface AdinfoProxyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *resp;

+ (void)initialize;

@end

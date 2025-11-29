@class NSString, BaseResponse;

@interface GetOpenUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *openUrl;

+ (void)initialize;

@end

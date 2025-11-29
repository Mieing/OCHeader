@class NSString, BaseResponse;

@interface TempUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end

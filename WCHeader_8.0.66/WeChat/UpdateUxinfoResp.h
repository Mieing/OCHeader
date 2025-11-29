@class NSString, BaseResponse;

@interface UpdateUxinfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *uxinfo;

+ (void)initialize;

@end

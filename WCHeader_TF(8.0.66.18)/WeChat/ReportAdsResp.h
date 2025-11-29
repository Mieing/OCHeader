@class BaseResponse;

@interface ReportAdsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;

+ (void)initialize;

@end

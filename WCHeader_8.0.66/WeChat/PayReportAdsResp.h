@class BaseResponse;

@interface PayReportAdsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;

+ (void)initialize;

@end

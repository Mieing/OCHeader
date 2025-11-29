@class BaseResponse;

@interface WxaAppIDKeyBatchReportResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int reportFreq;

+ (void)initialize;

@end

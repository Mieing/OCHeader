@class NSString, BaseResponse;

@interface DataReportSentinelResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *data;

+ (void)initialize;

@end

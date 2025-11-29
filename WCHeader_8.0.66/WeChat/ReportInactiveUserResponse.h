@class BaseResponse;

@interface ReportInactiveUserResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long nextReportSeconds;

+ (void)initialize;

@end

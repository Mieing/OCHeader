@class BaseResponse;

@interface PullUserMessageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long nextReportSeconds;

+ (void)initialize;

@end

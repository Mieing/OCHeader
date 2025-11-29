@class BaseResponse;

@interface FinderLiveClientReportResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int reportInterval;

+ (void)initialize;

@end

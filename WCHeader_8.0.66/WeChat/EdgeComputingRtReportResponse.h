@class NSMutableArray, BaseResponse;

@interface EdgeComputingRtReportResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long nextPeriod;
@property (retain, nonatomic) NSMutableArray *dropFlags;

+ (void)initialize;

@end

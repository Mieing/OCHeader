@class NSString;

@interface IESECLiveLogReportRequest : IESECLiveAPIBaseRequest

@property (nonatomic) long long logType;
@property (retain, nonatomic) NSString *content;

- (id)buildParams;
- (void).cxx_destruct;

@end

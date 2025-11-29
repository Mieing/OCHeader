@class NSString;

@interface IESECLiveTaskCompletedReportRequest : IESECLiveAPIBaseRequest

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *taskEvent;
@property (retain, nonatomic) NSString *taskPath;

- (id)buildParams;
- (void).cxx_destruct;

@end

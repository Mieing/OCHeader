@class NSString;

@interface IESECLiveBuyReportRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *pIDs;
@property (copy, nonatomic) NSString *eventType;

- (id)buildParams;
- (void).cxx_destruct;

@end

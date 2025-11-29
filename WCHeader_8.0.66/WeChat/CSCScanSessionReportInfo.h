@interface CSCScanSessionReportInfo : MMObject

@property (nonatomic) long long enterCombineFlowCount;
@property (nonatomic) long long skipFromWorkingCount;
@property (nonatomic) long long skipFromStrangyCount;
@property (nonatomic) long long ffeHandleCount;
@property (nonatomic) long long ffeFailedCount;
@property (nonatomic) long long ffeSuccessCount;
@property (nonatomic) long long ffeFirstSuccessFrame;
@property (nonatomic) long long svrHandleCount;
@property (nonatomic) long long svrFailedCount;
@property (nonatomic) long long svrSuccessCount;
@property (nonatomic) long long svrFirstSuccessFrame;

@end

@class NSString, NSDictionary;

@interface TTAReportErrorTask : NSObject

@property (nonatomic) BOOL isScheduled;
@property (nonatomic) long long immediatelyRetryCount;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long waitTime;
@property (nonatomic) double updateTime;
@property (nonatomic) long long curRetryCount;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)init;

@end

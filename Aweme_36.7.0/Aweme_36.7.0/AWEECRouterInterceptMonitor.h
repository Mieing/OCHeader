@class NSString, NSNumber, NSDictionary;

@interface AWEECRouterInterceptMonitor : NSObject

@property (nonatomic) int times;
@property (nonatomic) BOOL redirectError;
@property (copy, nonatomic) NSString *redirectErrorMsg;
@property (copy, nonatomic) NSNumber *netCode;
@property (copy, nonatomic) NSString *netLogid;
@property (nonatomic) double beginTime;
@property (nonatomic) double workerTime;
@property (nonatomic) double geckoTime;
@property (nonatomic) double jsResponseTime;
@property (nonatomic) double transStartTime;
@property (nonatomic) BOOL geckoHasLocal;
@property (nonatomic) double jsTime;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *page_key;
@property (copy, nonatomic) NSString *finalSchema;
@property (nonatomic) long long netDataTime;

- (void).cxx_destruct;
- (void)report;
- (id)init;

@end

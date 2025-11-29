@class NSString, NSDictionary, NSDate, TTHttpRequestChromium, TTHttpResponseChromium;

@interface AWENetworkPerfromanceMetrics : NSObject

@property (retain, nonatomic) NSDate *startDateInQueue;
@property (retain, nonatomic) TTHttpRequestChromium *request;
@property (retain, nonatomic) TTHttpResponseChromium *response;
@property (nonatomic) double dnsTimming;
@property (nonatomic) double connectTimming;
@property (nonatomic) double sendTiming;
@property (nonatomic) double waitTiming;
@property (nonatomic) double receiveTiming;
@property (nonatomic) double totalTiming;
@property (copy, nonatomic) NSString *taskResumeTimeString;
@property (copy, nonatomic) NSDictionary *requestFilterMetrics;
@property (copy, nonatomic) NSDictionary *requestSerializerMetrics;
@property (copy, nonatomic) NSDictionary *responeFilterMetrics;
@property (copy, nonatomic) NSDictionary *responeSerializerMetrics;
@property (copy, nonatomic) NSDictionary *additionalTimeinfo;
@property (copy, nonatomic) NSString *apiAllLogInfo;
@property (copy, nonatomic) NSDictionary *apiAllLogDict;
@property (nonatomic) unsigned long long sentBytes;
@property (nonatomic) unsigned long long sentURLBytes;
@property (nonatomic) unsigned long long sentHeaderAndDataBytes;
@property (nonatomic) unsigned long long receiveBytes;

- (void)processTTHttpRequest:(id)a0;
- (void)processTTHttpRespone:(id)a0;
- (void)recordStartDateInQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

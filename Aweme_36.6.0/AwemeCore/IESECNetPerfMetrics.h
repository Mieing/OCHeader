@class TTHttpResponse, TTHttpRequest, NSDictionary, NSString, NSURL;

@interface IESECNetPerfMetrics : NSObject

@property (retain, nonatomic) TTHttpRequest *request;
@property (retain, nonatomic) TTHttpResponse *response;
@property (copy, nonatomic) NSDictionary *requestFilterMetrics;
@property (nonatomic) double requestFilterDuration;
@property (copy, nonatomic) NSDictionary *requestSerializerMetrics;
@property (nonatomic) double requestSerializerDuration;
@property (copy, nonatomic) NSDictionary *responseFilterMetrics;
@property (nonatomic) double responseFilterDuration;
@property (copy, nonatomic) NSDictionary *responseSerializerMetrics;
@property (nonatomic) double responseSerializerDuration;
@property (copy, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) double additionalDuration;
@property (nonatomic) double netTotalDuration;
@property (nonatomic) double preRequestDuration;
@property (nonatomic) double afterRequestDuration;
@property (nonatomic) double ecRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) double createStreamStart;
@property (nonatomic) double createStreamFinish;
@property (nonatomic) double requestSentTime;
@property (nonatomic) double responseRecvTime;
@property (nonatomic) double requestEnd;
@property (nonatomic) double ecRequestEnd;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) long long code;
@property (nonatomic) long long receivedBytes;
@property (nonatomic) long long sentBytes;
@property (nonatomic) long long socketReused;
@property (nonatomic) long long connectionInfo;
@property (nonatomic) long long netThreadPriority;
@property (copy, nonatomic) NSString *ttnetVersion;
@property (nonatomic) long long priorityLevel;
@property (copy, nonatomic) NSString *requestCompressType;
@property (copy, nonatomic) NSString *responseCompressType;
@property (nonatomic) long long downlinkThroughput;
@property (nonatomic) long long effectiveNetType;
@property (nonatomic) long long httpRTT;
@property (nonatomic) long long tcpRTT;
@property (nonatomic) long long realNetType;
@property (copy, nonatomic) NSDictionary *netTimingDetail;
@property (copy, nonatomic) NSDictionary *requestLog;
@property (copy, nonatomic) NSURL *requestUrl;
@property (readonly, copy, nonatomic) NSDictionary *timingDetail;
@property (readonly, copy, nonatomic) NSDictionary *timestampDetail;

- (id)objectForKeyPath:(id)a0 dict:(id)a1;
- (void)parseRequestLogIfNeeded;
- (id)requestCategoryLog;
- (id)requestMetricLog;
- (id)initWithRequest:(id)a0 response:(id)a1 ecRequestStart:(double)a2 ecRequestEnd:(double)a3;
- (void)initializeRequestInfo:(id)a0;
- (void)initializeResponseInfo:(id)a0;
- (double)totalDurationForMetricsInfo:(id)a0;
- (void)processRequestDetailMetrics;
- (void).cxx_destruct;

@end

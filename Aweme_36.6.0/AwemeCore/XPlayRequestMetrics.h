@class NSString;

@interface XPlayRequestMetrics : NSObject

@property (nonatomic) long long dns;
@property (nonatomic) long long tcp;
@property (nonatomic) long long ssl;
@property (nonatomic) long long connect;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) BOOL reuseConnect;
@property (nonatomic) long long duration;
@property (nonatomic) long long domainLookupStart;
@property (nonatomic) long long domainLookupEnd;
@property (nonatomic) long long connectStart;
@property (nonatomic) long long connectEnd;
@property (nonatomic) long long SSLconnectionStart;
@property (nonatomic) long long SSLconnectionEnd;
@property (nonatomic) long long requestStart;
@property (nonatomic) long long requestEnd;
@property (nonatomic) long long responseStart;
@property (nonatomic) long long responseEnd;
@property (copy, nonatomic) NSString *peerIP;
@property (nonatomic) long long port;
@property (nonatomic) long long fetchStart;
@property (copy, nonatomic) NSString *networkProtocolName;
@property (nonatomic) BOOL isCached;
@property (nonatomic) unsigned long long receivedDataLength;
@property (nonatomic) char cacheStatus;
@property (nonatomic) unsigned long long receivedResponseContentLength;
@property (nonatomic) unsigned long long receivedBytesCount;
@property (nonatomic) unsigned long long sendBytesCount;
@property (nonatomic) long long downstreamThroughputKbps;
@property (nonatomic) long long estimateNetType;
@property (nonatomic) long long rtt;
@property (nonatomic) long long httpRtt;
@property (nonatomic) long long transportRtt;
@property (nonatomic) long long quicRaceResult;
@property (nonatomic) long long estimateNetScore;

- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSDate;

@interface TTHttpResponseChromiumTimingInfo : TTHttpResponseTimingInfo <NSCopying>

@property (retain, nonatomic) NSDate *start;
@property (nonatomic) long long proxy;
@property (nonatomic) long long dns;
@property (nonatomic) long long connect;
@property (nonatomic) long long ssl;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) long long total;
@property (nonatomic) long long receivedResponseContentLength;
@property (nonatomic) long long totalReceivedBytes;
@property (nonatomic) BOOL isSocketReused;
@property (nonatomic) BOOL isCached;
@property (nonatomic) char cacheStatus;
@property (nonatomic) BOOL isFromProxy;
@property (copy, nonatomic) NSString *remoteIP;
@property (nonatomic) unsigned short remotePort;
@property (nonatomic) int urlDispatchDropReason;

- (id)initWithURLFetcher:(const struct URLFetcher { void /* function */ **x0; } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

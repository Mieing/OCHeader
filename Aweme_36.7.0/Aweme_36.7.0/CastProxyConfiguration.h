@class NSString, NSArray, NSObject;
@protocol BDCastProxyServerDelegate, CastProxyLogDelegate, CastProxyMonitorDelegate;

@interface CastProxyConfiguration : NSObject

@property (class, copy, nonatomic) NSString *appName;

@property (weak, nonatomic) NSObject<BDCastProxyServerDelegate> *webServerDelegate;
@property (nonatomic) BOOL enableDebug;
@property (weak, nonatomic) NSObject<CastProxyMonitorDelegate> *monitorDelegate;
@property (weak, nonatomic) NSObject<CastProxyLogDelegate> *logDelegate;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appSecret;
@property (copy, nonatomic) NSString *proxyDomain;
@property (nonatomic) long long discardPacketCyclesWaitWhenNOConsumer;
@property (nonatomic) long long maxCyclesWaitWhenNOConsumer;
@property (nonatomic) long long decryptionOutputBufferSize;
@property (nonatomic) long long downloadBufferSize;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) BOOL useNewRequestManager;
@property (nonatomic) unsigned long long maxConcurrentRequestCount;
@property (nonatomic) unsigned long long maxRequestCount;
@property (nonatomic) double requestWaitScheduleTimeout;
@property (nonatomic) double requestIdleTime;
@property (nonatomic) unsigned long long rangeStrategyType;
@property (copy, nonatomic) NSArray *rangeRequestHeaderKeyWhiteList;
@property (copy, nonatomic) NSArray *rangeRequestTVManufacturerWhiteList;
@property (nonatomic) BOOL ignoreLocalRequest;

- (id)configParams;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

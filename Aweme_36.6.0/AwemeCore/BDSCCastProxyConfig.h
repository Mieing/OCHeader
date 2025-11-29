@class NSArray, NSString;

@interface BDSCCastProxyConfig : NSObject <BDModelCustom>

@property (nonatomic) long long discardPacketCyclesWaitWhenNOConsumer;
@property (nonatomic) long long maxCyclesWaitWhenNOConsumer;
@property (nonatomic) BOOL useNewRequestManager;
@property (nonatomic) unsigned long long maxConcurrentRequestCount;
@property (nonatomic) unsigned long long maxRequestCount;
@property (nonatomic) double requestWaitScheduleTimeout;
@property (nonatomic) double requestIdleTime;
@property (nonatomic) long long rangeStrategyType;
@property (copy, nonatomic) NSArray *rangeRequestHeaderKeyWhiteList;
@property (copy, nonatomic) NSArray *rangeRequestTVManufacturerWhiteList;
@property (nonatomic) BOOL ignoreLocalRequest;
@property (nonatomic) long long downloadBufferSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

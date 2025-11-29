@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWEMultiDeviceDiscoverManager : NSObject <AWEMultiDeviceDiscoverService>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSString *searchLoopTimerIdentify;
@property (nonatomic) BOOL isPadFounded;
@property (nonatomic) double timeout;
@property (nonatomic) double frequence;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long currentRetryCount;
@property (nonatomic) BOOL needLimitRetry;
@property (retain, nonatomic) NSMutableDictionary *limitRetryDic;
@property (retain, nonatomic) NSMutableSet *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)privacyAlertAgreed;
- (void)beginDiscoverWithScene:(long long)a0;
- (void)stopDiscoverWithScene:(long long)a0;
- (void)updateLimitRetryConfig;
- (void)forceStopDiscover;
- (void)configDiscoverTask;
- (void)discoverByBytecastService;
- (void)discoverByAppleService;
- (void)discoverByMDNSWithSerice:(id)a0 completion:(id /* block */)a1;
- (void)updateDiscoverResult:(BOOL)a0 deviceName:(id)a1 enterFrom:(id)a2;
- (void)setupTaskConfig:(id)a0 withScene:(long long)a1;
- (void).cxx_destruct;

@end

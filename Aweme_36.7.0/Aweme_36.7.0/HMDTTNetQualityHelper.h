@protocol HMDNetQualityProtocol;

@interface HMDTTNetQualityHelper : NSObject

@property BOOL isRunning;
@property long long netQualityCode;
@property (weak, nonatomic) id<HMDNetQualityProtocol> delegate;

+ (id)sharedInstance;

- (void)activelyGetCurrentNetConnectType;
- (void)registerNetConnectionTypeNotification;
- (void)unregisterNetConnectionTypeNotification;
- (long long)mapTTNetConnectionTypeToStandardCode:(long long)a0;
- (void)sentNetConnectionTypeChange;
- (void)recieveNetConnectionTypeChange:(id)a0;
- (void)registerQualityDelegate:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end

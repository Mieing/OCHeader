@class LSSSchedulingRequestInfo;

@interface VeLSNetworkManager : NSObject

@property (retain, nonatomic) LSSSchedulingRequestInfo *schedulingRequestInfo;

+ (id)sharedInstance;

- (id)getConfigAndStrategyByIntKey:(long long)a0 key:(long long)a1 defaultValue:(id)a2 sdkInfo:(id)a3;
- (id)currentSchedulingRequestInfo;
- (void)updateCurrentSchedulingRequestInfo:(id)a0;
- (void)StartPeriodicRequest;
- (void)GetLSSettings;
- (void)GetStrategySDKSettings;
- (id)GetRTMPlayer;
- (id)GetLivePlayerSettings;
- (id)GetAbrAutoSettings;
- (id)GetQuicSettings;
- (void).cxx_destruct;

@end

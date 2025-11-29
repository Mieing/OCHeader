@class NSString, NSDictionary;

@interface AWENearbyLastFMPManager : AWENearbyFMPBaseManager <AWENearbyFMPInjectProtocol>

@property (nonatomic) BOOL feedShow;
@property (nonatomic) BOOL transformerShow;
@property (nonatomic) double feedCost;
@property (nonatomic) double transformerCost;
@property (copy, nonatomic) NSString *feedFailReason;
@property (nonatomic) long long interruptedScene;
@property (nonatomic) long long areaType;
@property (nonatomic) BOOL transformerFMPSdkSuccess;
@property (copy, nonatomic) NSString *transformerFMPSdkResult;
@property (copy, nonatomic) NSDictionary *feedParams;
@property (nonatomic) BOOL transformerGeckoExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)feedRequestFail;
- (void)feedRequestEmpty;
- (void)transformerRequestFail;
- (void)transformerRequestEmpty;
- (id)injectCustomParams;
- (void)feedDidShowParams:(id)a0;
- (void)feedShowFailReason:(id)a0;
- (id)injectEventName;
- (void)transformerDidShowParams:(id)a0 renderTime:(double)a1 error:(id)a2;
- (void)willShowSkyLightGeckoExist:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end

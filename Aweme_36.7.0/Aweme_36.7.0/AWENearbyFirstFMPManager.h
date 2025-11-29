@class NSString, NSDictionary;

@interface AWENearbyFirstFMPManager : AWENearbyFMPBaseManager <AWENearbyFMPInjectProtocol>

@property (nonatomic) BOOL isFirstFMP;
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
- (id)injectEventName;
- (void)transformerDidShowParams:(id)a0 renderTime:(double)a1 error:(id)a2;
- (void)willShowSkyLightGeckoExist:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end

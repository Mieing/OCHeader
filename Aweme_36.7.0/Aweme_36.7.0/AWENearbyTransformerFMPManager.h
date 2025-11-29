@class NSString;

@interface AWENearbyTransformerFMPManager : AWENearbyFMPBaseManager

@property (nonatomic) BOOL transformerFMPSdkSuccess;
@property (copy, nonatomic) NSString *transformerFMPSdkResult;
@property (nonatomic) BOOL transformerGeckoExist;
@property (nonatomic) BOOL isSkyLightShow;

+ (id)sharedInstance;

- (void)transformerRequestFail;
- (void)transformerRequestEmpty;
- (void)transformerDidShowParams:(id)a0 renderTime:(double)a1 error:(id)a2;
- (void)willShowSkyLightGeckoExist:(BOOL)a0;
- (void)willDissappear;
- (void)skylightDidShow;
- (void)trackerDSLFmpWithParams:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;

@end

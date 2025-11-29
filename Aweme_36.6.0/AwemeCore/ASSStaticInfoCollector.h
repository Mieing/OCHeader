@class NSMutableDictionary;

@interface ASSStaticInfoCollector : NSObject

@property (retain, nonatomic) NSMutableDictionary *environmentInfo;
@property (retain, nonatomic) NSMutableDictionary *deviceInfo;
@property (retain, nonatomic) NSMutableDictionary *appInfo;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;

- (void)generateStaticInfo:(id)a0;
- (void)updateUserID:(id)a0;
- (void)updateIC4:(id)a0;
- (void)updateDynamicInfo;
- (id)getCurrentStaticInfoHash;
- (id)collectAllStaticData;
- (void)generateDeviceInfo:(id)a0;
- (void)generateCustomInfo:(id)a0;
- (id)generateHashForSensors;
- (id)checkJB;
- (void)reportJBError:(id)a0;
- (id)verifyStringNotNil:(id)a0;
- (void)generateEnvironmentInfo;
- (void)generateApplicationInfo;
- (id)getIE41;
- (void).cxx_destruct;

@end

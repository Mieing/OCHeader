@class NSMutableDictionary;

@interface ASSStaticInfoCollectorZZZX : NSObject

@property (retain, nonatomic) NSMutableDictionary *environmentInfo;
@property (retain, nonatomic) NSMutableDictionary *deviceInfo;
@property (retain, nonatomic) NSMutableDictionary *appInfo;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;

- (void)generateStaticInfo:(id)a0;
- (void)updateUserID:(id)a0;
- (void)updateSessionId:(id)a0;
- (void)updateIC4:(id)a0;
- (void)updateIC12:(id)a0;
- (void)updateIC13:(id)a0;
- (void)updateIC14:(id)a0;
- (void)updateClientKey:(id)a0;
- (void)updateDynamicInfo;
- (id)getCurrentStaticInfoHash;
- (id)collectAllStaticData;
- (void)generateDeviceInfo:(id)a0;
- (void)generateEnvironmentInfo:(id)a0;
- (void)generateApplicationInfo:(id)a0;
- (void)generateCustomInfo:(id)a0;
- (id)generateHashForSensors;
- (id)getRootEnhance;
- (id)getCodeSignInfo;
- (id)checkJB;
- (void)reportJBError:(id)a0;
- (id)_16923bf24c2b4257b579fcc6bffd08884120170518L;
- (unsigned short)checkApiStatus;
- (id)getScanInfo;
- (id)getArpMac;
- (id)getPublicIPInfo;
- (id)_16923bf24c2b4257b579fcc6bffd08883820170518L;
- (id)getSimpleDeviceInfo;
- (id)verifyStringNotNil:(id)a0;
- (void).cxx_destruct;
- (void)updateAppInfo:(id)a0;

@end

@class NSString, NSDictionary;

@interface UAServiceConfig : UAService

@property (retain, nonatomic) NSString *certCachePath;
@property (retain, nonatomic) NSString *configCachePath;
@property (retain, nonatomic) NSDictionary *config;

+ (id)cachePathFromName:(id)a0;
+ (id)readDataFromPath:(id)a0 tryTimes:(unsigned long long)a1;
+ (id)sdkDefaultConfig;
+ (id)currentUasgeConfigItemNames;
+ (id)emptyStringConfigItemNames;
+ (id)serializedChangeHost:(id)a0;
+ (void)writeObject:(id)a0 toPath:(id)a1 tryTimes:(unsigned long long)a2;
+ (id)serializedCert:(id)a0;
+ (BOOL)isSuccessfulResult:(id)a0;
+ (void)removeCachePathIfNotDir:(id)a0;
+ (id)necessaryRequestHeadKeys;
+ (id)URLWithDomainConfig:(id)a0;
+ (id)URL;
+ (void)createCacheDirAtPath:(id)a0;

- (id)configWithKey:(id)a0;
- (void)loadConfig;
- (long long)stateFromLocalConfig:(id)a0;
- (id)updateLocalConfigList:(id)a0 fromServerConfigList:(id)a1;
- (id)configCertInfo;
- (id)stringConfigWithKey:(id)a0;
- (BOOL)boolConfigWithKey:(id)a0;
- (BOOL)closeAppIdWithBusinessName:(id)a0;
- (BOOL)closeSDKVersionWithBusinessName:(id)a0;
- (BOOL)closeCerVerify;
- (BOOL)closeLog;
- (BOOL)closeSDK;
- (id)closeInfo;
- (id)loadCert;
- (BOOL)closeWapWithOperatorType:(id)a0;
- (void)storeConfig:(id)a0;
- (void)accessServiceWithData:(id)a0 results:(id)a1 completion:(id /* block */)a2;
- (id)serviceRequest;
- (void).cxx_destruct;
- (long long)configState;

@end

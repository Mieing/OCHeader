@class NSDictionary, NSString;

@interface DeviceModelConfigMgr : MMUserService <MMKernelExt, MMServiceProtocol, MMPackageDownloadMgrExt>

@property (retain, nonatomic) NSDictionary *m_dicFromModelJson;
@property (nonatomic) int m_oldVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchWxVersion:(unsigned int)a0 platform:(id)a1 iosVersion:(id)a2 fromArray:(id)a3;
+ (id)matchCurrentWechatVersion:(id)a0 WxVersion:(unsigned int)a1;
+ (unsigned int)parseVersionFromString:(id)a0;
+ (id)getValueFromInfo:(id)a0 Key:(id)a1 attrKey:(id)a2;
+ (id)getDeviceModelConfigRootDir;
+ (id)getDeveceModelConfinPath;

- (id)init;
- (void)onAuthOK;
- (void)updateConfig;
- (void)onServiceInit;
- (void)loadLocalInfo;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void)onPackageNeedUpdate:(id)a0 withPackIDs:(id)a1;
- (void)onPackageListUpdated:(id)a0;
- (id)getAllVersionArray;
- (long long)valueForDeviceModelForKey:(id)a0 attrKey:(id)a1 valueDefalut:(long long)a2;
- (BOOL)save:(id)a0;
- (void).cxx_destruct;

@end

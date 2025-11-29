@class NSString, WAInfoData;

@interface WASyncGetCodeCmd : WASyncBaseCmd <PBCoding>

@property (nonatomic) unsigned long long networkType;
@property (nonatomic) unsigned int maxRetryCount;
@property (nonatomic) unsigned int retryInterval;
@property (nonatomic) BOOL isEncrypt;
@property (nonatomic) unsigned int appVersion;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) unsigned int currentRetryCount;
@property (nonatomic) unsigned int lastGetCodeTime;
@property (copy, nonatomic) NSString *packageKey;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) BOOL needRouteNewGetCdnUrlCgi;
@property (copy, nonatomic) NSString *needBackupDomain;
@property (nonatomic) BOOL enableDownloadResumption;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) WAInfoData *infoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_cmdType;
+ (void)PBArrayAdd_squence;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_maxRetryCount;
+ (void)PBArrayAdd_retryInterval;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isRetry;
+ (void)PBArrayAdd_currentRetryCount;
+ (void)PBArrayAdd_lastGetCodeTime;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_packageKey;
+ (void)PBArrayAdd_packageType;
+ (void)PBArrayAdd_needRouteNewGetCdnUrlCgi;
+ (void)PBArrayAdd_preDownloadRequestkey;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isAppInfoDataFromThisGetCodeCmd:(id)a0;
- (id)packageUniqueIdentifier;
- (BOOL)canRetryNow;
- (id)getDescribableNetworkType;
- (void).cxx_destruct;

@end

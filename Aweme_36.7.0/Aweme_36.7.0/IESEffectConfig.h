@class NSString, NSMutableSet, NSDictionary;

@interface IESEffectConfig : NSObject

@property (retain, nonatomic) NSMutableSet *ignoreBuiltinModelNameList;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *effectSDKVersion;
@property (copy, nonatomic) NSString *channel;
@property (copy) NSString *domain;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *rootDirectory;
@property (copy, nonatomic) id /* block */ networkParametersBlock;
@property (nonatomic) BOOL enableAutoCleanCache;
@property (copy, nonatomic) NSString *effectSDKResourceBundlePath;
@property (readonly, copy, nonatomic) NSDictionary *effectSDKResourceBundleConfig;
@property (readonly, nonatomic) NSString *effectManifestPath;
@property (nonatomic) unsigned long long effectManifestQuota;
@property (readonly, nonatomic) NSString *effectsDirectory;
@property (nonatomic) unsigned long long effectsDirectoryQuota;
@property (readonly, nonatomic) NSString *algorithmsDirectory;
@property (nonatomic) unsigned long long algorithmsDirectoryQuota;
@property (readonly, nonatomic) NSString *tmpDirectory;
@property (nonatomic) unsigned long long tmpDirectoryQuota;
@property (nonatomic) BOOL enableDiskCacheCleanOptimize;
@property (nonatomic) unsigned long long backgroundCacheCleanIntervalDays;
@property (nonatomic) unsigned long long effectCacheReservedThreshold;
@property (readonly, nonatomic) NSDictionary *commonParameters;
@property (nonatomic) BOOL downloadOnlineEnviromentModel;
@property (nonatomic) BOOL enableInsertFrontDownloadEffect;
@property (nonatomic) BOOL enableEffectAlgorithmAsyncDownload;
@property (copy, nonatomic) NSString *fetchURLFromOIDDomain;
@property (nonatomic) long long downloadPauseFileThreshold;
@property (readonly, copy, nonatomic) NSString *remoteAssetDirectory;

+ (id)devicePlatform;
+ (void)setDevicePlatform:(id)a0;

- (id)commonParametersWithURLString:(id)a0;
- (BOOL)checkLastCleanTimeHasExpired;
- (void)updateLastCleanTime;
- (void)updateIgnoreBuiltinModelNameList:(id)a0;
- (BOOL)shouldBuiltinModelNameBeIgnored:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

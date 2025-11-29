@class IESGurdDefaultNetworkDelegate, IESGurdNetworkDelegateImpl;

@interface IESGurdResourceManager : NSObject

@property (class, nonatomic, getter=isRetryEnabled) BOOL retryEnabled;
@property (class, nonatomic, getter=isPollingEnabled) BOOL pollingEnabled;

@property (retain, nonatomic) IESGurdDefaultNetworkDelegate *defaultNetworkDelegate;
@property (retain, nonatomic) IESGurdNetworkDelegateImpl *networkDelegate;

+ (void)setRetryTotalDuration:(long long)a0;
+ (long long)retryTotalDuration;
+ (void)realRequestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)downloadPackageWithDownloadInfoModel:(id)a0 completion:(id /* block */)a1;
+ (void)cancelDownloadWithIdentity:(id)a0;
+ (void)addTTResponseFilterObject:(id /* block */)a0;
+ (void)downloadResources:(id)a0 completion:(id /* block */)a1;
+ (void)fetchConfigWithURLString:(id)a0 multiAccessKeysRequest:(id)a1;
+ (void)requestOfflineCdnWithURLString:(id)a0 completion:(id /* block */)a1;
+ (BOOL)checkIfServerAvailable;
+ (void)updateServerAvailable:(BOOL)a0;
+ (void)POSTWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)requestConfigWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)fetchConfigWithURLString:(id)a0 request:(id)a1;
+ (id)packagesArrayWithResponse:(id)a0 request:(id)a1;
+ (long long)getBlockTypeWithModel:(id)a0;
+ (void)sendPrepareMetaWithModel:(id)a0;
+ (void)gurdDidFetchConfigWithPackagesArray:(id)a0 request:(id)a1;
+ (void)filterAndDownloadResources:(id)a0 response:(id)a1 request:(id)a2;
+ (void)updateResourcesWithModels:(id)a0 updateAccessKey:(id)a1 originalUpdateChannels:(id)a2 channelBlockInfos:(id)a3 completion:(id /* block */)a4;
+ (void)modifyUpdateResult:(id)a0 updateChannels:(id)a1 channelBlockInfos:(id)a2;
+ (id)blockUpdateKeyWithAccessKey:(id)a0 channel:(id)a1;
+ (void)sendQuerySettingsResponse:(id)a0 logInfo:(id)a1;
+ (void)fetchSettingsWithRequest:(id)a0 completion:(id /* block */)a1;
+ (id)networkDelegateForDownload;
+ (void)sendDownloadStats:(id)a0 packageSize:(unsigned long long)a1 error:(id)a2;
+ (void)innerRequestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (id)networkDelegateForRequest;
+ (void)GETWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (long long)retryCount;
+ (void)setRetryCount:(long long)a0;
+ (id)sharedManager;
+ (void)setDebugDelegate:(id)a0;

- (void).cxx_destruct;

@end

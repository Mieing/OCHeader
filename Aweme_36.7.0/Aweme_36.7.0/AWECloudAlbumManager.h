@class NSMutableDictionary, NSString, NSHashTable, AWECloudAlbumTracker, NSObject, EcClient;
@protocol OS_dispatch_queue;

@interface AWECloudAlbumManager : NSObject <ACCUserServiceMessage, EcTokenFetchProtocol, EcUserChangeProtocol, EcTeaProtocol, EcLogProtocol, EcReachabilityChangedProtocol, EcCoverFetchProtocol>

@property (class, readonly, copy, nonatomic) EcClient *ecClient;
@property (class, nonatomic) BOOL enableUsePHAsset;

@property (retain, nonatomic) EcClient *ecClient;
@property (copy, nonatomic) id /* block */ ecClientNetworkStatusCallback;
@property (retain, nonatomic) NSMutableDictionary *albumObserveDic;
@property (retain, nonatomic) NSHashTable *userChangeObserverDic;
@property (retain, nonatomic) NSHashTable *uploadTaskObserverDic;
@property (retain, nonatomic) AWECloudAlbumTracker *tracker;
@property (nonatomic) BOOL enableUsePHAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addObserveAlbum:(unsigned long long)a0 delegate:(id)a1;
+ (void)clearCurrentUserToken;
+ (void)tryUpdateCurrentUserToken:(id /* block */)a0;
+ (id)decryAssetID:(id)a0 imageData:(id)a1;
+ (void)removeObserverAlbum:(unsigned long long)a0 delegate:(id)a1;
+ (void)addObserveUserChange:(id)a0;
+ (void)removeUserChangeObserver:(id)a0;
+ (void)closeCloudAlbum:(id /* block */)a0;
+ (void)addUploadTaskObserver:(id)a0;
+ (void)removeUploadTaskObserver:(id)a0;
+ (void)pauseUploadTask:(id)a0 completion:(id /* block */)a1;
+ (void)resumeUploadTask:(id)a0 completion:(id /* block */)a1;
+ (void)removeAssetsAlbumId:(unsigned long long)a0 assetIds:(id)a1 completion:(id /* block */)a2;
+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)logLevel:(long long)a0 message:(id)a1;
- (void)didFinishLogout;
- (void)fetchCoverByModel:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 resultHandler:(id /* block */)a2;
- (void)fetchToken:(id /* block */)a0;
- (void)reachabilityChangeCallback:(id /* block */)a0;
- (void)userChangeOldUser:(id)a0 newUser:(id)a1;
- (void)teaEvent:(id)a0 param:(id)a1;
- (void)networkStateChange;
- (id)currentUserLocalToken;
- (long long)currentUserLocalEPUid;
- (void)saveCurrentUserToken:(id)a0 everphotoUid:(long long)a1;
- (BOOL)p_needCareAboutCloudAlbumSDk;
- (id)ecClientDataFolder;
- (id)ecClientCacheFolder;
- (id)ecClientDownloadFolder;
- (id)p_generateNewEcClient;
- (void).cxx_destruct;
- (id)init;
- (long long)currentReachabilityStatus;
- (void)dealloc;

@end

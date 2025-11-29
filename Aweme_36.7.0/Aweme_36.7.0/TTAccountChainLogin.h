@class NSDictionary, NSString;

@interface TTAccountChainLogin : NSObject <TTAccountMulticastProtocol>

@property (copy, nonatomic) NSDictionary *serviceToStoreMap;
@property (nonatomic) BOOL isProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)appId;

- (id)chainLoginUserInfoModelWithProviderAppId:(id)a0;
- (void)safeChainLoginWithProviderAppId:(id)a0 completion:(id /* block */)a1;
- (void)safeChainLoginWithSecUserId:(id)a0 completion:(id /* block */)a1;
- (void)safeChainLoginWithSecUserId:(id)a0 useSafeApi:(BOOL)a1 completion:(id /* block */)a2;
- (void)safeChainLoginWithParam:(id)a0 useSafeApi:(BOOL)a1 completion:(id /* block */)a2;
- (void)clearChainLoginInfo;
- (void)getAvatarInfoWithProviderAppId:(id)a0 completion:(id /* block */)a1;
- (void)setSharedKeyChainAccessGroup:(id)a0;
- (void)saveChainLoginUserInfoDictionary:(id)a0;
- (id)chainLoginUserInfoDictionaryWithProviderAppId:(id)a0;
- (void)saveChainLoginUserInfoModel:(id)a0;
- (void)getUserInfoModelWithProviderAppId:(id)a0 completion:(id /* block */)a1;
- (void)getUserInfoModelWithProviderConfig:(id)a0 completion:(id /* block */)a1;
- (void)p_saveChainLoginInfoWithDictionary:(id)a0 serviceName:(id)a1;
- (id)p_getChainLoginInfoWithProviderAppId:(id)a0 serviceName:(id)a1 error:(id *)a2;
- (void)p_getKeychainInfoWithProviderAppId:(id)a0 serviceName:(id)a1 completion:(id /* block */)a2;
- (void)p_getKeychainInfoWithProviderConfig:(id)a0 serviceName:(id)a1 completion:(id /* block */)a2;
- (void)p_safeChainLoginWithLoginParams:(id)a0 useSafeApi:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

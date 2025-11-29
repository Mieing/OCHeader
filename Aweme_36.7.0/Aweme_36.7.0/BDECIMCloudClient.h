@class TIMXSingletonsPage, NSString, TIMXSDKInstance, BDECIMClientConfig, TIMXConfig;
@protocol BDECIMCloudIMClientInterface;

@interface BDECIMCloudClient : NSObject <BDECIMCloudClientInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXConfig *imcloudConfigOfTIMX;
@property (weak, nonatomic) TIMXSDKInstance *SDKInstanceOfTIMX;
@property (retain, nonatomic) TIMXSingletonsPage *singletonsPageOfTIMX;
@property (weak, nonatomic) id<BDECIMCloudIMClientInterface> imCloudIMClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logoutWithCompletion:(id /* block */)a0;
- (void)loginWithUserID:(long long)a0 secUserID:(id)a1 token:(id)a2 completion:(id /* block */)a3;
- (void)destroyTIMXSDKInstance;
- (void)setupTIMXSDKInstance;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

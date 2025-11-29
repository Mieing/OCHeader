@class TIMXSingletonsPage, NSString, TIMXSDKInstance, TIMXConfig, BDECPigeonClientConfigV2;
@protocol BDECIMCloudIMClientV2Interface;

@interface BDECIMCloudClientV2 : NSObject <BDECIMCloudClientV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXConfig *imcloudConfigOfTIMX;
@property (weak, nonatomic) TIMXSDKInstance *SDKInstanceOfTIMX;
@property (retain, nonatomic) TIMXSingletonsPage *singletonsPageOfTIMX;
@property (weak, nonatomic) id<BDECIMCloudIMClientV2Interface> imCloudIMClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logoutWithCompletion:(id /* block */)a0;
- (void)loginWithUserID:(long long)a0 secUserID:(id)a1 token:(id)a2 completion:(id /* block */)a3;
- (id)getMessagesBeforeTime:(double)a0 inTypes:(id)a1 limit:(unsigned long long)a2;
- (long long)currentPullerStatusForInbox:(int)a0;
- (void)destroyTIMXSDKInstance;
- (void)setupTIMXSDKInstance;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

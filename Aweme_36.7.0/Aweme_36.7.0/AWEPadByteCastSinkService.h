@class NSString, MMKV;

@interface AWEPadByteCastSinkService : NSObject <AWEPadByteCastSinkService, BDCastSinkManagerDelegate>

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
+ (id)getService;

- (void)startCastSinkService;
- (id)manufacturerText;
- (void)landingWithMessage:(id)a0 serviceInfo:(id)a1;
- (void)routerWithMessage:(id)a0;
- (void)showAuthorizeDialogWithMessage:(id)a0 serviceInfo:(id)a1;
- (id)trackCommParamWithSchema:(id)a0;
- (id)castSinkManager:(id)a0 sdkType:(long long)a1 onRcvMessage:(id)a2 serviceInfo:(id)a3;
- (id)castSinkManager:(id)a0 getBrowseDataWithSdkType:(long long)a1 serviceInfo:(id)a2;
- (void)handlePrivacyPolicyAgreeNotification:(id)a0;
- (void).cxx_destruct;
- (void)startService;
- (id)weakTarget;

@end

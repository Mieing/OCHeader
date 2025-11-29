@class NSString;

@interface AWEPayJsBridgeService : HTSService <WXApiDelegate, HTSService, AWEPayJsBridgeServiceInterface>

@property (copy, nonatomic) id /* block */ alipayCallback;
@property (copy, nonatomic) id /* block */ wxpayCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEECModuleServiceDOUYINHTSAdaperClass;

- (void)payWithAlipay:(id)a0 completion:(id /* block */)a1;
- (void)payWithWeChatPay:(id)a0 completion:(id /* block */)a1;
- (void)launchMiniProgramWithWechat:(id)a0 completion:(id /* block */)a1;
- (void)preparePayWithOrderID:(id)a0 completion:(id /* block */)a1;
- (BOOL)handleAppOpenUrl:(id)a0;
- (BOOL)handleAppContinueUserActivity:(id)a0;
- (id)aAWEECModuleServiceDOUYINLiteAdaper;
- (id)aAWEECModuleServiceDOUYINHTSAdaper;
- (void)weChatOnResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

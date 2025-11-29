@class NSString, AWELivePayDeskDelegate;
@protocol AWEYAPModuleService;

@interface AWELiveCJPayServiceImpl : NSObject <AWEYAPAPIDelegateProtocol, IESLiveCJPayService>

@property (copy, nonatomic) id /* block */ authCallBack;
@property (retain, nonatomic) AWELivePayDeskDelegate *payDeskCallback;
@property (retain, nonatomic) id<AWEYAPModuleService> payService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onResponse:(id)a0;
- (id)safeUrlBase64Encode:(id)a0;
- (id)safeUrlBase64Decode:(id)a0;
- (void)openH5CashDeskWithOrderInfo:(id)a0 merchantId:(id)a1 appId:(id)a2 cashDeskStyle:(long long)a3 completion:(id /* block */)a4;
- (void)openH5ModalViewFrom:(id)a0 toUrl:(id)a1;
- (void)openUniversalPayDeskWithParams:(id)a0 callback:(id /* block */)a1;
- (id)getComponentsWithURLString:(id)a0;
- (unsigned long long)liveResultTypeWith:(long long)a0;
- (unsigned long long)liveAuthCallbackTypeWith:(long long)a0;
- (void)openWithdrawWithURL:(id)a0;
- (void)authYapila:(id)a0 callback:(id /* block */)a1;
- (void)preloadPayChannelInfoWithAppId:(id)a0 merchantId:(id)a1 userId:(id)a2 exts:(id)a3;
- (void)openAuthDeskWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)openSetPasswordDeskWithParams:(id)a0 useNavigationController:(id)a1 callBack:(id /* block */)a2;
- (void)enableBOE:(id)a0 prod:(id)a1;
- (void)openPayDeskWithConfig:(id)a0 orderParams:(id)a1 openCallback:(id /* block */)a2 payCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end

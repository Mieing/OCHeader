@class NSString, NSMutableArray;

@interface CJPayECManager : NSObject <CJPayEcommerceDeskService>

@property (nonatomic) BOOL isInPaying;
@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (BOOL)wakeByUniversalPayDesk:(id)a0 withDelegate:(id)a1;
- (void)i_openEcommercePayDeskWithParams:(id)a0 delegate:(id)a1;
- (void)i_openECLargePayDeskWithParams:(id)a0 delegate:(id)a1;
- (void)i_openECDirectBankDeskWithParams:(id)a0 delegate:(id)a1;
- (void)p_openEvokeManagedECPayDeskWithParams:(id)a0 delegate:(id)a1;
- (void)extractFields:(id)a0 completion:(id /* block */)a1;
- (long long)p_sceneWithParams:(id)a0;
- (void)p_callBackForbiddenEvokeWithDelegate:(id)a0;
- (void)i_openPublicLargePayDeskWithParams:(id)a0 delegate:(id)a1;
- (void)p_largePayAndDirectBankCallback:(long long)a0 errorMsg:(id)a1 appId:(id)a2 merchantId:(id)a3 delegate:(id)a4;
- (void)delayRleasePayingState;
- (void).cxx_destruct;

@end

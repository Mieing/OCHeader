@class HTSLiveApi, NSString;
@protocol HTSLiveViewHierarchyProvider;

@interface IESLiveChargePiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> viewProvider;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void)processOpenLiveRechargeWithResult:(id)a0 callBack:(id /* block */)a1 rechargeDiamondChange:(id /* block */)a2 paySuccess:(id /* block */)a3 payClose:(id /* block */)a4 extendParams:(id)a5;
- (void)monitorBridgeName:(id)a0 type:(id)a1 isSucc:(BOOL)a2;
- (id /* block */)getRechargeStatusCallHandler;
- (id /* block */)fetchOrderIdCallHandler;
- (id /* block */)openLiveRechargeCallHandler;
- (id /* block */)updateWalletInfoCallHandler;
- (void).cxx_destruct;

@end

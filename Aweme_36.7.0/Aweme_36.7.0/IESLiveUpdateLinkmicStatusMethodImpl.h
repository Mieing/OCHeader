@class IESLiveInteractDynamicGlobalJSBHandler;

@interface IESLiveUpdateLinkmicStatusMethodImpl : IESLiveUpdateLinkmicStatusMethod

@property (retain, nonatomic) IESLiveInteractDynamicGlobalJSBHandler *globalHandler;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)callback:(id)a0 error:(id)a1 param:(id)a2 completion:(id /* block */)a3;
- (id)renderLynxView;
- (unsigned long long)callReuseWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveImageToAlbum:(id)a0 context:(id)a1 param:(id)a2 completion:(id /* block */)a3;
- (void)checkLinkmicPermission:(id)a0 context:(id)a1 completed:(id /* block */)a2;
- (void)notifyOrderSingStageReady:(BOOL)a0;
- (void)checkLinkmicEnableWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

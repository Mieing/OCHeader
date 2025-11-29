@class IESGCPCGTXPCLoginViewProvider, NSString, IESGCPCGTXPCLoginInterceptor;

@interface IESGCPCGTXPCLoginComponent : IESGCPCGTXLoginComponent <IESGCPCGTXPCLoginRouter, IESGCPCGInstanceActions>

@property (retain, nonatomic) IESGCPCGTXPCLoginViewProvider *lynxViewProvider;
@property (nonatomic) int loginStatus;
@property (retain, nonatomic) IESGCPCGTXPCLoginInterceptor *responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 stageDidChangeFrom:(long long)a1 toStage:(long long)a2 info:(id)a3;
- (void)playInstance:(id)a0 didReceiveRTCCustomMessage:(id)a1;
- (void)componentDidAttached;
- (void)preloadTXPCLoginView;
- (void)launchBeforeInitLoginWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, IESLivePuzzleHybridRouter;
@protocol IESLiveWebViewService, IESLiveMonitor, IESLiveLynxService;

@interface IESLiveHybridContainerFactoryImpl : NSObject <IESLiveHybridContainerFactory>

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveLynxService> lynxService;
@property (retain, nonatomic) IESLivePuzzleHybridRouter *hybridRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveHybirdContainerVCWithURL:(id)a0;
- (id)fullscreenWebVCWithURL:(id)a0 kernalType:(unsigned long long)a1 delegate:(id)a2;
- (id)fullscreenWebVCWithURL:(id)a0 kernalType:(unsigned long long)a1 delegate:(id)a2 style:(id)a3;
- (id)PiperWebViewWithURL:(id)a0;
- (id)PiperWebViewWithURL:(id)a0 routerParam:(id)a1;
- (void)prepareForUse:(id)a0;
- (id)lynxViewWithURL:(id)a0 initialData:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 fallbackURL:(id)a3;
- (id)lynxViewWithURL:(id)a0 routerParam:(id)a1 initialData:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 fallbackURL:(id)a4;
- (id)hybridContainerWithSchema:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2 lifeCycleDelegate:(id)a3;
- (id)hybridContainerWithURL:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 kernalType:(unsigned long long)a2 context:(id)a3 lifeCycleDelegate:(id)a4;
- (id)injectedPiperHandlersForKernal:(unsigned long long)a0;
- (void)registerBridgeWithKitView:(id)a0;
- (id)webcastPiperHandlers;
- (void).cxx_destruct;

@end

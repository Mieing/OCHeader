@class IESLiveDynamicGiftModel, IESLiveRebornGiftAnimationNode, NSString, IESLiveGiftCanvasListenerManager, UIView, UIViewController;
@protocol IESLiveURLSchemaHandler, IESHYContainerProtocol, IESHYControllerProtocol, IESLiveGiftFullLinkMonitor, IESLivePerfSampler, IESLiveInternalRouter;

@interface IESLiveLynxAssetAndDynamicBasePlayer : NSObject <IESHYControllerDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) UIViewController<IESHYControllerProtocol> *hybridContainer;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *anniexContainer;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double containerLoadDuration;
@property (retain, nonatomic) IESLiveGiftCanvasListenerManager *canvasListenerManager;
@property (copy, nonatomic) id /* block */ playCompleteWithStats;
@property (nonatomic) long long lynxLoadFailed;
@property (nonatomic) BOOL enableMonitor;
@property (retain, nonatomic) IESLiveDynamicGiftModel *dynamicGiftModel;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *animationNode;
@property (retain, nonatomic) id<IESLiveGiftFullLinkMonitor> giftFullLinkMonitor;
@property (copy, nonatomic) id /* block */ pendingLynxDataUpdateBlock;
@property (nonatomic) BOOL lynxViewLoadFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)iesHYControllerDidStartLoad:(id)a0;
- (void)iesHYControllerDidFinishLoad:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)closePlayer;
- (void)destroyContainer;
- (id)openHybridURL:(id)a0 fromInside:(BOOL)a1;
- (void)stopDynamicGiftWithError:(id)a0;
- (void)showDynamicGiftWebViewWith:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)openLynxGiftConsoleWithSchema:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)stopRunPerformSampler;
- (void)showDynamicGiftAnimationWithModel:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)didFinishPlayingDynamicGiftWithError:(id)a0;
- (void)forceQuitPlayer;
- (void)runPerformSampler;
- (void)customizedDynamicGiftWithModel:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)openLynxGiftConsoleWithAnniex:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (id)openHybridURL:(id)a0 fromInside:(BOOL)a1 playCompleteWithStats:(id /* block */)a2;
- (void)handleDynamicGiftConsoleFallBack;
- (void)addPerfListener:(id)a0 createTime:(double)a1;
- (void)stopPerfListener;
- (void)containerDidLoadFailed:(id)a0;
- (void)containerDidLoadSucceed;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)stopEngine;

@end

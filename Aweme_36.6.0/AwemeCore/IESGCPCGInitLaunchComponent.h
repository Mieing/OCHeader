@class IESGCPCGInitLaunchLastInterceptor, NSString, IESGCPCGInitLaunchBizNotAllowedInterceptor, IESGCPTimer, IESGCPCGInterceptorManager, IESGCPXPlayGameAPI, XPlayConfiguration;

@interface IESGCPCGInitLaunchComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInitLaunchRouter, IESGCPCGInstanceActions>

@property (retain, nonatomic) XPlayConfiguration *configuration;
@property (nonatomic) BOOL isLaunchFailed;
@property (copy, nonatomic) NSString *launchFailMsg;
@property (nonatomic) long long launchFailCode;
@property (retain, nonatomic) IESGCPTimer *pollingTimer;
@property (nonatomic) long long pollingTimerCount;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IESGCPCGInterceptorManager *launchInterceptor;
@property (retain, nonatomic) IESGCPCGInterceptorManager *launchBeforeInitInterceptor;
@property (retain, nonatomic) IESGCPCGInitLaunchLastInterceptor *lastResponder;
@property (retain, nonatomic) IESGCPCGInitLaunchBizNotAllowedInterceptor *bizNotAllowedResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)addInterceptor:(id)a0;
- (id)_clientLibraLabel;
- (id)_clientDebugInfo;
- (void)didSetGameCPDIContext;
- (void)startLaunchWithCompletion:(id /* block */)a0;
- (void)addInterceptorBeforeInit:(id)a0;
- (id)createInterceptorOutputWithCode:(long long)a0 msg:(id)a1 stopReason:(id)a2;
- (void)playInstance:(id)a0 didTerminatedWithMethod:(long long)a1 fromStage:(long long)a2 code:(long long)a3 reason:(id)a4 info:(id)a5;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)componentDidAttached;
- (void)_notifyInitResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 stopReason:(id)a3 info:(id)a4;
- (void)_loadXPlayItem;
- (id)_buildConfiguration;
- (void)_loadXPlayItemWithConfiguration:(id)a0;
- (id)_fetchBusinessParamsFromInitResultInfo:(id)a0;
- (id)_buildXPlayAppExtra;
- (id)_buildXPlayExtra;
- (id)_buildXPlayInnerExtra;
- (void)_addSafeArea:(id)a0;
- (id)_serializationABTestJSONData;
- (id)_findMatchingConfigForPackage;
- (void).cxx_destruct;
- (id)init;

@end

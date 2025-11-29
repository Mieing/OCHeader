@class AWEGrouponLifeFeedsLynxDelayCheckSizeTask, NSMutableDictionary, NSDictionary, NSString;

@interface AWEGrouponLifeFeedsLynxPlugin : AWEGrouponLifeFeedsBasePlugin <BDXContainerLifecycleProtocol, AWEGrouponLifeFeedsLynxItemDelegate, LynxViewLifecycle>

@property (copy, nonatomic) NSDictionary *lynxViewModelMap;
@property (retain, nonatomic) NSMutableDictionary *loadCostMap;
@property (retain, nonatomic) NSMutableDictionary *sectionMap;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (retain, nonatomic) AWEGrouponLifeFeedsLynxDelayCheckSizeTask *delayCheckSizeTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidUpdate:(id)a0;
- (void)containerDidPageUpdate:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)unregisterBDXSubscriber;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)bindStateAndAction;
- (void)bindPageViewModel:(id)a0 incrementNodeTags:(id)a1;
- (void)willReloadPage;
- (void)dormancyLynxView:(id)a0 viewModel:(id)a1;
- (id)lynxViewItemWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })lynxViewSizeFromLynxView:(id)a0;
- (void)delayCheckSize;
- (BOOL)isLynxViewReady:(id)a0 viewModel:(id)a1;
- (void)delayHeightCheckTimerAction;
- (id)lynxCardWithClass:(Class)a0 sessionId:(id)a1 reuseIdentifier:(id)a2 originURL:(id)a3 builder:(id /* block */)a4;
- (void)lynxViewIsReady:(id)a0 isDelay:(BOOL)a1;
- (void)subscribeBDXEvents;
- (void)predecodeLynxTemplates;
- (id)sectionWithViewModel:(id)a0;
- (id)annieXLynxCardViewWithViewModel:(id)a0;
- (id)sectionWithReuseIdentifier:(id)a0;
- (id)findLynxItemByContainerId:(id)a0;
- (id)createAnniexCardViewWithViewModel:(id)a0;
- (void)dormancyAll;
- (void)subscribeLynxSubscribeAction;
- (void)subscribeLynxDispatchAction;
- (void)subscribeLynxListRefreshAction;
- (void)subscribeDeleteCardAction;
- (void)subscribeLynxAdCardClickAction;
- (void)subscribeLynxSubscribeActionHandler:(id)a0;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (id)findLynxSectionByContainerId:(id)a0;
- (void)subscribeLynxDispatchActionHandler:(id)a0;
- (void)subscribeDeleteCardActionHandler:(id)a0;
- (void)subscribeAdCardClickActionHandler:(id)a0;
- (BOOL)isKindOfLynxComponentVM:(id)a0;
- (id)findLynxComponentViewModel;
- (id)findLynxViewModelBySessionId:(id)a0;
- (void)trackLynxLoadResultMonitor:(id)a0 url:(id)a1 error:(id)a2;
- (void)trackLynxLoadCostWithVM:(id)a0 startLoadTime:(double)a1 url:(id)a2;
- (BOOL)isKindOfAnnieXLynxCardView:(id)a0;
- (void)tabChanged;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

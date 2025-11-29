@class NSMutableDictionary, NSDictionary, AWELifeFeedsLynxDelayCheckSizeTask, NSString;

@interface AWELifeFeedsLynxPlugin : AWELifeFeedsBasePlugin <BDXContainerLifecycleProtocol, AWELifeFeedsLynxItemDelegate>

@property (copy, nonatomic) NSDictionary *lynxViewModelMap;
@property (retain, nonatomic) NSMutableDictionary *sectionMap;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (retain, nonatomic) AWELifeFeedsLynxDelayCheckSizeTask *delayCheckSizeTask;
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
- (void)unregisterBDXSubscriber;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)bindStateAndAction;
- (void)bindPageViewModel:(id)a0 incrementNodeTags:(id)a1;
- (void)willReloadPage;
- (void)dormancyLynxView:(id)a0 viewModel:(id)a1;
- (id)lynxViewItemWithViewModel:(id)a0;
- (BOOL)isLynxViewReady:(id)a0 viewModel:(id)a1;
- (void)delayHeightCheckTimerAction;
- (void)lynxViewIsReady:(id)a0 isDelay:(BOOL)a1;
- (void)subscribeBDXEvents;
- (void)predecodeLynxTemplates;
- (id)sectionWithViewModel:(id)a0;
- (id)findLynxItemByContainerId:(id)a0;
- (void)dormancyAll;
- (void)subscribeLynxSubscribeAction;
- (void)subscribeLynxDispatchAction;
- (void)subscribeDeleteCardAction;
- (void)subscribeLynxAdCardClickAction;
- (void)subscribeLynxSubscribeActionHandler:(id)a0;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (id)findLynxSectionByContainerId:(id)a0;
- (void)subscribeLynxDispatchActionHandler:(id)a0;
- (void)subscribeDeleteCardActionHandler:(id)a0;
- (void)subscribeAdCardClickActionHandler:(id)a0;
- (void)trackLynxLoadResultMonitor:(id)a0 url:(id)a1 error:(id)a2;
- (struct CGSize { double x0; double x1; })lynxViewSizeFromContainer:(id)a0;
- (void)delayCheckSize:(id)a0 lynxView:(id)a1;
- (id)lynxCardViewWithViewModel:(id)a0;
- (id)createCardViewWithViewModel:(id)a0;
- (id)findLynxViewModelByLynxContainer:(id)a0;
- (void)tabChanged;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

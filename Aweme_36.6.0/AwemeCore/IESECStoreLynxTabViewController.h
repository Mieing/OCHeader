@class UIView, NSString, IESECShopHybridTabPerfLog, IESECStoreLynxDynamicComponentFetcher, NSMutableDictionary, IESECShopTabModel, IESECServiceProxy, IESECStorePageContext;
@protocol IESHYContainerProtocol, IESECStoreContainerProtocol, IESECShopPageContextV2, IESECShopHybridService;

@interface IESECStoreLynxTabViewController : IESECBaseShopTabViewController <IESHYHybridViewLifecycleProtocol, LynxScrollListener, IESECShopTabElementProtocol> {
    id<IESECShopPageContextV2> _contextV2;
}

@property (retain, nonatomic) IESECShopTabModel *tabModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) NSMutableDictionary *lynxViews;
@property (retain, nonatomic) NSMutableDictionary *lynxViewsContentOffSet;
@property (copy, nonatomic) id /* block */ scrollCallBack;
@property (retain, nonatomic) IESECStoreLynxDynamicComponentFetcher *dynamicComponentFetcher;
@property (retain, nonatomic) IESECShopHybridTabPerfLog *perfLog;
@property (nonatomic) unsigned long long prehotScene;
@property (nonatomic) BOOL appearFirstTime;
@property (retain, nonatomic) IESECServiceProxy<IESECShopHybridService> *hybridService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidPageUpdate;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)registerBridge:(id)a0;
- (void)scrollerWillBeginDragging:(id)a0;
- (void)scrollerDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollerDidEndDecelerating:(id)a0;
- (void)addHandler;
- (void)tabScrollViewDidScrollCallback:(id /* block */)a0;
- (id)tabScrollViews;
- (void)trackStayWithEventName:(id)a0 duration:(long long)a1;
- (BOOL)enableAnnieX;
- (id)initWithPageContext:(id)a0 contextV2:(id)a1;
- (void)updateWithPreloadTabModel:(id)a0;
- (void)__createHybridView;
- (BOOL)enablePreviewMonitor;
- (void)p_stopPreviewPerfMonitor;
- (id)__initialData;
- (BOOL)__hasComponentsData;
- (void)__setupModelWithDictionary:(id)a0;
- (void)p_requestTabDataWithTabModel:(id)a0 completion:(id /* block */)a1;
- (void)__updateInnerScrollView;
- (id)scrollViewIds;
- (void)__contentOffsetDidChange:(id)a0;
- (void)__trackLoadContentUrl:(BOOL)a0 error:(id)a1 localErrDomain:(long long)a2 localErrCode:(long long)a3;
- (void)__loadHybridContainerWithtabModel:(id)a0;
- (void)__prefetchLynxTemplate:(id)a0;
- (void)validateTabModel:(id)a0;
- (BOOL)__switchToTabType:(long long)a0 params:(id)a1 passThroughAPI:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end

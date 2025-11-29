@class AWEPOIShelfListSeeMoreView, BDXThreadSafeDictionary, DitoPageContext, AWELynxEmbeddedEngine, AWEPOIShelfModuleModel, AWEPOIProductListModel, NSString, NSObject, AWEPOIShelfContainerComponentViewModel, BDXThreadSafeArray;
@protocol AWEPOIShelfListViewDelegate, OS_dispatch_semaphore;

@interface AWEPOIShelfListView : UIView <LynxViewLifecycle>

@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (retain, nonatomic) AWEPOIProductListModel *productListModel;
@property (retain, nonatomic) AWEPOIShelfListSeeMoreView *seeMoreView;
@property (retain, nonatomic) BDXThreadSafeDictionary *itemHeightMap;
@property (retain, nonatomic) BDXThreadSafeArray *embeddedViewList;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) double startTime;
@property (retain, nonatomic) AWELynxEmbeddedEngine *embeddedEngine;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<AWEPOIShelfListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxViewDidFirstScreen:(id)a0;
- (void)lynxViewDidStartLoading:(id)a0;
- (void)lynxView:(id)a0 didLoadFinishedWithUrl:(id)a1;
- (void)lynxViewDidPageUpdate:(id)a0;
- (void)lynxViewDidConstructJSRuntime:(id)a0;
- (void)lynxViewDidUpdate:(id)a0;
- (void)lynxViewDidChangeIntrinsicContentSize:(id)a0;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)loadWithModel:(id)a0 shelfModuleModel:(id)a1 productListModel:(id)a2 delegate:(id)a3;
- (void)buildEmbeddedShelf;
- (void)buildSpuListIfNeeds;
- (void)buildSeeMoreViewIfNeeds;
- (BOOL)hasProductItem:(id)a0;
- (id)buildEmbeddedItem:(id)a0 index:(long long)a1;
- (void)viewHeightChangeIfNeeds;
- (id)spuCardParamsWithItem:(id)a0 index:(long long)a1;
- (void)seeMoreViewTapAction:(BOOL)a0;
- (void)updateLayout;
- (void).cxx_destruct;

@end

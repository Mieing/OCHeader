@class IESLLPOIShelfContainerComponentViewModel, IESLLPOIProductListModel, BDXThreadSafeDictionary, IESLLLynxEmbeddedEngine, NSString, LLDitoPageContext, NSObject, IESLLPOIShelfListSeeMoreView, BDXThreadSafeArray, IESLLPOIShelfModuleModel, LynxViewGroup;
@protocol IESLLPOIShelfListViewDelegate, OS_dispatch_semaphore;

@interface IESLLPOIShelfListView : UIView <LynxViewLifecycle>

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
@property (retain, nonatomic) IESLLPOIProductListModel *productListModel;
@property (retain, nonatomic) LynxViewGroup *lynxViewGroup;
@property (retain, nonatomic) IESLLPOIShelfListSeeMoreView *seeMoreView;
@property (retain, nonatomic) BDXThreadSafeDictionary *itemHeightMap;
@property (retain, nonatomic) BDXThreadSafeArray *embeddedViewList;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) double startTime;
@property (retain, nonatomic) IESLLLynxEmbeddedEngine *embeddedEngine;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<IESLLPOIShelfListViewDelegate> delegate;
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

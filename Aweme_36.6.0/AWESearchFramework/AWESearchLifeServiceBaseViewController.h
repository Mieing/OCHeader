@class UIView, AWESearchResultCachalotDataResponse, AWESearchResultRefreshHeader, NSString, AWESearchResultViewController, NSDictionary, AWESearchSchemaModel, AWESearchLoadMoreFooter, AWESearchCachalotDataController, AWESearchLifeCommonPatchManager, AWESearchCachalotResultContext;
@protocol SearchCachalotViewInterface, BDXViewContainerProtocol;

@interface AWESearchLifeServiceBaseViewController : AWESearchResultVerticalBaseViewController <AWESearchLifeServiceBaseViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *commonPassWithFilterParams;
@property (retain, nonatomic) AWESearchLifeCommonPatchManager *commonPatchManager;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *couponPopUpView;
@property (readonly, nonatomic) AWESearchResultCachalotDataResponse *dataResponse;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (retain, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView<SearchCachalotViewInterface> *cachalotView;
@property (readonly, nonatomic) AWESearchCachalotDataController *dataController;
@property (weak, nonatomic) AWESearchResultViewController *searchResultViewController;
@property (readonly, nonatomic) AWESearchResultRefreshHeader *refreshHeaderView;
@property (readonly, nonatomic) AWESearchLoadMoreFooter *footerView;
@property (readonly, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (nonatomic) BOOL isSearchLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsProviders;

- (BOOL)useParamsProvider;
- (void)paramsContextDidReady:(id)a0;
- (void)chunkHandleClearResponse:(id /* block */)a0;
- (Class)customLoadmoreFooterClass;
- (void)chunkHandleReciverCardsPatchResponse:(id)a0;
- (void)prepareRequestDataWithKeyWord:(id)a0 extraLogParams:(id)a1 isFilterSearch:(BOOL)a2;
- (void)prepareRequestDataWithKeyWordServiceOnly:(id)a0 extraLogParams:(id)a1 isFilterSearch:(BOOL)a2;
- (id)lifeServiceManager;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWEEcomSearchModuleService : HTSService <HTSService, AWEEcomSearchModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSearchHistory:(id)a0;

- (Class)merchandiseViewControllerClass;
- (Class)ecomSearchLynxBaseCellClass;
- (Class)ecomSearchLiveTabViewControllerClass;
- (BOOL)SRPOptimizeWithResponder:(id)a0;
- (BOOL)isGeckoSearchDynamicWithScene:(id)a0;
- (id)progressSearchDynamic:(id)a0 schema:(id)a1 searchScene:(id)a2;
- (void)trackLynxLoadInfoWithModel:(id)a0 searchScene:(id)a1;
- (void)ecomSearchShowComponentWithContainer:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)searchGoodsScanViewControllerWithImage:(id)a0 extra:(id)a1;
- (id)createLiveGoodsCellInEcomLivePhotoSearchPanel:(BOOL)a0;
- (id)createSketchViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 geckoImageName:(id)a1 type:(unsigned long long)a2;
- (id)createDoubleMerchandiseDataProvider;
- (id)createDoubleMerchandiseResourceLoader;
- (Class)getPendantHelper;
- (id)getSuspensionLayer;
- (Class)getApiUpgradeAdapter;
- (id)getWrapperProductOuterContextProviderWithLynxTransitionView:(id)a0 delegate:(id)a1;
- (BOOL)isSaasEcomSearchResultPageShowing:(id)a0;
- (void)ecSearchHookEvent:(id)a0 withParams:(id)a1;
- (id)ecSearchHookConfig;
- (void)saveEcomVirtualWords:(id)a0;
- (id)getEcomVirtualWordsWithType:(id)a0;
- (id)getEcomVirtualWordsSessionId;
- (void)pullEcomSearchGeckoPreload:(id)a0;
- (void)pullEcomSearchGeckoPreloadWithMall;
- (id)identifierForPreRequestWithRootTag:(id)a0;
- (id)loadEcommerceTabModels;
- (id)loadEcomLiveSearchTabModels;
- (id)loadEcomSceneViewControllers;
- (id)imageSearchResultsViewControllerWithGoodsImage:(id)a0 extra:(id)a1;
- (id)merchandiseViewController;
- (id)ecommerceSearchLiveTabViewController;
- (id)ecommerceSearchBigSaleTabViewController;
- (id)ecommerceSearchContentTabViewController;
- (id)ecommerceSearchInstantTabViewController;
- (Class)merchandiseUserWindowCellClass;
- (Class)merchandiseTextTagCellClass;
- (id)middlePagePrefetcher:(id)a0;
- (id)getEstimatedHeightWithPatchModel:(id)a0;
- (void)setEstimatedHeight:(id)a0 withPatchModel:(id)a1;
- (id)createPhotoSearchResultsViewControllerWithExtraDict:(id)a0;

@end

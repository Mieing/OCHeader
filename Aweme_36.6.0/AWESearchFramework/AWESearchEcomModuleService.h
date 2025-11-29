@class NSString;

@interface AWESearchEcomModuleService : NSObject <AWESearchEcomBundleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)merchandiseViewControllerClass;
- (Class)ecomSearchLynxBaseCellClass;
- (Class)ecomSearchLiveTabViewControllerClass;
- (id)cachalotMallViewController;
- (Class)topUserAdCellClass;
- (id)makeStoreViewController:(id)a0;
- (BOOL)SRPOptimizeWithResponder:(id)a0;
- (BOOL)isGeckoSearchDynamicWithScene:(id)a0;
- (id)progressSearchDynamic:(id)a0 schema:(id)a1 searchScene:(id)a2;
- (void)trackLynxLoadInfoWithModel:(id)a0 searchScene:(id)a1;
- (id)createPhotoSearchLynxPipelinePreprocessClass:(Class)a0;
- (void)handleFlowPreRequest:(id)a0;
- (void)handlePreRequest:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleDiscardedPreRequest:(id)a0;
- (id)chunkRequestManagerForIdentifier:(id)a0;
- (id)preRequestForIdentifier:(id)a0;
- (void)removeCSPChunkRequestManagerForIdentifier:(id)a0;
- (void)ecomSearchShowComponentWithContainer:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)searchGoodsScanViewControllerWithImage:(id)a0 extra:(id)a1;
- (id)ecommerceSearchLynxMiddleViewController;
- (id)createModernFeedRecommWordsViewController:(id)a0;
- (Class)cachalotMallViewControllerClass;

@end

@interface IESECShopHybridPageVC : UIViewController <IESECShopSLICardController, IESECShopHybridPageVCProtocol> {
    void /* unknown type, empty encoding */ DIContext;
    void /* unknown type, empty encoding */ pageConfig;
    void /* unknown type, empty encoding */ sliceXContentView;
    void /* unknown type, empty encoding */ sliceXDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_apiService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_exprService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_configService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageCardService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sliceService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monitorService;
    void /* unknown type, empty encoding */ isFirstViewAppeared;
}

+ (void)preloadResourcesWithSlicePageURL:(id)a0 bizIdentify:(id)a1;

- (id)sliceUniqueID;
- (void)sliceXContentView:(id)a0 didFinishLoad:(BOOL)a1;
- (void)sliceXContentView:(id)a0 didLoadFail:(id)a1;
- (void)hybridList:(id)a0 cellWillDisplay:(id)a1 sliceKey:(id)a2 source:(unsigned long long)a3 section:(long long)a4 index:(long long)a5 isFirstShow:(BOOL)a6 lynxUrl:(id)a7;
- (void)hybridList:(id)a0 cellWillEndDisplay:(id)a1 sliceKey:(id)a2 source:(unsigned long long)a3 section:(long long)a4 index:(long long)a5;
- (void)hybridList:(id)a0 cellDidSelect:(id)a1 sliceKey:(id)a2 section:(long long)a3 index:(long long)a4;
- (void)hybridList:(id)a0 shouldLoadMore:(unsigned long long)a1 sliceKey:(id)a2;
- (id)btmResponder;
- (void)fetchFirstScreenApisWithExtraParamsMap:(id)a0;
- (void)bindSlicePageDataSource:(id)a0 itemStates:(id)a1 mergeOrigin:(BOOL)a2;
- (id)getSliceElementViewWithKey:(id)a0 error:(id *)a1;
- (id)resolveSliceService;
- (void)sendJSEvent:(id)a0 params:(id)a1;
- (void)updateECExtraGlobalProps:(id)a0;
- (void)registerSlicePageBizObjectWithKey:(id)a0 bizObj:(id)a1;
- (void)appendCustomExprEnvData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWith:(id)a0;

@end

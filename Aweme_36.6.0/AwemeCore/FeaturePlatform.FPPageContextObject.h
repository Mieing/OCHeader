@protocol IESServiceProvider;

@interface FeaturePlatform.FPPageContextObject : NSObject <ACCFPPageContextProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_combinedServiceProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ page;
    void /* unknown type, empty encoding */ scopeContext;
}

@property (nonatomic, retain) id<IESServiceProvider> combinedServiceProvider;
@property (nonatomic, readonly) id<IESServiceProvider> fpOCServiceProvider;
@property (nonatomic, retain) id<IESServiceProvider> fpSwiftRootDIContainer;

- (void)handleViewDidAppear;
- (void)customLoadOperate:(id)a0;
- (void)applicationDidChangeStatusBarOrientation;
- (void)bindViewControllerWith:(id)a0;
- (void)handleViewDidLoad:(id)a0;
- (void)handleViewWillDisappear;
- (void)loadComponentsWithCustomPhase:(id)a0;
- (void)configLegacyComponentManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleViewWillAppear;
- (void)handleViewDidDisappear;

@end

@class NSString, BDPUniqueID;
@protocol BDPRuntimeServiceLoader;

@interface BDPDynamicPluginRuntimeLoader : NSObject <BDPRuntimeServiceLoader>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<BDPRuntimeServiceLoader> appRuntimeLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loaderWithUniqueID:(id)a0;

- (void)loadServiceJSIfNeededForPagePath:(id)a0 completion:(id /* block */)a1;
- (id)initWithUniqueId:(id)a0 appRuntimeLoader:(id)a1;
- (void)loadIndustryServiceAndPluginJSIfNeededForID:(id)a0 completion:(id /* block */)a1;
- (BOOL)needLoadIndustryServiceJsWithPageConfig:(id)a0 model:(id)a1;
- (void)loadIndustryAndPluginSDKIfNeededWithCompletion:(id /* block */)a0;
- (void)loadPluginSDKIfNeededWithCompletion:(id /* block */)a0;
- (void)loadServiceJSAfterAppServiceReadyIfNeededForPagePath:(id)a0 completion:(id /* block */)a1;
- (void)loadPluginJSIfNeededForID:(id)a0 completion:(id /* block */)a1;
- (void)loadIndustrySDKIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)industryExtendPath:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)loadStatus;

@end

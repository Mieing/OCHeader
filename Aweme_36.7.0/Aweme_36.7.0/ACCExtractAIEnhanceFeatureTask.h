@class ACCExtractFeatureConfig, ACCAIEnhanceFeatureCache, NSString, NSObject, ACCExtractCache, ACCDynamicJSManager, NPPresetRecommendService_OC;
@protocol OS_dispatch_queue;

@interface ACCExtractAIEnhanceFeatureTask : NSObject <ACCAIEnhanceJSModuleDelegate, ACCExtractFeatureRecommendServiceTaskProtocol>

@property (weak, nonatomic) NPPresetRecommendService_OC *recommendService;
@property (retain, nonatomic) ACCDynamicJSManager *jsManager;
@property (retain, nonatomic) ACCExtractFeatureConfig *config;
@property (weak, nonatomic) ACCAIEnhanceFeatureCache *resultCache;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ customCompletion;
@property (copy, nonatomic) NSString *cdnSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSString *extractFolderPath;
@property (weak, nonatomic) ACCExtractCache *cache;

+ (void)preloadResource;
+ (id)transformInputResults:(id)a0;

- (void)extractMaterialFeature:(id)a0 completion:(id /* block */)a1;
- (void)runAlgorithms:(id)a0;
- (void)p_extractMaterialWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0;

@end

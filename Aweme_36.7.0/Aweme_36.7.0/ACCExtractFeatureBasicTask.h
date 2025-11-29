@class ACCExtractCache, NSString, NSObject, NPPresetRecommendService_OC;
@protocol OS_dispatch_queue;

@interface ACCExtractFeatureBasicTask : NSObject <ACCExtractFeatureTaskProtocol>

@property (weak, nonatomic) NPPresetRecommendService_OC *service;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSString *extractFolderPath;
@property (weak, nonatomic) ACCExtractCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)extractMaterialFeature:(id)a0 completion:(id /* block */)a1;
- (void)p_extractMaterialVEFeature:(id)a0 completion:(id /* block */)a1;
- (void)p_extractMaterialCommonFeature:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;

@end

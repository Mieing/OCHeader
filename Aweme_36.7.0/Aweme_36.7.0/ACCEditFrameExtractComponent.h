@class ACCCameraSubscription, NSString;
@protocol ACCEditServiceProtocol;

@interface ACCEditFrameExtractComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCFrameExtractSubscriber, ACCEditFrameExtractServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) unsigned long long period;
@property (nonatomic) BOOL moreFrameDidUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sensorialRenderWithEditService:(id)a0;
- (void)extractDidFinishedWithResultModel:(id)a0;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)startFrameExtractAfterFirstRenderForSomeEnv;
- (void)startFrameExtractByUsingEditService:(id)a0;
- (void)p_didFinishFrameExtractWithModel:(id)a0;
- (void)p_recommendFrameExtractLocationDictWithModel:(id)a0;
- (void)notifyFrameExtractForSicily:(id)a0;
- (void)updateLoadMoreIfNeeded:(id)a0;
- (void)showToastWhenFrameExtractDidFinishWithResultModel:(id)a0 trackParams:(id)a1;
- (id)base64EncodedStringFromNumber:(double)a0;
- (id)p_buildFrameLocationDictWithModel:(id)a0;
- (id)modelsForAllMaterialModels:(id)a0 extractedModels:(id)a1;
- (void)trackWhenStartFrameExtract;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end

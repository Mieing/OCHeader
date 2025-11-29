@class ACCToolsPerformanceTracker, ACCResourcesUploadServiceImpl, NSString;
@protocol ACCEditServiceProtocol;

@interface ACCEffectUGCComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (retain, nonatomic) ACCResourcesUploadServiceImpl *resourceUploader;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCToolsPerformanceTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (id)p_transformToJsonStringWithUgcId:(id)a0;
- (void)bindServices:(id)a0;
- (void)uploadEffectUGCWithUploadParams:(id)a0;
- (void)trackEffectUgcDataCreation;
- (void).cxx_destruct;

@end

@class NSString, AWEPOIUploadCreationInfoManager;
@protocol ACCEditServiceProtocol;

@interface AWEEditPagePOIComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEPOIUploadCreationInfoManager *uploadCreationInfoManager;
@property (nonatomic) BOOL hasFirstRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sensorialRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

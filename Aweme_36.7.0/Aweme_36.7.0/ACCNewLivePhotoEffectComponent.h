@class ACCSideslipPropPanelApplyTrackerHelper, CKGenericTemplateModel, ACCSideslipPanelApplyContainer, ACCSideslipPanelLegacyEffectApplyHandler, NSString, ACCSideslipCanvasStyleUpdater, ACCSideslipPropPanelPropTryTrackerHelper, ACCSideslipPanelGenericTemplateApplyHandler;
@protocol ACCSideslipGenericTemplateService, ACCEditServiceProtocol, ACCRealLivePhotoService;

@interface ACCNewLivePhotoEffectComponent : ACCFeatureComponent <ACCRealLivePhotoServiceSubscriber>

@property (weak, nonatomic) id<ACCRealLivePhotoService> realLivePhotoService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCSideslipPanelApplyContainer *applyContainer;
@property (retain, nonatomic) ACCSideslipPanelLegacyEffectApplyHandler *legacyEffectApplyHandler;
@property (retain, nonatomic) ACCSideslipPanelGenericTemplateApplyHandler *genericTemplateApplyHandler;
@property (retain, nonatomic) ACCSideslipCanvasStyleUpdater *canvasStyleUpdater;
@property (retain, nonatomic) ACCSideslipPropPanelApplyTrackerHelper *applyTrackerHelper;
@property (retain, nonatomic) ACCSideslipPropPanelPropTryTrackerHelper *propTryTrackHelper;
@property (weak, nonatomic) id<ACCSideslipGenericTemplateService> genericTemplateService;
@property (weak, nonatomic) CKGenericTemplateModel *lastTemplateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)livePhotoDidChangeMode:(unsigned long long)a0;
- (void)livePhotoWillChangeMode:(unsigned long long)a0;
- (BOOL)hasAppliedTemplate;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (id)appliedTemplateModel;
- (BOOL)enable;
- (void).cxx_destruct;

@end

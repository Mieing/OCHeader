@class ACCAIUnifyLoadingViewModel;
@protocol ACCEditServiceProtocol, ACCSideslipGenericTemplateService, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCEditToolMusicEffectProtocol, ACCEditSpecialEffectServiceProtocol, ACCCTRServiceProtocol, ACCAIGCEffectServiceProtocol, ACCEditorOneClickFilmService, ACCSelectTemplateServiceProtocol;

@interface ACCAIUnifyLoadingComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCAIGCEffectServiceProtocol> aigcService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCSideslipGenericTemplateService> genericTemplateService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCEditToolMusicEffectProtocol> effectProtocol;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCSelectTemplateServiceProtocol> selectTemplateService;
@property (retain, nonatomic) ACCAIUnifyLoadingViewModel *viewModel;

- (void)componentWillAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

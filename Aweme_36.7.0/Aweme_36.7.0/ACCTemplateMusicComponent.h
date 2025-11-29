@class ACCTemplateMusicViewModel;
@protocol ACCEditSpecialEffectServiceProtocol, ACCMusicVolumeServiceProtocol, ACCEditorOneClickFilmingApplyDiffService, ACCEditOneClickFilmApplyServiceProtocol, ACCEditServiceProtocol;

@interface ACCTemplateMusicComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCTemplateMusicViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCMusicVolumeServiceProtocol> volumeService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> oneClickFilmApplyService;
@property (nonatomic) BOOL hasHandleWhenFirstRender;

- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (id)currentTemplateModel;
- (void)applyTemplateRecommendMusicIfNeeded;
- (void).cxx_destruct;

@end

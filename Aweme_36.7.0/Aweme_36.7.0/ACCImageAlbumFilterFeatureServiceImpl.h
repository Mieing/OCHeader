@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditorDraftService, ACCEditServiceProtocol, IESServiceProvider;

@interface ACCImageAlbumFilterFeatureServiceImpl : ACCImageAlbumFeatureService <ACCImageAlbumFilterFeatureServiceProtocol>

@property (retain, nonatomic) id<ACCEditorDraftService> draftService;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dowloadFilterWithEffectId:(id)a0 completion:(id /* block */)a1;

- (BOOL)applyFilter:(id)a0 indensity:(double)a1;
- (double)filterIndensity:(id)a0;
- (id)currentFilterHelper;
- (id)filterManager;
- (BOOL)applyFilter:(id)a0;
- (id)currentFilterId;
- (BOOL)enableFilterIndensity;
- (void)onUserSliderRatioValueChanged:(double)a0;
- (void)p_applyFilter:(id)a0 indensity:(float)a1;
- (double)p_cachedIndensityWithFilter:(id)a0;
- (double)p_filterSlideRatioWithFilter:(id)a0;
- (void)p_applyFilterForAllImageWithFilter:(id)a0;
- (id)currentColorFilterIntensityRatio;
- (void)autoApplyDefaultFilterForAllImagesWithCompletion:(id /* block */)a0;
- (void)p_applyFilter:(id)a0;
- (void).cxx_destruct;

@end

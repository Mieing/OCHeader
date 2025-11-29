@interface AWEPlayInteractionBulletPatchPOIElementViewModel : AWEPlayInteractionPersonElementViewModel

- (void)interactor_onBulletPatchPoiGuideTapped;
- (void)router_onBulletPatchPoiGuideTapped;
- (void)p_userDidTapBulletPatchPoiGuide:(BOOL)a0;
- (void)interactor_onBulletPatchPoiGuideCloseTapped;
- (void)router_onBulletPatchPoiGuideCloseTapped;
- (id)p_awemeAndUserRelatedKeyWithKey:(id)a0;
- (id)p_userRelatedKeyWithKey:(id)a0;
- (void)p_showPOILocationPicker;
- (void)userDidTapBulletPatchPoiGuide;
- (void)userDidTapCloseBulletPatchPoiGuide;
- (void)didShowBulletPatchPoiGuideView;
- (BOOL)canShowBulletPatchPoiGuideByFrequencyControl;
- (void)p_showNativeLocationPicker;
- (void)setUp;
- (void)cleanUp;

@end

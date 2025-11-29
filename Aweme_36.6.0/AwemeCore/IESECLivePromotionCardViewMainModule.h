@interface IESECLivePromotionCardViewMainModule : IESECLivePromotionCardCommonModule

- (void)trackShowEvent;
- (void)trackProductTagShowIfNeeded;
- (void)clickBlank;
- (id)p_goodsModelWithOrientationStatus:(id)a0;
- (void)setModuleContainer:(id)a0;
- (id)actionTrackerForBlankClicked;
- (void)trackBSTShowEvent:(id)a0 params:(id)a1;

@end

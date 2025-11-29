@interface AWEFeedTemplateAnchorEffectConfig : AWEFeedTemplateAnchorBaseConfig

- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorClick;
- (void)trackerForTemplateAnchorShow;
- (void)trackerForTemplateAnchorClick;
- (id)trackerCommonParamsForTemplateAnchor;
- (id)trackerParams;
- (void)routerToNextPage;
- (void)routerToDetailTrackerParams;
- (id)stickerDetailModel;
- (void)routerStickerShoot;
- (void)routerStickerDetail;
- (void)handleStickerShootError:(id)a0;

@end

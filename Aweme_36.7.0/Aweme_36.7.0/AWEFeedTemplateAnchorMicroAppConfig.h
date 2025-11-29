@interface AWEFeedTemplateAnchorMicroAppConfig : AWEFeedTemplateAnchorBaseConfig

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (void)trackerForTemplateAnchorShow;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)trackerForTemplateAnchorClick;
- (void)anchorConfigReset;
- (id)trackerCommonParamsForTemplateAnchor;
- (BOOL)forbidIronManPreloadInLowerDevice;
- (BOOL)enableIronManPreloadWithNunki;
- (id)detailTextTrackerParams;
- (void)trackAdAnchorEventWithLabel:(id)a0 refer:(id)a1 extraData:(id)a2;
- (id)templateAnchorTrackerParams;
- (id)clickTrackerParams;
- (id)microAppTrackParams;
- (BOOL)canPreloadIronMan;
- (id)microAppScene;
- (id)microAppCustomParams;
- (id)microAppBDPLogParams;

@end

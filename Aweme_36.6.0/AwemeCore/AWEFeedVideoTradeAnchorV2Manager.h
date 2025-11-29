@interface AWEFeedVideoTradeAnchorV2Manager : AWEFeedVideoBaseAnchorV2Manager

- (void)anchorViewWillShowOnSuperview;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (BOOL)shouldBusinessInvoke;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)didShowDoubleLineStyleAnchor;
- (void)trackAdPoiPointShow;
- (void)handlePlayerPlayedPeriodChanged:(double)a0;
- (void)handleDidEndDisplaying;
- (void)handleDidDisappear;
- (void)handleAppDidEnterBackground;
- (void)handleAnchorElementLeftInteractionShow;
- (void)handlePlayerPlayedLoopTimes:(unsigned long long)a0;
- (void)updateAnchorViewWithViewContext:(id)a0;
- (void)handlerTemplateAnchorViewClicked:(id)a0 extraInfo:(id)a1;
- (void)handleUserActionToShowTwoLine;
- (id)initWithViewContext:(id)a0;
- (id)p_createFeedTrackAnchorContext;
- (id)p_createFeedAnchorContext:(id)a0;
- (void)p_tradeAnchorRenderTimeTrackWithContext:(id)a0 scene:(id)a1;
- (void)trackTradeAdEventWithLabelName:(id)a0;
- (void)reset;

@end

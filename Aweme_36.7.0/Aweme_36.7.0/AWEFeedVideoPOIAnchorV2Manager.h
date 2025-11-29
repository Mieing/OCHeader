@class AWEFeedVideoLocalLifeAnchorV2PrefetchUtils;

@interface AWEFeedVideoPOIAnchorV2Manager : AWEFeedVideoBaseAnchorV2Manager

@property (retain, nonatomic) AWEFeedVideoLocalLifeAnchorV2PrefetchUtils *prefetchUtils;
@property (nonatomic) long long anchorPointClickIndex;
@property (nonatomic) BOOL filterResponderChain;

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
- (id)p_createFeedAnchorContext;
- (void)p_poiAnchorRenderTimeTrackWithContext:(id)a0 scene:(id)a1;
- (void)p_preloadIronManIfNeeded;
- (id)dataStringForDetailLabels;
- (id)dataStringForPoiTag;
- (void)trackClickADEventWithEventName:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end

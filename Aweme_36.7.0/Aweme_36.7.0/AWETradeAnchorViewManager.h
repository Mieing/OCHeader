@class AWELocalLifeAnchorModel, AWEPOITradeEntryAnchorView, AWEPOIItemAnchorContentModel, AWEAnchorIntentionalBehavior, NSDictionary, NSString;

@interface AWETradeAnchorViewManager : AWEBaseAnchorViewManager <AWEAnchorIntentionalBehaviorDelegate, AWEVideoPlayerBehaviorActionProtocol, AWEAnchorBehaviorActionProtocol>

@property (retain, nonatomic) AWELocalLifeAnchorModel *sourceData;
@property (retain, nonatomic) AWEPOIItemAnchorContentModel *anchorContentData;
@property (retain, nonatomic) AWEPOITradeEntryAnchorView *entryView;
@property (retain, nonatomic) AWEAnchorIntentionalBehavior *intentionalManager;
@property (copy, nonatomic) NSDictionary *internalExtraInfo;
@property (copy, nonatomic) id /* block */ hotZoneClickBlock;
@property (nonatomic) BOOL needCoverHotZoneClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickMultiAnchorEventHandler:(id /* block */)a0;
- (void)onAnchorClicked:(id)a0;
- (void)trackAdEventWithLabelName:(id)a0;
- (struct CGSize { double x0; double x1; })anchorViewSize;
- (void)updateAnchorExtraInfoWithExtraInfo:(id)a0;
- (void)triggerAnchorEvent:(long long)a0 extraInfo:(id)a1;
- (void)updateAnchorDataWithDataBuilder:(id)a0;
- (void)clickHotZoneAnchorEventHandler:(id /* block */)a0 needCoverDefaultEvent:(BOOL)a1;
- (BOOL)canShowSecondInfo;
- (void)trackAdPoiPointShow;
- (void)showAnchorDetailByIntentional;
- (void)anchorBehaviorActionClickWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionResetWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionWilShowWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionSuperViewAppearWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionSuperViewDisappearWithExtraInfo:(id)a0;
- (void)videoPlayerBehaviorActionPlayerPeriodChangeWithExtraInfo:(id)a0;
- (void)videoPlayerBehaviorActionPlayerFinishWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionSecondInfoExpandWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionSecondInfoExpandEndWithExtraInfo:(id)a0;
- (void)anchorBehaviorActionVideoDidEndDisplaying:(id)a0;
- (void)anchorBehaviorActionViewDidDisappear:(id)a0;
- (void)anchorBehaviorActionAppDidEnterBackground:(id)a0;
- (void)trackTradeAdEventWithLabelName:(id)a0;
- (void)p_updateSourceData;
- (void)p_tryShowSecondaryInfo;
- (BOOL)p_useNewStyleForFeedIfNeeded;
- (void)p_tradeAnchorRenderTimeTrackWithModel:(id)a0 view:(id)a1 scene:(id)a2;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)anchorView;

@end

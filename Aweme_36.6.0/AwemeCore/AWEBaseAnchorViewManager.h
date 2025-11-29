@class NSString;
@protocol AWEPOIEntryAnchorUtilProtocol, AWELocalLifeAnchorActionDelegate;

@interface AWEBaseAnchorViewManager : NSObject <AWEAnchorBehaviorActionProtocol, AWEVideoPlayerBehaviorActionProtocol, AWELocalLifeAnchorManagerProtocol>

@property (retain, nonatomic) id<AWEPOIEntryAnchorUtilProtocol> poiAnchorUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELocalLifeAnchorActionDelegate> anchorDelegate;

- (void)clickMultiAnchorEventHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })anchorViewSize;
- (void)updateAnchorExtraInfoWithExtraInfo:(id)a0;
- (void)triggerAnchorEvent:(long long)a0 extraInfo:(id)a1;
- (void)updateAnchorDataWithDataBuilder:(id)a0;
- (void)clickHotZoneAnchorEventHandler:(id /* block */)a0 needCoverDefaultEvent:(BOOL)a1;
- (BOOL)canShowSecondInfo;
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
- (void).cxx_destruct;
- (id)anchorView;

@end

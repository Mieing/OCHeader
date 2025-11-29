@interface AWEIMGrowthImpl.IncentiveShareServiceImpl : HTSService <AWEIMIncentieShareService_Data, AWEIMIncentiveShareService_SharePanel, AWEIMIncentiveShareService> {
    void /* unknown type, empty encoding */ shareElementAnimator;
}

- (BOOL)feedShareElementFeatureEnable;
- (void)handleReceiveLaunchData:(id)a0;
- (BOOL)bindSyncedExtToMessageIfNeedWithContext:(id)a0 shareModel:(id)a1 message:(id)a2;
- (id)incentiveAdditionSyncedExtWithMessage:(id)a0;
- (void)receivedLocalShareResultWithContainer:(id)a0 shareResult:(id)a1 shareContext:(id)a2;
- (id /* block */)shareSourceDecorator;
- (id)incentiveShareDebugInfo;
- (void)playFeedElementRedPacketAppearAnimateWithWholeView:(id)a0 imageView:(id)a1 labelView:(id)a2 awemeModel:(id)a3;
- (void)resetFeedElementRedPacketWithWholeView:(id)a0 imageView:(id)a1 labelView:(id)a2 awemeModel:(id)a3;
- (BOOL)enableIncentiveShareWithContext:(id)a0;
- (void)playShareElementRedPacketAnimation:(id)a0 imageView:(id)a1 labelView:(id)a2;
- (void)resetAnimatingShareElement;
- (id)incentiveShareTaskSceneWithContext:(id)a0;
- (BOOL)isSelectShareUsersAllIncentiveShareTaskUsersWithModelList:(id)a0 context:(id)a1;
- (BOOL)shouldShowSharePanelRedPacketWithModel:(id)a0 context:(id)a1;
- (id)sharePanelSubtitleWithModel:(id)a0 context:(id)a1;
- (id)snackBarContextWithShareList:(id)a0 shareContext:(id)a1;
- (void)playRedPacketAnimateIfNeededWithView:(id)a0;
- (id)incentiveGameShareTaskInfoWithContent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@interface AWEStudioExtFriendsImpl.StoryCinemaModeRecordFilterLogSwitchLogicComponent : NSObject <ACCRecorderEvent, ACCCameraLifeCircleEvent, ACCRecorderViewContainerItemsHideShowObserver, ACCFilterServiceSubscriber, ACCRecordSwitchModeServiceSubscriber> {
    void /* unknown type, empty encoding */ _isLogOnPublisher;
    void /* unknown type, empty encoding */ _fadeHiddenPublisher;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ cancels;
}

- (void)onWillSwitchToColorSpace:(unsigned long long)a0;
- (void)onDidSwitchColorSpaceWithError:(id)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)filterServiceDidApplyFilter:(id)a0;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

@interface AWEStudioExtFriendsImpl.StoryCinemaModeRecordFilterEntranceLogicComponent : NSObject <ACCRecorderViewContainerItemsHideShowObserver, ACCLandscapeRecordServiceSubscriber, ACCRecordSwitchModeServiceSubscriber> {
    void /* unknown type, empty encoding */ _isCinemaModePublisher;
    void /* unknown type, empty encoding */ _showEffectModelPublisher;
    void /* unknown type, empty encoding */ _shouldHiddenPublisher;
    void /* unknown type, empty encoding */ entranceBtn;
    void /* unknown type, empty encoding */ entranceLabel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ cancels;
}

- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)recorderDeviceOrientationChanged:(long long)a0;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

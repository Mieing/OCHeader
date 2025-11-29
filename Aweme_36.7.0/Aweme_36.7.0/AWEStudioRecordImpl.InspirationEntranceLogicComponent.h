@interface AWEStudioRecordImpl.InspirationEntranceLogicComponent : NSObject <ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ _enableInspirationFollow;
    void /* unknown type, empty encoding */ _cameraFirstRender;
    void /* unknown type, empty encoding */ cancelable;
}

- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

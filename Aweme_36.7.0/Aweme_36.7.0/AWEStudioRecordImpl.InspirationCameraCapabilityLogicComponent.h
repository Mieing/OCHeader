@interface AWEStudioRecordImpl.InspirationCameraCapabilityLogicComponent : NSObject <AWERecordBeautyServiceSubscriberProtocol, ACCCameraControlEvent, ACCAdvancedRecordSettingServiceSubScriber, ACCRecordSubModeServiceSubscriber, ACCAlgorithmEvent, ACCSideslipPropPanelServiceSubscriber, ACCPanelViewDelegate, AWEStickerViewLayoutManagerSubscriber, ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordFlowControlServiceSubscriber, AWEStudioBusinessCameraBasicActionProtocol, ACCRecordSystemLivePhotoServiceSubscriber, ACCCameraSystemLivePhotoSubscriber, ACCCameraLifeCircleEvent> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ _willTakePhotoPublisher;
    void /* unknown type, empty encoding */ _cameraRatio;
    void /* unknown type, empty encoding */ _cameraFirstRender;
    void /* unknown type, empty encoding */ _livePhotoStatus;
    void /* unknown type, empty encoding */ cameraPositionChangedPublisher;
    void /* unknown type, empty encoding */ _panelHeightPublisher;
    void /* unknown type, empty encoding */ _panelDidShow;
    void /* unknown type, empty encoding */ _beautyPanelDidShow;
    void /* unknown type, empty encoding */ panelHeightMap;
    void /* unknown type, empty encoding */ lastPropLayoutManager;
    void /* unknown type, empty encoding */ changePropPanelHeightSubject;
    void /* unknown type, empty encoding */ _floatingHiddenPublisher;
    void /* unknown type, empty encoding */ commonHiddenJudgement;
    void /* unknown type, empty encoding */ _cameraRecordStep;
    void /* unknown type, empty encoding */ _enigmaResultPublisher;
    void /* unknown type, empty encoding */ _appliedEffectPublisher;
    void /* unknown type, empty encoding */ _enableGrid;
    void /* unknown type, empty encoding */ cancels;
}

- (void)beautyPanelViewDidAppear;
- (void)beautyPanelViewDidDisappear;
- (void)onDidSwitchToCameraPosition:(long long)a0;
- (void)advancedRecordSettingService:(id)a0 configure:(unsigned long long)a1 switchStatueChangeTo:(BOOL)a2 needSync:(BOOL)a3;
- (void)switchSubModeView:(id)a0 hidden:(BOOL)a1;
- (void)onAlgorithmResultChangedWithGraphName:(id)a0 nodeName:(id)a1 result:(id)a2;
- (void)sideslipPropPanelService:(id)a0 viewHidden:(BOOL)a1;
- (void)panelViewController:(id)a0 didShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)propServiceWillDismissPanel:(id)a0;
- (void)propServiceWillShowSearch:(id)a0;
- (void)propServiceWillDismissSearch:(id)a0;
- (void)layoutManagerDidChangeLayout:(id)a0;
- (void)effectDidApplyPath:(id)a0 success:(BOOL)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceDidCompleteRecord;
- (void)flowServiceStartShowCountDownAnimation:(long long)a0;
- (void)flowServiceCountDownAnimationCompleted;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)flowControlServiceDidFinishFlow:(unsigned long long)a0;
- (void)cameraFlowActionBegin;
- (void)cameraFlowActionStepChangedWith:(unsigned long long)a0 currentStep:(unsigned long long)a1;
- (void)recordSystemLivePhotoStart:(double)a0;
- (void)recordSystemLivePhotoFinish;
- (void)recordSystemLivePhotoCancel;
- (void)cameraSystemLivePhotoEnableStatusChanged:(BOOL)a0;
- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

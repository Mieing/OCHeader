@class UISlider;

@interface WebviewJSEventHandler_handleDeviceInfo : WebviewJSEventHandlerBase {
    UISlider *m_volumeViewSlider;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)enableFullScreen:(id)a0 errMsg:(id *)a1;
- (void)setDisableInteractivePop:(id)a0 errMsg:(id *)a1;
- (void)setOrientation:(id)a0 errMsg:(id *)a1;
- (void)setVolume:(id)a0 errMsg:(id *)a1;
- (id)getVolume:(id)a0 errMsg:(id *)a1;
- (void)setScreenBrightness:(id)a0 errMsg:(id *)a1;
- (id)getScreenBrightness:(id)a0 errMsg:(id *)a1;
- (id)getUIParams:(id)a0 errMsg:(id *)a1;
- (id)volumeViewSlider;
- (void)setKeepScreenOn:(id)a0 errMsg:(id *)a1;
- (void)setFullScreenLayout:(id)a0 errMsg:(id *)a1;
- (BOOL)needPassPramsWithAction:(id)a0;
- (void).cxx_destruct;

@end

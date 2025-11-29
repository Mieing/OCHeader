@class NSString, NavigateLogicController;

@interface WebviewJSEventHandler_openMapNavigateMenu : WebviewJSEventHandlerBase <INavigateLogicControllerExt, NavigateLogicControllerDelegate> {
    NavigateLogicController *_navigateLogicController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showNavigateMenu:(id)a0 topMapType:(unsigned long long)a1;
- (BOOL)canShowShareLocationMsgToDevice;
- (void)onPresentViewControlelr:(id)a0 Animated:(BOOL)a1;
- (BOOL)isValidCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)onMapItemClickOrCancel:(BOOL)a0;
- (void)delayNotifyOK;
- (void)delayNotifyCancel;
- (void).cxx_destruct;

@end

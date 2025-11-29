@class UIViewController, NSString, UIView, UIButton;
@protocol ACCScanMultiCodeMiddleViewControllerStudioProxy, ACCCameraScanQRCodePerformanceTimestampStudioProxy, ACCScanQRCodeMaskViewStudioProxy;

@interface AWEVisionQRCodeComponent : AWEVisionFeatureComponent <ACCCameraScanEvent, AWEVisionComponentProtocol>

@property (nonatomic) unsigned long long scanResultJump;
@property (nonatomic) BOOL appeared;
@property (retain, nonatomic) id<ACCCameraScanQRCodePerformanceTimestampStudioProxy> scanQRCodePerformanceTimestamp;
@property (retain, nonatomic) UIButton *bubbleView;
@property (retain, nonatomic) UIView<ACCScanQRCodeMaskViewStudioProxy> *bgMaskView;
@property (retain, nonatomic) UIViewController<ACCScanMultiCodeMiddleViewControllerStudioProxy> *multiCodeVC;
@property (nonatomic) BOOL stableChanged;
@property (nonatomic) BOOL backFromMiddlePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFixVisionCameraMultiCodeDismissFailed;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)turnMultiEnigma:(BOOL)a0 param:(id)a1;
- (void)componentDidLoad;
- (void)flowServiceStableChanged:(BOOL)a0;
- (id)shakingDetectParam;
- (void)onReceivedCameraScanQRCodeResults:(id)a0;
- (void)onReceivedCameraScanQRCodeResult:(id)a0;
- (void)resetAllRecordStatus;
- (id)getResultWithJumpUrl:(id)a0 resultList:(id)a1;
- (void)loadBubbleViewLoadingAnimation;
- (void)alertImageNoQRCode;
- (id)qrcodeBottomHint;
- (id)shakeBottomHint;
- (id)scanCameraQRCodeParam;
- (void)openScanAlgorithm;
- (void)closeScanAlgorithm;
- (void)enableScanMode:(BOOL)a0;
- (void)qrcodeDetectEnable:(BOOL)a0;
- (void)switchModeViewWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)jumpQRCode:(id)a0 result:(id)a1;
- (void)trackScanCameraQRCodeMonitorWithMultiCode:(BOOL)a0;
- (BOOL)fixQRCodeMiddlePageReturnDelayEnable;
- (void)loadCustomUI;
- (void)destroyCustomUI;
- (void)setupFlashLightFrameImp;
- (void)scanShakingDetectEnable:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end

@class FaceRecogFlashView, FaceRecogCheckBrightnessLogic, NSString, MMTimer, FaceRecogReflectGuideView, CameraReflectDevice;

@interface FaceRecogActionReflectHandler : FaceRecogFlashHandler <FaceRecogGuideViewDelegate, FaceRecogBaseViewDelegate, FaceRecogCheckBrightnessLogicDelegate> {
    MMTimer *_reflectTimer;
    long long _triggerTimes;
    double _oldScreenBrightness;
    FaceRecogReflectGuideView *_guideVc;
}

@property (retain, nonatomic) CameraReflectDevice *lightDetector;
@property (nonatomic) BOOL isReflecting;
@property (nonatomic) double cameraStartTime;
@property (nonatomic) BOOL shouldWaitForFaceDetect;
@property (nonatomic) BOOL isWaitingToReflect;
@property (nonatomic) BOOL hasDetectFace;
@property (nonatomic) BOOL shouldShowTipsAtRetry;
@property (retain, nonatomic) FaceRecogCheckBrightnessLogic *brightnessCheckLogic;
@property (retain, nonatomic) FaceRecogFlashView *verifyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(unsigned int)a0;
- (id)initWithWorkMode:(long long)a0 scene:(unsigned int)a1;
- (void)dealloc;
- (void)initView;
- (void)didAccessVideo;
- (void)onCameraStart;
- (void)showView;
- (void)presentFaceViewController;
- (void)onShowUITips:(id)a0;
- (void)onFlashActionFinish;
- (void)onReflectColorChange:(unsigned int)a0 light:(double)a1;
- (void)onPipelineFinishWithSuccess:(BOOL)a0;
- (void)requestStop;
- (void)requestRetry;
- (BOOL)onStartRequestConfig:(id)a0;
- (void)onStartVerifyResult:(id)a0;
- (void)onPipelineReset;
- (void)didDetectFace;
- (void)onReflectStart:(long long)a0;
- (void)handlerDidFinishWithCode:(long long)a0 msg:(id)a1 verifyResult:(id)a2 canRetry:(BOOL)a3;
- (double)faceRectWidth;
- (void)onDidCheckBrightnessDoneWithIsOK:(BOOL)a0 brightnessValue:(float)a1;
- (void)onFaceRecogGuideFinished;
- (void)faceRecogDidRotate;
- (void).cxx_destruct;

@end

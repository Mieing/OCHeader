@class UIView, NSString, NSMutableParagraphStyle, NSTimer, UITextView, UIImageView, UIButton, YtFLCircleProgressView, CameraRecordDevice, UILabel, NSURLSessionDataTask;

@interface YtLivenessViewController : YtBaseViewController <CameraVideoDeviceDelegate, YtDeviceDelegate, UIAlertViewDelegate> {
    UIView *contentView;
    UIView *shapeView;
    UIImageView *backVieYTg;
    UIImageView *backView;
    UIImageView *faceRangeView;
    UITextView *tipsLabel;
    UITextView *lipReadLabel;
    UIButton *startLeapReadBtn;
    NSMutableParagraphStyle *paragraphStyle;
    CameraRecordDevice *device;
    double recordBrightness;
    NSTimer *countDownTimer;
    double currentCountDownProgress;
    int maxRetryCount;
    int retryCount;
    BOOL isManualTrigger;
    BOOL showLipReadUI;
    NSTimer *showLipReadUITimer;
    NSURLSessionDataTask *dataTask;
    BOOL isNeedReuqestLog;
}

@property (weak, nonatomic) UILabel *lux_label;
@property (nonatomic) BOOL isCheckedNoFace;
@property (retain, nonatomic) NSString *mRgbConfig;
@property (nonatomic) float lux;
@property (nonatomic) long long workMode;
@property (retain, nonatomic) YtFLCircleProgressView *circleProgressView;
@property (retain, nonatomic) YtFLCircleProgressView *timeoutProgressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWorkMode:(long long)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)receiveStateEvent:(id)a0;
- (void)receiveUIEvent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)prefersStatusBarHidden;
- (void)onLipReadUIChanged:(id)a0;
- (void)startLipRead;
- (void)setTips:(id)a0;
- (void)onCountDownTick:(id)a0;
- (void)cameraDeviceEvent:(int)a0 withAguments:(id)a1;
- (id)colorWithHex:(unsigned int)a0;
- (void)handleNetworkRequest:(id)a0 withHeaders:(id)a1 withRequest:(id)a2 withResponse:(id /* block */)a3;
- (id)getCaptureDevice;
- (id)getCaptureSession;
- (void)onReflectEventWithArgb:(unsigned int)a0 withLight:(double)a1;
- (void)onReflectStart:(long long)a0;
- (id)getVoiceData;
- (id)encodeBase64:(id)a0;
- (void).cxx_destruct;

@end

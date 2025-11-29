@class UIView, NSString, UIImage, NSTimer, UIImageView, UIButton, YtFLCircleProgressView, CameraRecordDevice, UILabel, NSURLSessionDataTask;

@interface YtOcrViewController : YtBaseViewController <CameraVideoDeviceDelegate, UIAlertViewDelegate> {
    UIView *cameraView;
    UILabel *promptLabel;
    UIButton *flashButton;
    UIButton *takePhotoButton;
    UIImageView *promptImageView;
    UIImage *failedImage;
    UIImage *succeedImage;
    UIImage *notdetectImage;
    CameraRecordDevice *device;
    int currentCameraFlashMode;
    NSTimer *countDownTimer;
    double currentCountDownProgress;
    NSURLSessionDataTask *dataTask;
}

@property (nonatomic) BOOL isManualMode;
@property (nonatomic) BOOL needTakePhoto;
@property (retain, nonatomic) YtFLCircleProgressView *timeoutProgressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)cameraDeviceEvent:(int)a0 withAguments:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleCameraChangeEvent:(id)a0;
- (void)handleFlashChangeEvent:(id)a0;
- (void)handleTakePhotoEvent:(id)a0;
- (void)receiveStateEvent:(id)a0;
- (void)receiveUIEvent:(id)a0;
- (void)handleNetworkRequest:(id)a0 withRequest:(id)a1 withHeaders:(id)a2 withResponse:(id /* block */)a3;
- (void)onCountDownTick:(id)a0;
- (void).cxx_destruct;

@end

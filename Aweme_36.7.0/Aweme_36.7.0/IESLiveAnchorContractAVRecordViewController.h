@class NSString, UIImage, IESLiveAnchorContractPhotoRecorder, IESLiveAnchorContractPhotoRecorderView, IESLiveAnchorContractAVRecordParamModel, IESLiveAnchorContractAVRecordView, IESLiveAnchorContractAVRecorder, UIActivityIndicatorView;

@interface IESLiveAnchorContractAVRecordViewController : UIViewController <IESLiveAnchorContractAVRecordViewDelegate, IESLiveAnchorContractAVRecorderDelegate, IESLiveAnchorContractPhotoRecorderDelegate, IESLiveAnchorContractPhotoRecorderViewDelegate>

@property (retain, nonatomic) IESLiveAnchorContractAVRecorder *recorder;
@property (retain, nonatomic) IESLiveAnchorContractAVRecordView *recordView;
@property (nonatomic) BOOL needReRecording;
@property (copy, nonatomic) NSString *fileUrl;
@property (copy, nonatomic) NSString *firstFrameBase64;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (nonatomic) BOOL didFinishRecord;
@property (nonatomic) BOOL didUpload;
@property (retain, nonatomic) IESLiveAnchorContractPhotoRecorder *photoRecorder;
@property (retain, nonatomic) IESLiveAnchorContractPhotoRecorderView *photoRecorderView;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *croppedImage;
@property (retain, nonatomic) IESLiveAnchorContractAVRecordParamModel *config;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonDidClick;
- (void)popVC;
- (void)backBtnDidClick;
- (void)setupRecorder;
- (void)finishRecordingToOutputFile:(id)a0 error:(id)a1;
- (void)recordingFailedWithError:(id)a0;
- (void)flipCameraDidClick;
- (void)startRecordDidClick;
- (void)uploadVideoDidClick;
- (void)videoReTryButtonDidClick;
- (void)stopRecordDidClickWithResult:(BOOL)a0;
- (void)cancelRecordCallback;
- (void)uploadVideoWithFileURL:(id)a0 firstFrameBase64:(id)a1 fileType:(long long)a2;
- (void)recordFailedCallbackWithError:(id)a0;
- (void)recordSuccessWithFileURL:(id)a0 firstFrameBase64:(id)a1;
- (void)uploadFailedCallbackWithError:(id)a0;
- (void)uploadSuccessCallbackWithData:(id)a0;
- (void)cameraOperationFailedWithError:(id)a0;
- (id)cropImage:(id)a0 toGuideFrameWithScreenSize:(struct CGSize { double x0; double x1; })a1;
- (id)contractPhotoFilePath;
- (id)normalizedImage:(id)a0;
- (void)finishCapturingImage:(id)a0 error:(id)a1;
- (void)captureButtonDidClick;
- (void)flashButtonDidClick:(BOOL)a0;
- (void)reTryButtonDidClick;
- (void)uploadVideoButtonDidClick;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)setupSubviews;

@end

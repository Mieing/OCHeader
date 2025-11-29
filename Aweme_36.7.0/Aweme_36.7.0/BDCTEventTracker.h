@class BDCTFlowContext, BDCTFlow;

@interface BDCTEventTracker : NSObject

@property (retain, nonatomic) BDCTFlowContext *context;
@property (weak, nonatomic) BDCTFlow *bdct_flow;

+ (void)trackWithEvent:(id)a0 params:(id)a1;
+ (void)trackLocalModelAvailable:(id)a0 error:(id)a1;
+ (void)trackGeckoResourceSyncResult:(id)a0;
+ (void)trackCertModelUpdateEventWithResult:(long long)a0 errorMsg:(id)a1;
+ (void)trackcertModelPreloadStartEvent;
+ (void)trackCertModelPreloadEventWithResult:(long long)a0 errorMsg:(id)a1;
+ (void)trackError:(id)a0;
+ (void)trackNetRequestWithStartTime:(id)a0 path:(id)a1 response:(id)a2 error:(id)a3;

- (void)trackWithEvent:(id)a0 params:(id)a1;
- (void)trackCertDoStillLivenessEventWithError:(id)a0;
- (void)trackCertOfflineFaceVerifyEventWithError:(id)a0;
- (void)trackActionFaceDetectionLiveResult:(id)a0 params:(id)a1;
- (void)trackActionBrightnessRecoverFail:(float)a0 currentBrightness:(float)a1;
- (void)trackLivenessDetectionFlowComplete:(id)a0 error:(id)a1;
- (void)trackVideoLivenessDetectionFaceQualityResult:(BOOL)a0 promptInfo:(id)a1;
- (void)trackVideoLivenessDetectionResultWithReadNumber:(id)a0 interuptTimes:(int)a1 error:(id)a2;
- (void)trackAuthVideoCheckingStart;
- (void)trackAuthVideoCheckingResultWithError:(id)a0 params:(id)a1;
- (void)trackReturnPreviousPageFromPosition:(id)a0;
- (void)trackFaceDetectionPromptWithPromptInfo:(id)a0 result:(unsigned long long)a1;
- (void)trackFaceDetectionImageResult:(unsigned long long)a0;
- (void)trackFaceFailImageResult:(unsigned long long)a0;
- (void)trackFaceDetectionFinalResult:(id)a0 params:(id)a1;
- (void)trackFaceDetectionSDKResult:(id)a0;
- (void)trackFaceDetectionVoiceGuideCheck:(id)a0;
- (void)trackCardPhotoUpdateAlertClick:(id)a0;
- (void)trackFaceDetectionStartCheck;
- (void)trackFaceDetectionStartCameraPermit:(BOOL)a0;
- (void)trackManualDetectionCameraPermit:(BOOL)a0;
- (void)trackFaceDetectionStartWebReq:(BOOL)a0;
- (void)trackIdCardPhotoUploadSelectFinish;
- (void)trackIdCardPhotoUploadCameraButton;
- (void)trackFaceDetectionFailPopupWithActionType:(id)a0 failReason:(id)a1 errorCode:(long long)a2;
- (void)trackFaceDetectionRetainPopup:(id)a0;
- (void)trackFaceDetectionRetainPopupClick:(id)a0 buttonText:(id)a1;
- (void)trackFaceDetectionFallbackWithParams:(id)a0;
- (void)trackAuthVerifyStart;
- (void)trackOfflineVerifyStart;
- (void)trackOfflineLivenessSuccess;
- (void)trackAuthVerifyEndWithErrorCode:(int)a0 errorMsg:(id)a1 result:(id)a2;
- (void)trackWithEvent:(id)a0 error:(id)a1;
- (void)trackBytedCertStartWithStartTime:(id)a0 response:(id)a1 error:(id)a2;
- (void)trackReflectionLivenessDetectionColorQualityResult:(BOOL)a0 promptInfo:(id)a1;
- (void)trackReflectionLivenessDetectionResult:(BOOL)a0 colorPromptInfo:(id)a1 colorList:(id)a2 interruptTimes:(int)a3 errorCode:(int)a4;
- (void).cxx_destruct;

@end

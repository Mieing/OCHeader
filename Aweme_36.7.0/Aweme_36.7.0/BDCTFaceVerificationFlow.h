@class NSString, FaceLiveViewController;
@protocol BytedCertFaceVCProtocol;

@interface BDCTFaceVerificationFlow : BDCTFlow <BDCTFaceLiveViewControllerDelegate>

@property (readonly, nonatomic) long long beginAt;
@property (readonly, nonatomic) long long sdkInitEndAt;
@property (readonly, nonatomic) long long liveDetectEndAt;
@property (readonly, nonatomic) long long faceDetectBeginAt;
@property (weak, nonatomic) FaceLiveViewController *faceLiveViewController;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ shouldPresentHandler;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ faceVCPreparedCallback;
@property (weak, nonatomic) FaceLiveViewController<BytedCertFaceVCProtocol> *faceVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginAliyunVerify;
- (void)p_beginAliyunVerify;
- (void)p_aliyunQuery:(id)a0;
- (void)faceViewController:(id)a0 faceCompareWithPackedParams:(id)a1 faceData:(id)a2 resultCode:(int)a3 completion:(id /* block */)a4;
- (void)downloadAudioWithCompletion:(id /* block */)a0;
- (id)creatFaceViewControllerWithType:(unsigned long long)a0 liveDetectAlgoParams:(id)a1;
- (void)trackFlowBegin;
- (void)trackSDKInitRequestComplete;
- (void)trackLiveDetectRequestComplete;
- (void)trackFaceDetectBeginWithParams:(id)a0;
- (void)trackFlowFinishWithError:(id)a0;
- (void)trackDetectionInitRequestWithParams:(id)a0;
- (void)faceViewController:(id)a0 retryDesicionWithCompletion:(id /* block */)a1;
- (void)sdkInit;
- (void)authSubmitIfNeeded;
- (void)beginFaceVerifyWithConfig:(id)a0;
- (void)beginByteVerify;
- (void)prepareForFaceDetectWithAlgoParams:(id)a0;
- (void)beginVerifyWithAlgoParams:(id)a0;
- (void)presentFaceLiveDetectViewControllerWithAlgoParams:(id)a0;
- (void)requestAudioResourceIfNonExistWithParams:(id)a0;
- (void)p_faceCompareWithPackedParams:(id)a0 faceData:(id)a1 resultCode:(int)a2 completion:(id /* block */)a3;
- (void)finishWithResult:(id)a0 error:(id)a1 showAlert:(BOOL)a2;
- (BOOL)p_errorIsPassShowAlert:(id)a0;
- (void)p_showAudioOpenAlertWithParams:(id)a0;
- (BOOL)canCloseCertificationFlowDirectlyWithQueryResult:(id)a0 error:(id)a1;
- (void)faceViewController:(id)a0 finishWithLiveDetectResult:(id)a1 error:(id)a2;
- (id)flowTrackParams;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)begin;
- (void)dealloc;

@end

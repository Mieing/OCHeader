@class BDCTVideoRecorder, CAShapeLayer, NSString, UILabel, UIView;
@protocol BytedCertFaceVerifyProcedureDelegate;

@interface BDCTFaceVerifyVC : FaceLiveViewController <FaceLiveViewControllerProtocol, BytedCertFaceVCProtocol, BDCTLivePredictProcessDelegate>

@property (readonly, nonatomic) UILabel *actionTipLabel;
@property (readonly, nonatomic) UILabel *actionCountTipLabel;
@property (readonly, nonatomic) UILabel *smallActionTipLabel;
@property (readonly, nonatomic) UIView *mainWrapperView;
@property (readonly, nonatomic) CAShapeLayer *circleProgressTrackLayer;
@property (readonly, nonatomic) BDCTVideoRecorder *videoRecorder;
@property (weak, nonatomic) id<BytedCertFaceVerifyProcedureDelegate> verifyProcedureDelegate;
@property (readonly, nonatomic) UIView *faceView;
@property (readonly, nonatomic) UILabel *faceVerifyTipLabel;
@property (nonatomic) unsigned long long viewControllerType;
@property (readonly, nonatomic) BOOL showBlurLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentViews;
- (void)exitFaceVerification;
- (void)livenessTC:(id)a0 finishPredictFaceFrameWithTip:(id)a1;
- (void)callbackWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end

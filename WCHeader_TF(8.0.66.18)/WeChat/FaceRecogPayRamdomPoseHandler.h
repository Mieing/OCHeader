@class NSString, NSData, FaceRecogPayConfigLogic, FaceRecogBaseView;

@interface FaceRecogPayRamdomPoseHandler : FaceRecogFlashHandler <FaceRecogBaseViewDelegate, FaceRecogPayConfigLogicDelegate, FaceRecogPayHandlerProtocol> {
    FaceRecogBaseView *_verifyView;
}

@property (nonatomic) int poseMode;
@property (retain, nonatomic) FaceRecogPayConfigLogic *config;
@property (retain, nonatomic) NSData *resultHash;
@property (retain, nonatomic) NSString *otherVerifyTitle;
@property (nonatomic) BOOL hasClickBizButton;
@property (retain, nonatomic) NSString *faceVerifyTitle;
@property (retain, nonatomic) NSString *face_verify_title_color;
@property (retain, nonatomic) NSString *face_verify_title_font;
@property (nonatomic) double face_verify_title_size;
@property (retain, nonatomic) NSString *face_action_tips_font;
@property (nonatomic) double face_action_tips_size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(unsigned int)a0;
- (void)initView;
- (void)didAccessVideo;
- (void)showView;
- (BOOL)onStartRequestConfig:(id)a0;
- (void)didAccessConfig;
- (void)onCameraStart;
- (void)didDetectFace;
- (void)onShowUITips:(id)a0;
- (void)onStartVerifyResult:(id)a0;
- (void)onGetPayBioConfigOK:(id)a0 succeedForBioId:(unsigned long long)a1;
- (void)onGetPayBioConfig:(id)a0 failedCauseOf:(int)a1 errMsg:(id)a2;
- (void)faceRecogDidClickBizBtn;
- (void)faceRecogDidRotate;
- (void)encodeVideoAsync:(id)a0 complete:(id /* block */)a1;
- (long long)bizTitleMaxLen;
- (void).cxx_destruct;

@end

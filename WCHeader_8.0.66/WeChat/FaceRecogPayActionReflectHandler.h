@class FaceRecogPayConfigLogic, NSData, NSString;

@interface FaceRecogPayActionReflectHandler : FaceRecogActionReflectHandler <FaceRecogPayConfigLogicDelegate, FaceRecogPayHandlerProtocol>

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
- (void)setDefaultFont;
- (void)initView;
- (void)presentFaceViewController;
- (void)showView;
- (void)onCameraStart;
- (BOOL)onStartRequestConfig:(id)a0;
- (BOOL)supportDepthCamera;
- (void)onGetPayBioConfigOK:(id)a0 succeedForBioId:(unsigned long long)a1;
- (void)onGetPayBioConfig:(id)a0 failedCauseOf:(int)a1 errMsg:(id)a2;
- (void)faceRecogDidClickBizBtn;
- (void)faceRecogDidRotate;
- (void).cxx_destruct;

@end

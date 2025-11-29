@class FaceRecog3rdVerifyConfirmLogic, FaceRecog3rdVerifyHandler, NSString, MMUIViewController, FaceRecog3rdVerifyConfirmViewController;
@protocol FaceRecogPrivateVerifyHandlerDelegate;

@interface FaceRecogPrivateVerifyHandler : MMObject <FaceRecog3rdVerifyConfirmLogicDelegate, FaceRecogHandlerDelegate, FaceRecog3rdVerifyConfirmViewControllerDelegate>

@property (retain, nonatomic) FaceRecog3rdVerifyConfirmViewController *confirmVC;
@property (retain, nonatomic) FaceRecog3rdVerifyHandler *verifyHandler;
@property (retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *verifyInfo;
@property (nonatomic) BOOL needVideo;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL isDismissed;
@property (weak, nonatomic) id<FaceRecogPrivateVerifyHandlerDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *fromVC;
@property (nonatomic) BOOL needConfirmView;
@property (nonatomic) unsigned int checkAliveType;
@property (copy, nonatomic) NSString *funcName;
@property (nonatomic) BOOL isLivenessDetectionOnly;
@property (nonatomic) unsigned int sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppId:(id)a0 verifyInfo:(id)a1 scene:(unsigned int)a2;
- (id)initWithUnionVideoAppId:(id)a0 verifyInfo:(id)a1 scene:(unsigned int)a2;
- (id)initWithAppId:(id)a0 verifyInfo:(id)a1 needVideo:(BOOL)a2 scene:(unsigned int)a3;
- (void)dealloc;
- (void)initData;
- (void)doStartFaceReco;
- (id)getCurVC;
- (void)disMissAll:(BOOL)a0 complete:(id /* block */)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)start;
- (void)reportWithResult:(int)a0;
- (id)getVerifyResult:(id)a0;
- (void)faceRecogHandlerDidFinish:(id)a0;
- (void)faceRecogHandlerDidCancel:(id)a0;
- (void)onGetConfirmInfoSucceed:(id)a0;
- (void)onGetConfirmInfo:(id)a0 failedCauseOf:(unsigned int)a1 msg:(id)a2 desc:(id)a3;
- (void)onConfirmStartFaceReco;
- (void)onConfirmCancel;
- (void)onConfirmFail;
- (void)onGetConfirmInfoFail;
- (void).cxx_destruct;

@end

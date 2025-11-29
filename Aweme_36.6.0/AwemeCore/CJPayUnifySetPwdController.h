@class NSString, CJPayUnifyPreVerifyManager, CJPayFaceRecogConfigModel;

@interface CJPayUnifySetPwdController : NSObject

@property (copy, nonatomic) NSString *inputPassword;
@property (nonatomic) BOOL isSecondStep;
@property (retain, nonatomic) CJPayFaceRecogConfigModel *faceRecognitionConfigModel;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) CJPayUnifyPreVerifyManager *verifyManager;
@property (copy, nonatomic) id /* block */ processType;
@property (copy, nonatomic) id /* block */ eventTrackBlock;

- (void)event:(id)a0 params:(id)a1;
- (BOOL)isFirstStep;
- (BOOL)p_isOneStepSetPasswordProcess;
- (void)p_requestVerifyInfo;
- (BOOL)p_isResetPasswordProcess;
- (void)p_jumpAuthPageWithVerifyInfo:(id)a0;
- (id)p_buildFaceVerifyParams:(id)a0 faceVerifyInfo:(id)a1;
- (void)p_callbackWithResultModel:(id)a0;
- (id)setPwdProcessTrackParams;
- (void)startProcessWithPassword:(id)a0 completion:(id /* block */)a1;
- (id)setPwdShowInfo;
- (void)restartPasswordSetProcess;
- (id)p_sceneStr;
- (id)p_riskSourceStr;
- (void)p_tryFaceRecogWithResponse:(id)a0;
- (void)p_handleInputPassword:(id)a0;
- (id)p_unifyCashierResponse;
- (BOOL)p_isValidPassword:(id)a0;
- (void)p_callbackFailWithErrorMsg:(id)a0;
- (void)p_startVerifyWithResponse:(id)a0;
- (void)p_completeSetProcessWithParams:(id)a0;
- (void)p_startUnifyFaceVerifyWithResponse:(id)a0;
- (void)p_startFaceRecognitionWithFaceVerifyInfo:(id)a0;
- (long long)p_processType;
- (void).cxx_destruct;

@end

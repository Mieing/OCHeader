@class CJPayFaceRecogConfigModel, NSString, CJPayAssetResetPwdPageTitleModel, CJPayVerifyPasswordViewModel, CJPayBaseVerifyManager;

@interface CJPayAssetResetPwdController : NSObject

@property (retain, nonatomic) CJPayAssetResetPwdPageTitleModel *pageTitleModel;
@property (copy, nonatomic) NSString *firstInputPassword;
@property (copy, nonatomic) id /* block */ setPasswordResultBlock;
@property (retain, nonatomic) CJPayFaceRecogConfigModel *faceRecognitionConfigModel;
@property (nonatomic) long long pageState;
@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (weak, nonatomic) CJPayBaseVerifyManager *manager;
@property (copy, nonatomic) id /* block */ closeSetResetPwdProcessBlock;
@property (copy, nonatomic) id /* block */ requestFaceVerifyInfoBlock;
@property (copy, nonatomic) id /* block */ passwordInputCompletion;
@property (copy, nonatomic) id /* block */ eventTrackBlock;
@property (copy, nonatomic) id /* block */ engimaImplBlock;

- (void)event:(id)a0 params:(id)a1;
- (void)startSetPasswordWithPassword:(id)a0 completion:(id /* block */)a1;
- (void)resetSetPasswordProcessState;
- (BOOL)isAffirmPageState;
- (BOOL)p_isOneStepSetPasswordProcess;
- (BOOL)p_isSimplePassword:(id)a0;
- (void)p_callBackWithResultType:(long long)a0 errorString:(id)a1;
- (void)p_updatePageState:(long long)a0;
- (void)p_requestVerifyInfo;
- (void)p_configPageTitleModelWithPageState;
- (void)p_resetPasswordFaceRecognitionWithFaceVerifyResponse:(id)a0;
- (BOOL)p_isResetPasswordProcess;
- (void)p_buildAndStartFaceRecognitionWithFaceVerifyInfo:(id)a0;
- (BOOL)p_isSetPasswordProcess;
- (void)p_jumpAuthPageWithVerifyInfo:(id)a0;
- (void)p_completeResetProcessWithParams:(id)a0;
- (void)p_callbackWithFaceVerifyResult:(id)a0 faceVerifyInfo:(id)a1;
- (id)p_buildFaceVerifyParams:(id)a0 faceVerifyInfo:(id)a1;
- (id)p_engimaImpl;
- (id)p_defaultPageTitle;
- (BOOL)p_isAscendingWithPreNumber:(long long)a0 curNumber:(long long)a1;
- (BOOL)p_isDescendingWithPreNumber:(long long)a0 curNumber:(long long)a1;
- (BOOL)p_isSameNumberWithPreNumber:(long long)a0 curNumber:(long long)a1;
- (id)resetPwdTrackParams;
- (void).cxx_destruct;

@end

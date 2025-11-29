@class CJPayBDCreateOrderResponse;

@interface CJPayForgetPwdOptController : NSObject

@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (copy, nonatomic) id /* block */ faceRecogPayBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (BOOL)isNeedFacePay;
- (void)p_forgetPwdRecommendFacePay:(id)a0;
- (BOOL)isNeedFaceVerify;
- (void)p_forgetPwdRecommendFaceVerify:(id)a0;
- (void)oldGotoForgetPwdVCFromVC:(id)a0;
- (id)p_getFaceIconUrl;
- (id)p_getForgetPWDLynxSchemaWithTitle:(id)a0;
- (void)forgetPwdWithSourceVC:(id)a0;
- (void)pwdLockRecommendFacePay:(id)a0 title:(id)a1;
- (void)pwdLockRecommendFaceVerify:(id)a0 title:(id)a1;
- (void).cxx_destruct;

@end

@class CJPayVerifyInfoResponse, CJPayFaceRecogResultModel;

@interface CJPayUnifyPreVerifyItemFace : CJPayUnifyPreVerifyItemBase

@property (retain, nonatomic) CJPayVerifyInfoResponse *verifyInfoResponse;
@property (retain, nonatomic) CJPayFaceRecogResultModel *faceResultModel;

- (id)checkTypeName;
- (void)startVerifyWithParams:(id)a0;
- (id)p_sceneStr;
- (void)p_requestVerifyItem;
- (id)p_riskSourceStr;
- (void)p_switchToVerifyTypeWithResponse:(id)a0;
- (void)p_tryFaceRecogWithResponse:(id)a0;
- (void)p_verifyAuthWithVerifyInfo:(id)a0;
- (void)p_successRecogFaceWithParams:(id)a0;
- (void)p_unifyVerifyWithResponse:(id)a0;
- (void)showLoading:(BOOL)a0 title:(id)a1;
- (void)failRecogFace;
- (id)p_buildParams;
- (void).cxx_destruct;
- (unsigned long long)verifyType;

@end

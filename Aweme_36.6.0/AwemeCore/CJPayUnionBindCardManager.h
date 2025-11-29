@class CJPayBindCardSharedDataModel, NSString, CJPayVerifyItemBindCardRecogFace, CJPayUnionBindCardCommonModel;

@interface CJPayUnionBindCardManager : NSObject <CJPayUnionBindCardPlugin>

@property (retain, nonatomic) CJPayVerifyItemBindCardRecogFace *recogFaceVerifyItem;
@property (retain, nonatomic) CJPayUnionBindCardCommonModel *unionBindCardModel;
@property (weak, nonatomic) CJPayBindCardSharedDataModel *bindCardCommonModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)shared;

- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)bindCardWithCommonModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)createUnionOrderWithBindCardModel:(id)a0 fromVC:(id)a1 completionBlock:(id /* block */)a2;
- (void)authAdditionalVerifyType:(id)a0 loadingStart:(id /* block */)a1 loadingStopBlock:(id /* block */)a2;
- (void)createPromotionOrder:(id)a0;
- (void)openChooseCardListWithCompletion:(id /* block */)a0;
- (void)p_unionBindCardWithCommonModel:(id)a0 completionBlock:(id /* block */)a1;
- (id)p_requestParams:(id)a0;
- (void)p_fetchUnionBindCardAuthWithCommonModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_handleOpenChooseCardListFailed;
- (void)p_fetchChooseCardListWithCommonModel:(id)a0 completionBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)openHalfAccreditWithCompletion:(id /* block */)a0;
- (void)openLiveDetectWithCompletion:(id /* block */)a0;
- (id)p_buildCommonModelWithSignCardMap:(id)a0 bizAuthInfoModel:(id)a1 appId:(id)a2 merchantId:(id)a3;
- (id)p_generateUserInfo:(id)a0;
- (unsigned long long)indepentdentBindCardType;
- (id)p_passWordVerification:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_closeUnionBindCardAndCallBack;
- (void)p_alertNoCardTipsWithCopywritingInfo:(id)a0 InVC:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)p_init;

@end

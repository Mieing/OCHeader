@class CJPayBizDYPayModel, NSString, CJPayBDCreateOrderResponse, CJPayBizResultController, CJPayBDOrderResultResponse, CJPayAssetDouPayProcessController, NSMutableArray, CJPayDouPayProcessController;

@interface CJPayBizDYPayControllerV2 : NSObject <CJPayBizDYPayPluginV2>

@property (retain, nonatomic) CJPayBizDYPayModel *dypayModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *bdPayCreateOrderResponse;
@property (retain, nonatomic) CJPayBDOrderResultResponse *bdPayResultResponse;
@property (retain, nonatomic) CJPayBizResultController *bizResultController;
@property (copy, nonatomic) NSString *bdProcessInfoStr;
@property (weak, nonatomic) CJPayDouPayProcessController *douPayProcessController;
@property (weak, nonatomic) CJPayAssetDouPayProcessController *assetDouPayProcessController;
@property (nonatomic) BOOL isAssetProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (long long)currentEvokeErrorCode;
- (void)dyPayWithModel:(id)a0 completion:(id /* block */)a1;
- (void)p_assetDouPayWithModel:(id)a0 completion:(id /* block */)a1;
- (void)p_handleWithResultModel:(id)a0;
- (id)p_buildRefreshCreateTopAssetMetaInfoList:(id)a0;
- (void)p_queryBizOrderResult;
- (void)p_callBackBiz;
- (void)p_updateCreateResponseWithTopMetaInfoList:(id)a0;
- (void)p_gotoCardListWithTipsMsg:(id)a0 disableMsg:(id)a1;
- (void)p_queryBizOrder:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

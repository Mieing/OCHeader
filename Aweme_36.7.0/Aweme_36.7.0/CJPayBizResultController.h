@class CJPayHalfPageBaseViewController, NSDictionary, CJPayCreateOrderResponse, CJPayDefaultChannelShowConfig;
@protocol CJPayIntegratedCashierHomeVCProtocol;

@interface CJPayBizResultController : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) CJPayHalfPageBaseViewController<CJPayIntegratedCashierHomeVCProtocol> *homeVC;
@property (retain, nonatomic) CJPayCreateOrderResponse *bizCreateOrderResponse;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ resultPageWillAppearBlock;

- (id)topVC;
- (id)buildCommonTrackDic:(id)a0;
- (void)showResultPageWithOrderResultResponse:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_resultPageNative:(id)a0;
- (void)p_resultPageLynx:(id)a0;
- (void)p_resultProcessCallBack;
- (void)closeActionAndCallbackAfterTime:(double)a0;
- (void)p_dismissAllVCWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)p_resultmodelwithResponse:(id)a0;
- (void)p_handleClose:(id)a0;
- (void).cxx_destruct;

@end

@class CJPayHalfPageBaseViewController, NSString, NSDictionary, CJPayNavigationController, CJPayAggregateCallClientStyleViewController, CJPayCashierEvokeContext;
@protocol CJPayCashierEvokeHomePageProtocol, CJPayAPIDelegate;

@interface CJPayManagerV2 : NSObject <CJPayCashierEvokeHomePageProtocol>

@property (copy, nonatomic) NSDictionary *configParams;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) id<CJPayAPIDelegate> delegate;
@property (retain, nonatomic) CJPayAggregateCallClientStyleViewController *styleVC;
@property (weak, nonatomic) CJPayNavigationController *byteNavVC;
@property (retain, nonatomic) CJPayHalfPageBaseViewController<CJPayCashierEvokeHomePageProtocol> *deskVC;
@property (retain, nonatomic) CJPayCashierEvokeContext *evokeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openPayDeskWithConfigParams:(id)a0 bizParams:(id)a1 delegate:(id)a2;
+ (void)openDYPayDeskWithBizDekModel:(id)a0 delegate:(id)a1;

- (id)evokeNaviController;
- (long long)evokeCallbackCode;
- (BOOL)p_isDefaultShowLoading;
- (void)p_presentVCFrom:(id)a0 navVC:(id)a1;
- (void)p_handleErrorResponse:(id)a0;
- (void)p_openPayDeskWithConfigParams:(id)a0 bizParams:(id)a1 delegate:(id)a2;
- (void)p_openDYPayDeskWithBizDekModel:(id)a0 delegate:(id)a1;
- (void)p_callBackWithResponse:(id)a0;
- (id)p_forbiddenEvokeResponse;
- (void)p_handleCJPayManagerResult:(id)a0 orderStatus:(unsigned long long)a1 evokeId:(id)a2 extraDict:(id)a3;
- (void)p_callStatus:(BOOL)a0;
- (void)p_createAndOpenPayDeskVCWithEvokeId:(id)a0;
- (id)p_newDeskVCResponse:(id)a0 evokeId:(id)a1;
- (void)p_cleanManagerContext;
- (void)p_handleCJPayManagerResult:(id)a0 orderStatus:(unsigned long long)a1 evokeId:(id)a2;
- (void)p_downgradeDeskVCWithParams:(id)a0 evokeId:(id)a1 completion:(id /* block */)a2;
- (id)p_buildCallBackResponseWithResponse:(id)a0 orderStatus:(unsigned long long)a1 extraDict:(id)a2;
- (void).cxx_destruct;

@end

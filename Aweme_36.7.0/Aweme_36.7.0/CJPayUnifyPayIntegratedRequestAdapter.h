@class NSString, CJPayCreateOrderResponse, CJPayDefaultChannelShowConfig, CJPayUnifyPayProcessRequestModel;

@interface CJPayUnifyPayIntegratedRequestAdapter : NSObject <CJPayUnifyPayProcessRequestProtocol>

@property (retain, nonatomic) CJPayCreateOrderResponse *createResponse;
@property (copy, nonatomic) id /* block */ tradeConfirmCompletion;
@property (copy, nonatomic) NSString *processPassThrough;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentSelectedShowConfig;
@property (retain, nonatomic) CJPayUnifyPayProcessRequestModel *requestModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_stopLoading;
- (void)p_startLoading;
- (BOOL)p_buttonInfoHandler:(id)a0;
- (BOOL)p_needInvokeLoginAndReturn:(id)a0;
- (unsigned long long)p_getChannelWith:(id)a0 tradeType:(id)a1;
- (void)handleTradeConfirmResult:(id)a0 withError:(id)a1;
- (void)startTradeConfirmWithRequestModel:(id)a0 selectedShowConfig:(id)a1 completion:(id /* block */)a2;
- (void)startTradeQueryWithBdProcessInfoDict:(id)a0 completion:(id /* block */)a1;
- (id)initWithCreateResponse:(id)a0;
- (void)p_buildIntegratedConfirmBizContentParamsWithCompletion:(id /* block */)a0;
- (BOOL)p_checkNoNetwork:(id)a0;
- (void)p_endIntegratedConfirmProcessWithResultCode:(unsigned long long)a0;
- (void)p_handleThirdPartyResult:(id)a0;
- (void)p_endIntegratedConfirmProcessWithResultCode:(unsigned long long)a0 confirmResponse:(id)a1;
- (void)p_handleChannelResultWithResponse:(id)a0 channelType:(unsigned long long)a1 resultType:(unsigned long long)a2;
- (void)p_handleUninstallCase:(unsigned long long)a0;
- (void).cxx_destruct;

@end

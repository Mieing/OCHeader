@class NSString, CJPayUnifyPayProcessRequestModel, CJPayBDCreateOrderResponse;

@interface CJPayUnifyPayDouyinRequestAdapter : NSObject <CJPayUnifyPayProcessRequestProtocol>

@property (retain, nonatomic) CJPayUnifyPayProcessRequestModel *requestModel;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createResponse;
@property (copy, nonatomic) id /* block */ tradeConfirmCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_stopLoading;
- (void)p_startLoading;
- (id)initWithBDCreateResponse:(id)a0;
- (void)handleTradeConfirmResult:(id)a0 withError:(id)a1;
- (void)startTradeConfirmWithRequestModel:(id)a0 selectedShowConfig:(id)a1 completion:(id /* block */)a2;
- (void)startTradeQueryWithBdProcessInfoDict:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

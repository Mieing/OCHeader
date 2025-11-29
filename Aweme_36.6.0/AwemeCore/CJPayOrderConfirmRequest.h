@class NSString;

@interface CJPayOrderConfirmRequest : CJPayBaseRequest <CJPayRequestParamInjectDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apiPath;
+ (void)registerPlugin;
+ (void)startWithOrderResponse:(id)a0 withExtraParams:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (id)injectReskInfoData;
+ (id)injectDevInfoData;
+ (id)buildBizContentParamsWith:(id)a0 bizContentParams:(id)a1 extraParams:(id)a2 context:(id)a3;
+ (id)p_secureRequestParams:(id)a0 context:(id)a1;
+ (void)buildRequestParams:(id)a0 withExtraParams:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (void)p_trySignDataWithResponse:(id)a0 context:(id)a1 requestParams:(id)a2 completion:(id /* block */)a3;
+ (void)p_certSignWithResponse:(id)a0 extParams:(id)a1 originData:(id)a2 completion:(id /* block */)a3;


@end

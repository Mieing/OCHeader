@interface CJPayCardSignRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)p_startWithAppId:(id)a0 merchantId:(id)a1 bankCardId:(id)a2 assetBillIndex:(id)a3 processInfo:(id)a4 completion:(id /* block */)a5;
+ (id)p_buildRequestParamsWithAppId:(id)a0 merchantId:(id)a1 bankCardId:(id)a2 assetBillIndex:(id)a3 processInfo:(id)a4;
+ (id)p_buildBizContentParamsWithBankCardId:(id)a0 assetBillIndex:(id)a1 processInfo:(id)a2;
+ (void)startWithAppId:(id)a0 merchantId:(id)a1 bankCardId:(id)a2 processInfo:(id)a3 completion:(id /* block */)a4;
+ (void)startWithParams:(id)a0 processInfo:(id)a1 completion:(id /* block */)a2;

@end

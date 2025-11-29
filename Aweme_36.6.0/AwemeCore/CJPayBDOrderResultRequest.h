@class NSString;

@interface CJPayBDOrderResultRequest : CJPayBaseRequest <CJPayRequestParamInjectDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apiPath;
+ (void)registerPlugin;
+ (void)startWithAppId:(id)a0 merchantId:(id)a1 tradeNo:(id)a2 processInfo:(id)a3 exts:(id)a4 completion:(id /* block */)a5;
+ (id)p_buildRequestParamsWithAppId:(id)a0 merchantId:(id)a1 tradeNo:(id)a2 processInfo:(id)a3 exts:(id)a4;
+ (id)p_buildBizContentParamsWithTradeNo:(id)a0 processInfo:(id)a1 exts:(id)a2;
+ (void)startWithAppId:(id)a0 merchantId:(id)a1 tradeNo:(id)a2 processInfo:(id)a3 completion:(id /* block */)a4;
+ (id)injectReskInfoData;
+ (id)injectDevInfoData;


@end

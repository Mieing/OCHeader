@class NSString;

@interface CJPayDyPayTradeConfirmRequest : CJPayBaseRequest <CJPayRequestParamInjectDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apiPath;
+ (void)registerPlugin;
+ (id)injectReskInfoData;
+ (id)injectDevInfoData;
+ (id)buildBizContentParamsWith:(id)a0 bizContentParams:(id)a1 extraParams:(id)a2 context:(id)a3;
+ (void)p_trySignDataWithRenderModel:(id)a0 context:(id)a1 requestParams:(id)a2 completion:(id /* block */)a3;
+ (id)p_secureRequestParams:(id)a0 context:(id)a1;
+ (void)p_certSignWithRenderModel:(id)a0 extParams:(id)a1 originData:(id)a2 completion:(id /* block */)a3;
+ (void)startRequestWithParams:(id)a0 processInfo:(id)a1 completion:(id /* block */)a2;
+ (void)buildRequestParamsWithUnifyRenderModel:(id)a0 selectedShowConfig:(id)a1 apiPath:(id)a2 extraParams:(id)a3 context:(id)a4 completion:(id /* block */)a5;


@end

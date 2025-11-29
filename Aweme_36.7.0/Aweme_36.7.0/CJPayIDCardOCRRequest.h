@interface CJPayIDCardOCRRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithBizParams:(id)a0 scanStatus:(unsigned long long)a1;
+ (id)p_secureParams:(BOOL)a0;
+ (void)startWithScanStatus:(unsigned long long)a0 bizParams:(id)a1 completion:(id /* block */)a2;

@end

@interface WCPayBaseTenPayCgi : WCPayBaseCgi

- (id)init;
- (void)startTenPayRequestWithQueryDic:(id)a0 innerDic:(id)a1;
- (void)setupDigitalCertSign:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;

@end

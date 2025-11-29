@interface WCPayQrcodeScanIdentifyReportCgi : WCPayBaseCgi

- (id)init;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end

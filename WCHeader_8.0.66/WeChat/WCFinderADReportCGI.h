@interface WCFinderADReportCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long actionType;

- (id)initWithTid:(id)a0 scene:(unsigned long long)a1 actionType:(unsigned long long)a2 reportData:(id)a3 reportBypData:(id)a4 adInfo:(id)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;

@end

@class WCFinderReportBgmInteractParams;

@interface WCFinderReportBgmInteractCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderReportBgmInteractParams *params;

- (id)initWithParams:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

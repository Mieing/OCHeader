@class NSString;

@interface WCFinderPassReportCGI : WCFinderBaseCgi

@property (nonatomic) int passReportScene;
@property (copy, nonatomic) NSString *reportData;

- (id)initWithPassReportScene:(int)a0 reportData:(id)a1;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

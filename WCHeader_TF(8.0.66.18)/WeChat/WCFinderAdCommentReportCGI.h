@class NSString;

@interface WCFinderAdCommentReportCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *reportData;
@property (copy, nonatomic) NSString *reportBypData;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTid:(id)a0 scene:(int)a1 ReportData:(id)a2 reportBypData:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (BOOL)needADDeviceInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

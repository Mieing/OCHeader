@interface WCFinderCateLogStreamCgi : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithTabType:(int)a0 scene:(int)a1 pullType:(int)a2 username:(id)a3 clientStatus:(id)a4 extBuf:(id)a5 lastBuf:(id)a6 successful:(id /* block */)a7 failed:(id /* block */)a8;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

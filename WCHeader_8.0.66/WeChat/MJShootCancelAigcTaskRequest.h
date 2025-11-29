@interface MJShootCancelAigcTaskRequest : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithTaskID:(id)a0 metaData:(id)a1 contextBuff:(id)a2 successfulBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

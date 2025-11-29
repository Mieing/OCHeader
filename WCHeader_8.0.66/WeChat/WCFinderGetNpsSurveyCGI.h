@interface WCFinderGetNpsSurveyCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long taskId;
@property (nonatomic) unsigned long long feedId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(unsigned long long)a0 feedId:(unsigned long long)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (id)initWithTaskId:(unsigned long long)a0 feedId:(unsigned long long)a1 supportInfo:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

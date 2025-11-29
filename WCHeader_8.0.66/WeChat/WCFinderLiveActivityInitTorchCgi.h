@interface WCFinderLiveActivityInitTorchCgi : WCFinderLiveActivityBaseCgi

@property (nonatomic) unsigned long long torchSource;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 torchSource:(unsigned long long)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (id)responseFromBuffer:(id)a0;
- (void)didGetFinderLiveActivityCgiResponse:(id)a0;
- (void)finderLiveActivityCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@interface WCFinderGetUpLevelProductCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int targetLevel;
@property (nonatomic) BOOL useForLottery;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTargetLevel:(unsigned int)a0 useForLottery:(BOOL)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

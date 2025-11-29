@interface WCFinderBgmGetLyricCgi : WCFinderBaseCgi

@property (nonatomic) int type;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithType:(int)a0 identifier:(unsigned long long)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

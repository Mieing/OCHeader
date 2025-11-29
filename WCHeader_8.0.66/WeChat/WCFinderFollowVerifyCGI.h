@class NSString;

@interface WCFinderFollowVerifyCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long followId;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithFollowId:(unsigned long long)a0 optype:(unsigned int)a1 finderUsername:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

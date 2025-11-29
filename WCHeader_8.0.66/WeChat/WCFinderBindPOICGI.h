@class NSString, NSMutableArray;

@interface WCFinderBindPOICGI : WCFinderBaseCgi

@property (retain, nonatomic) NSMutableArray *ids;
@property (retain, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithIds:(id)a0 finderUsername:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class NSMutableArray;

@interface WCFinderMsgGetMsgSessionCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSMutableArray *sessionItemArray;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithSessionItemArray:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

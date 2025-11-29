@class NSString;

@interface WCFinderRealNameVerifyCGI : WCFinderBaseCgi

@property (nonatomic) int optype;
@property (retain, nonatomic) NSString *authToken;
@property (retain, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithOpType:(int)a0 finderUsername:(id)a1 authToken:(id)a2 code:(id)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

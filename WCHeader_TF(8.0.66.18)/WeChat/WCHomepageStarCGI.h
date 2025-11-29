@class SnsTopListResponse;

@interface WCHomepageStarCGI : WCBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (nonatomic) unsigned long long currentContinueReqCount;
@property (retain, nonatomic) SnsTopListResponse *responseToProcess;

- (id)init;
- (void)continueRequestWithMaxID:(unsigned long long)a0;
- (void)startRequest:(id)a0 withSuccessBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)getMergeResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

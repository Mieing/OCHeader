@interface WCFinderAuthorSingleFlowCgi : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithLastBuffer:(id)a0 feedid:(id)a1 nonceId:(id)a2 tabType:(int)a3 commentScene:(int)a4 params:(id)a5 successful:(id /* block */)a6 failed:(id /* block */)a7;
- (id)initWithLastBuffer:(id)a0 username:(id)a1 lastTid:(id)a2 nonceID:(id)a3 tabType:(int)a4 commentScene:(int)a5 params:(id)a6 successful:(id /* block */)a7 failed:(id /* block */)a8;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

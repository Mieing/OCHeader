@interface WCFinderLiveEndKtvSingingSessionCgi : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 songUniqueId:(id)a1 liveCookies:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

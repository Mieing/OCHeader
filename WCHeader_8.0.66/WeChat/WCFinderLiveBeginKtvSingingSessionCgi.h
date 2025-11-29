@interface WCFinderLiveBeginKtvSingingSessionCgi : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 songUniqueId:(id)a1 requiresSdkInfo:(BOOL)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

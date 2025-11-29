@interface WCFinderLiveReceiveCouponCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 stockIds:(id)a1 noticeID:(id)a2 anchorFinderUsername:(id)a3 liveCookies:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

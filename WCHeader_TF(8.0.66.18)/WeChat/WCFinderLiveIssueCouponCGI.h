@interface WCFinderLiveIssueCouponCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 mode:(int)a1 activityId:(unsigned long long)a2 stockId:(id)a3 scene:(long long)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

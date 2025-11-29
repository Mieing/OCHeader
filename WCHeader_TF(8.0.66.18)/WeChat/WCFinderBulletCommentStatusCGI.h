@interface WCFinderBulletCommentStatusCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithObjectId:(unsigned long long)a0 refBulletCommentId:(unsigned long long)a1 action:(long long)a2 finderUsername:(id)a3 nonceID:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

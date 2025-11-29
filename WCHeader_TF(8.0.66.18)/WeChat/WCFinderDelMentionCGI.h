@interface WCFinderDelMentionCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithUsername:(id)a0 mention:(id)a1 mentionBuffer:(id)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

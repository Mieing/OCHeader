@class NSArray;

@interface WCFinderBatchGetObjectsCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSArray *objectRequestArray;
@property (nonatomic) int batchLoadScene;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithObjectId:(id)a0 scene:(int)a1 batchLoadScene:(int)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

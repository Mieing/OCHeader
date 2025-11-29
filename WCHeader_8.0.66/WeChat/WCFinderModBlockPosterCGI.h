@class NSString;

@interface WCFinderModBlockPosterCGI : WCFinderBaseCgi

@property (nonatomic) BOOL setBlock;
@property (retain, nonatomic) NSString *feedID;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithUserName:(id)a0 setBlock:(BOOL)a1 selfUserName:(id)a2 enterFeedID:(id)a3 scene:(int)a4 sessionBuffer:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (id)createRequest:(id)a0 setBlock:(BOOL)a1 selfUserName:(id)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

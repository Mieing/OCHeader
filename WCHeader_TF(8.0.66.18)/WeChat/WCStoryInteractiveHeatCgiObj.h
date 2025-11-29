@class NSArray;

@interface WCStoryInteractiveHeatCgiObj : WCStoryBaseCGIObj

@property (copy, nonatomic) id /* block */ successBlcok;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSArray *tidArray;
@property (copy, nonatomic) id /* block */ dbSyncBlock;

- (id)initWithDataItemTidArray:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@protocol WCFinderUserPrepareCgiDelegate;

@interface WCFinderUserPrepareCgi : WCFinderBaseCgi

@property (nonatomic) int scene;
@property (weak, nonatomic) id<WCFinderUserPrepareCgiDelegate> delegate;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) id /* block */ successfulBlock;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)logInfoWithObject:(id)a0;
- (void).cxx_destruct;

@end

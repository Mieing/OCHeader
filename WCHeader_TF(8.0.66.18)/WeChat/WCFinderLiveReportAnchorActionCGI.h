@interface WCFinderLiveReportAnchorActionCGI : WCFinderLiveBaseCgi

@property (nonatomic) int actionType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(id)a0 actionType:(int)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

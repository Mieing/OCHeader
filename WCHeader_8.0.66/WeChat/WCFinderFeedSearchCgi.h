@interface WCFinderFeedSearchCgi : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithQueryText:(id)a0 tagTexts:(id)a1 requestID:(id)a2 interactionScene:(int)a3 commentScene:(int)a4 lastBuffer:(id)a5 success:(id /* block */)a6 failure:(id /* block */)a7;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

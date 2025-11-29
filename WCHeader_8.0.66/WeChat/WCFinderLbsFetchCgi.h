@class NSString;

@interface WCFinderLbsFetchCgi : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (readonly, nonatomic) NSString *keyword;

- (id)initWithSearchWord:(id)a0 streamRequestList:(id)a1 finderUsername:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

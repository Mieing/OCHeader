@class NSString;

@interface WCFinderModFeedReproductionCgi : WCFinderBaseCgi

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL notReproduction;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithUsername:(id)a0 notReproduction:(BOOL)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

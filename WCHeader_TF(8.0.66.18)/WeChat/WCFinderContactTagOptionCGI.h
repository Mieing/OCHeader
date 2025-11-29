@class NSString;

@interface WCFinderContactTagOptionCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned long long optionType;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithWxUsername:(id)a0 optionType:(unsigned long long)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

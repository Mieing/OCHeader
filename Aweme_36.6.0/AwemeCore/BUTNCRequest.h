@class NSArray, NSMutableDictionary;

@interface BUTNCRequest : BUNetworkRequest

@property (retain, nonatomic) NSMutableDictionary *domainsState;
@property (copy, nonatomic) NSArray *domains;

+ (id)requestWithDomains:(id)a0 url:(id)a1 andParams:(id)a2;

- (void)recordFailDomain:(id)a0;
- (id)initWithDomains:(id)a0 url:(id)a1 method:(long long)a2 parameter:(id)a3;
- (void).cxx_destruct;
- (void)resetState;
- (id)baseUrl;

@end

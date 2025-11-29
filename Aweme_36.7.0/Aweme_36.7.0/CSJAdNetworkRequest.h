@class NSString;

@interface CSJAdNetworkRequest : BUNetworkRequest

@property (class, readonly, nonatomic) NSString *bu_base_URL;

@property (nonatomic) BOOL isStatsRequest;

- (id)initWithUrl:(id)a0 method:(long long)a1 parameter:(id)a2;
- (id /* block */)failureCompletionBlock;
- (id /* block */)successCompletionBlock;
- (id)TNCServiceKey;
- (id)baseUrl;

@end

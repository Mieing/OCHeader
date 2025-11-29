@class NSString;

@interface WCFinderGetTopicSuggestCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *topicQuery;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

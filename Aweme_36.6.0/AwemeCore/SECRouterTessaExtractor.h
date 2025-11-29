@class NSString, SECRouteTrace, SECStandardURL;

@interface SECRouterTessaExtractor : NSObject <SECTessaExtractor>

@property (retain, nonatomic) SECRouteTrace *router;
@property (copy, nonatomic) SECStandardURL *routerURL;
@property (copy, nonatomic) id /* block */ extractor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHybridTrace:(id)a0 withURL:(id)a1;
- (id)extract;
- (id)initWithRouterTrace:(id)a0 withURL:(id)a1;
- (id)initWithRouterTrace:(id)a0 withURLString:(id)a1;
- (void).cxx_destruct;

@end

@class NSMutableDictionary;

@interface WCFinderOplogCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSMutableDictionary *handlerMap;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) id /* block */ successful;

- (id)initWithRequest:(id)a0;
- (void)addCmdId:(int)a0 responseClass:(Class)a1 handler:(id /* block */)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

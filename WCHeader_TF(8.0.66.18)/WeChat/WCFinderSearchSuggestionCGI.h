@class NSString, NSData;

@interface WCFinderSearchSuggestionCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int scene;

- (id)initWithSessionBuffer:(id)a0 query:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)initWithSessionBuffer:(id)a0 query:(id)a1 scene:(unsigned int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

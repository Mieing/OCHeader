@class NSString, NSData;

@interface WCFinderEventUserPageCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithPosterUsername:(id)a0 lastBuffer:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

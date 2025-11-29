@class NSString, NSData;

@interface WCFinderUserPOIRequest : WCFinderBaseCgi

@property (copy, nonatomic) NSString *queryText;
@property (copy, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithQuery:(id)a0 lastBuffer:(id)a1 finderUserName:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

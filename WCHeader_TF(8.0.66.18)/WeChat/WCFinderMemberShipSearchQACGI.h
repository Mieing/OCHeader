@class NSString, NSData;

@interface WCFinderMemberShipSearchQACGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *queryStr;
@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuff;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithQuery:(id)a0 finderUsername:(id)a1 lastBuff:(id)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

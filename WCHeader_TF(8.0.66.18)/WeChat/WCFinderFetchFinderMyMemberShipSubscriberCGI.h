@class NSString, NSData;

@interface WCFinderFetchFinderMyMemberShipSubscriberCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 lastBuff:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class NSString;

@interface WCFinderFetchFinderMemberShipQAListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *lastBuff;
@property (nonatomic) int getType;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 lastBuff:(id)a1 getType:(int)a2 objectId:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

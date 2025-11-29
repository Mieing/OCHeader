@class NSString, NSData;

@interface WCFinderFetchFinderMemberShipHomePageListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL seeAuthorOnly;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 lastBuff:(id)a1 seeAuthorOnly:(BOOL)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

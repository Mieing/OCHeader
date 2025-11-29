@class NSString, NSData;

@interface WCFinderFetchFinderSubscribeMemberShipPayBillCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long monthCount;
@property (nonatomic) unsigned long long subscriptionType;
@property (retain, nonatomic) NSData *subscriptionExtInfo;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) unsigned long long entranceSource;

- (id)initWithFinderUsername:(id)a0 monthCount:(unsigned long long)a1 subscriptionType:(unsigned long long)a2 subscriptionExtInfo:(id)a3 entranceSource:(unsigned long long)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

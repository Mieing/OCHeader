@class NSString;

@interface WCFinderLiveAddFansListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) unsigned long long liveID;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long maxFansId;

- (id)initWithLiveID:(unsigned long long)a0 maxFansId:(unsigned long long)a1 finderUsername:(id)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

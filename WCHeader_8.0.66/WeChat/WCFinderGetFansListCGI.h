@class NSData, NSString;

@interface WCFinderGetFansListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) unsigned long long lastFansMaxId;
@property (retain, nonatomic) NSData *lastBuf;
@property (copy, nonatomic) NSString *finderUsername;

- (id)initWithLastFansMaxId:(unsigned long long)a0 lastBuf:(id)a1 finderUsername:(id)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

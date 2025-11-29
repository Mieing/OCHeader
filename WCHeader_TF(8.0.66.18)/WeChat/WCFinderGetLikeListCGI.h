@class NSString, NSData, FinderClientStatus;

@interface WCFinderGetLikeListCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *targetUsername;
@property (copy, nonatomic) NSString *lastDisplayId;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) int tabType;
@property (retain, nonatomic) FinderClientStatus *clientStatus;

- (id)initWithLastBuff:(id)a0 targetUsername:(id)a1 clientStatus:(id)a2 scene:(int)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (id)initWithLastBuff:(id)a0 targetUsername:(id)a1 scene:(int)a2 clientStatus:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (id)initWithLastBuff:(id)a0 targetUsername:(id)a1 scene:(int)a2 tabType:(int)a3 clientStatus:(id)a4 successful:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequestWithScene:(int)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

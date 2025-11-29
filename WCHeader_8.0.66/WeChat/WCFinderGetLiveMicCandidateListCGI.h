@class NSData;

@interface WCFinderGetLiveMicCandidateListCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *liveJumpinfoCgiBuff;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithLastBuffer:(id)a0 liveJumpinfoCgiBuff:(id)a1 liveCookies:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

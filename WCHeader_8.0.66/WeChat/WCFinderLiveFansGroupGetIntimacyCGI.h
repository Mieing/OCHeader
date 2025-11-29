@class NSData;

@interface WCFinderLiveFansGroupGetIntimacyCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)getIntimacyInfoFromResponse:(id)a0;
- (void).cxx_destruct;

@end

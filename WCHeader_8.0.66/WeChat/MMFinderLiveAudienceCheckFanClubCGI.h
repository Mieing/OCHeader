@class NSData;

@interface MMFinderLiveAudienceCheckFanClubCGI : WCFinderLiveBaseCgi

@property (nonatomic) int opCode;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) id /* block */ successBlock;

- (id)initQuerySuperfanProductWithTaskId:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)initCheckAudienceFanClubWithTaskId:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

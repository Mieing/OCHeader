@interface WCFinderLiveReserveMilestoneLotteryCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 noticeId:(id)a1 liveCookies:(id)a2 audienceFinderUsername:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequestWithId:(id)a0 liveCookies:(id)a1 audienceFinderUsername:(id)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

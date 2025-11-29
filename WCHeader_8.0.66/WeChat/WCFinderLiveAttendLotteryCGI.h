@interface WCFinderLiveAttendLotteryCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithTaskId:(id)a0 attendLotteryType:(unsigned int)a1 objectId:(unsigned long long)a2 liveCookies:(id)a3 successCompletion:(id /* block */)a4 failedCompletion:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

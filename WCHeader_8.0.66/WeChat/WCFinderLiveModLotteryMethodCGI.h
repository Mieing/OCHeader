@class NSData, MMFinderLiveLotteryMethodInfo;

@interface WCFinderLiveModLotteryMethodCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) MMFinderLiveLotteryMethodInfo *lotteryMethodInfo;
@property (retain, nonatomic) NSData *liveCookies;

- (id)initWithLotteryMethodInfo:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

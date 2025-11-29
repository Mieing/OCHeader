@class NSString, NSData;

@interface WCFinderLiveGetMilestoneLotteryInfoCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 lotteryId:(id)a1 liveCookies:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

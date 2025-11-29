@class WCFinderDataItem, MMFinderLiveLotteryCreateInfo, NSData;

@interface WCFinderLiveCreateLotteryCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) MMFinderLiveLotteryCreateInfo *createInfo;
@property (nonatomic) long long optype;
@property (retain, nonatomic) NSData *liveCookies;

- (id)initWithLotteryCreateInfo:(id)a0 finderDataItem:(id)a1 optype:(long long)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

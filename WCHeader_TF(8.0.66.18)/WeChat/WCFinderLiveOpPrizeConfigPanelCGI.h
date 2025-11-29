@class MMFinderLivePrizeConfigItem, NSData;

@interface WCFinderLiveOpPrizeConfigPanelCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) MMFinderLivePrizeConfigItem *configItem;
@property (retain, nonatomic) NSData *liveCookies;

- (id)initWithConfigItem:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

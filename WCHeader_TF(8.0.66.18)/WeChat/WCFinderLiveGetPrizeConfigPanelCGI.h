@class WCFinderDataItem, NSData, NSString;

@interface WCFinderLiveGetPrizeConfigPanelCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *anchorFinderUserName;

- (id)initWithLiveGetPrizeConfigPanel:(id)a0 anchorFinderUserName:(id)a1 liveCookies:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

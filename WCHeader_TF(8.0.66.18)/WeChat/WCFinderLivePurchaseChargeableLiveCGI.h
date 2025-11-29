@class WCFinderDataItem, NSData, NSString;

@interface WCFinderLivePurchaseChargeableLiveCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned int wecoinAmount;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *sessionBuffer;

- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 wecoinAmount:(unsigned int)a2 sessionBuffer:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

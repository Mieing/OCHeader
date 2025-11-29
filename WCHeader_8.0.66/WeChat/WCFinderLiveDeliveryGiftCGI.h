@class WCFinderDataItem, NSData, NSString;

@interface WCFinderLiveDeliveryGiftCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) NSString *comboId;

- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 rewardExtInfo:(id)a2 sessionBuffer:(id)a3 comboId:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

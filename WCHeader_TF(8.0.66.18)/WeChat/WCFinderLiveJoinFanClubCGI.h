@class WCFinderDataItem, NSData, NSString;

@interface WCFinderLiveJoinFanClubCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSString *comboId;
@property (copy, nonatomic) NSString *sessionBuffer;

- (id)initWithFinderTaskId:(id)a0 comboId:(id)a1 liveCookies:(id)a2 rewardExtInfo:(id)a3 sessionBuffer:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

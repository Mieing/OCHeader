@class WCFinderDataItem, NSString, NSData;

@interface WCFinderLiveModifyBattleCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *battleId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long modifyFlag;
@property (nonatomic) unsigned int battleLayout;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 battleId:(id)a2 liveCookies:(id)a3 modifyFlag:(unsigned long long)a4 battleLayout:(unsigned int)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

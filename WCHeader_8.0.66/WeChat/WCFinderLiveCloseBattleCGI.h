@class NSString, NSData, WCFinderDataItem, WCFinderContact;

@interface WCFinderLiveCloseBattleCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (copy, nonatomic) NSString *battleSessionId;
@property (nonatomic) unsigned long long closeScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 battleSessionId:(id)a3 closeScene:(unsigned long long)a4 liveCookies:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

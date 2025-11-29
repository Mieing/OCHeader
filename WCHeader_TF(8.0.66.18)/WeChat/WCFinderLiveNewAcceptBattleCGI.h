@class WCFinderDataItem, NSString, NSData;

@interface WCFinderLiveNewAcceptBattleCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *battleSessionId;
@property (copy, nonatomic) NSString *refMicId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *vroomId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 refMicId:(id)a2 battleSessionId:(id)a3 liveCookies:(id)a4 vroomId:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

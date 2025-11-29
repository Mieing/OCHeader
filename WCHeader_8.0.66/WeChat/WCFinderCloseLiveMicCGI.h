@class NSString, NSData, WCFinderDataItem, WCFinderContact;

@interface WCFinderCloseLiveMicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (copy, nonatomic) NSString *sdkUserId;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int closeScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 sdkUserId:(id)a3 sessionId:(id)a4 closeScene:(long long)a5 liveCookies:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

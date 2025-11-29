@class NSString, NSData, WCFinderDataItem, WCFinderContact;

@interface WCFinderLiveCloseMicWithAudienceCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *sdkUserId;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int closeScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 toFinderContact:(id)a2 isAnchor:(BOOL)a3 sdkUserId:(id)a4 sessionId:(id)a5 closeScene:(long long)a6 liveCookies:(id)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

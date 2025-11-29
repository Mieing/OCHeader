@class WCFinderDataItem, NSString;

@interface WCFinderLiveGamePopSceneCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *gameAppId;
@property (nonatomic) long long scene;
@property (nonatomic) long long result;

- (id)initWithScene:(long long)a0 result:(long long)a1 liveTaskId:(id)a2 finderDataItem:(id)a3 gameAppId:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

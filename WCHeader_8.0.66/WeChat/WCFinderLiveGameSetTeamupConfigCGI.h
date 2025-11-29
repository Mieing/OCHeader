@class NSData, NSDictionary;

@interface WCFinderLiveGameSetTeamupConfigCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int liveScene;
@property (retain, nonatomic) NSDictionary *gameInfo;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 liveCookies:(id)a2 liveScene:(long long)a3 gameInfo:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

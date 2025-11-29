@class NSData;

@interface WCFinderLiveJoinGameTeamPrepareCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) int reqType;

- (id)initWithLiveTaskId:(id)a0 reqType:(int)a1 finderDataItem:(id)a2 liveCookies:(id)a3 liveScene:(long long)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

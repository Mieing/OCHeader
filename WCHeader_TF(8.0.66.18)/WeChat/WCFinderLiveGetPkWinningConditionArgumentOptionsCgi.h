@class NSString, NSData;

@interface WCFinderLiveGetPkWinningConditionArgumentOptionsCgi : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long winningCondition;
@property (retain, nonatomic) NSString *micVirtualRoomId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int battleScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 winningCondition:(unsigned long long)a1 micVirtualRoomId:(id)a2 liveCookies:(id)a3 battleScene:(unsigned int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

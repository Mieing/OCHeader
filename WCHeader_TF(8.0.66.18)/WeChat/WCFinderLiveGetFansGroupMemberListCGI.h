@class NSData;

@interface WCFinderLiveGetFansGroupMemberListCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) long long liveScene;
@property (nonatomic) int memberType;
@property (nonatomic) int sortType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 lastBuffer:(id)a1 liveCookies:(id)a2 liveScene:(long long)a3 filterType:(unsigned long long)a4 sortType:(unsigned long long)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)convertFansGroupMemberList:(id)a0;
- (void).cxx_destruct;

@end

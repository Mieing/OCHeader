@class NSData, NSString, FinderLiveBoxId;

@interface WCFinderLiveGetFriendBoxLiveMsgCGI : WCFinderLiveBaseBoxCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 lastBuffer:(id)a2 boxId:(id)a3 objectId:(unsigned long long)a4 liveId:(unsigned long long)a5 finderUsername:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

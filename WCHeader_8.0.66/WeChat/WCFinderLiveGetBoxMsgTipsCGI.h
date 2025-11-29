@class NSData, NSMutableArray, NSString;

@interface WCFinderLiveGetBoxMsgTipsCGI : WCFinderLiveBaseBoxCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *boxList;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 boxList:(id)a2 objectId:(unsigned long long)a3 liveId:(unsigned long long)a4 finderUsername:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)configBoxIdList;
- (void).cxx_destruct;

@end

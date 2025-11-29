@class NSString, NSData;

@interface WCFinderLiveConcertGetTicketCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *audienceFinderUsername;
@property (nonatomic) unsigned long long objectID;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) BOOL receive;
@property (nonatomic) BOOL needPageItem;
@property (nonatomic) unsigned int opScene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long paramSource;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 audienceFinderUsername:(id)a2 receive:(BOOL)a3 needPageItem:(BOOL)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithNoticeId:(id)a0 activityId:(id)a1 audienceFinderUsername:(id)a2 receive:(BOOL)a3 needPageItem:(BOOL)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithActivityId:(id)a0 objectId:(unsigned long long)a1 liveId:(unsigned long long)a2 audienceFinderUsername:(id)a3 receive:(BOOL)a4 needPageItem:(BOOL)a5 operationScene:(unsigned int)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)createReceiveRequest;
- (void)createNoReceiveRequest;
- (void)didGetResponse:(id)a0;
- (void)didGetReceiveResponse:(id)a0;
- (void)didGetNoReceiveResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

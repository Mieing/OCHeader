@class FinderLiveAppMsg, NSString, NSData, WCFinderDataItem;

@interface WCFinderLivePostPersonalMsgCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *localClientMsgId;
@property (retain, nonatomic) FinderLiveAppMsg *appMsg;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

+ (BOOL)isErrorTypeNotNeedRetry:(int)a0;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 sessionId:(id)a3 liveCookies:(id)a4 fromUser:(id)a5 toUser:(id)a6 content:(id)a7 clientMsgId:(id)a8 successBlock:(id /* block */)a9 failBlock:(id /* block */)a10;
- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 sessionId:(id)a2 liveCookies:(id)a3 clientMsgId:(id)a4 uploadAppMsg:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

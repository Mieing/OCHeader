@class NSString;

@interface WCStoryUserPageCgiObj : WCStoryBaseCGIObj

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned long long maxId;
@property (nonatomic) unsigned int source;
@property (copy, nonatomic) id /* block */ dataCallBack;
@property (copy, nonatomic) id /* block */ dbSyncCallBack;
@property (copy, nonatomic) id /* block */ getDBDataCallBack;

- (id)initWithUserName:(id)a0 MaxId:(unsigned long long)a1 ChatRoomName:(id)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)converListStoryObjToStoryItem:(id)a0;
- (void).cxx_destruct;

@end

@class NSData, NSString, FinderLiveClientStatus;

@interface WCFinderFeedStreamGetLiveMsgCGI : WCFinderLiveGetMsgBaseCGI

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL offline;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectID;
@property (retain, nonatomic) NSString *objectNonceID;
@property (retain, nonatomic) NSString *sessionExtraKey;
@property (retain, nonatomic) FinderLiveClientStatus *liveClientStatus;
@property (nonatomic) int commentScene;

- (id)initWithFinderDataItem:(id)a0 liveCookies:(id)a1 offline:(BOOL)a2 scene:(long long)a3 commentScene:(int)a4 sessionExtraKey:(id)a5 liveTaskId:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void).cxx_destruct;

@end

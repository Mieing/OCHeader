@class NSString, FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo, FinderGetLiveInfoReq_LiveADBypassInfo;

@interface WCFinderGetLiveInfoCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUserName;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) FinderGetLiveInfoReq_LiveADBypassInfo *liveAdByPassInfo;
@property (retain, nonatomic) FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *notificationInfo;

- (id)initWithLiveId:(unsigned long long)a0 andFinderUsername:(id)a1 andScene:(unsigned int)a2 liveAdByPassInfo:(id)a3 notificationInfo:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

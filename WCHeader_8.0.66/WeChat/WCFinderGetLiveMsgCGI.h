@class WCFinderGetLiveMsgRequestParams, NSString, FinderLiveClientStatus, NSData, FinderLiveSeiStatInfo;

@interface WCFinderGetLiveMsgCGI : WCFinderLiveGetMsgBaseCGI

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL offline;
@property (nonatomic) unsigned int offlineScene;
@property (retain, nonatomic) FinderLiveClientStatus *liveClientStatus;
@property (retain, nonatomic) FinderLiveSeiStatInfo *seiStatInfo;
@property (retain, nonatomic) NSString *streamId;
@property (retain, nonatomic) WCFinderGetLiveMsgRequestParams *reqParams;

+ (id)getDescriptionForMsgConfig:(id)a0;

- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 offline:(BOOL)a2 offlineScene:(unsigned int)a3 liveClientStatus:(id)a4 seiStatInfo:(id)a5 streamId:(id)a6 requestParams:(id)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
- (void)createRequest;
- (void)fillAudienceStatusInfo:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (id)getCurrentBoxId;
- (void).cxx_destruct;

@end

@class IESLiveGuideStartLiveRequestResultHandler, NSString, IESLiveGuideStartLivePreCheckHandler, IESLiveGuideStartLiveRequestParamsHandler, HTSHotsoonRoomAPI;

@interface IESLiveGuideStartLiveServiceIMP : IESLiveGeneralBaseService <IESLiveGuideStartLiveService>

@property (retain, nonatomic) IESLiveGuideStartLivePreCheckHandler *checkHandler;
@property (retain, nonatomic) IESLiveGuideStartLiveRequestParamsHandler *requestParamsHandler;
@property (retain, nonatomic) HTSHotsoonRoomAPI *startLiveApi;
@property (retain, nonatomic) IESLiveGuideStartLiveRequestResultHandler *requestResultHandler;
@property (nonatomic) BOOL requesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)startLive:(long long)a0 needReturnAnchorVC:(BOOL)a1 completion:(id /* block */)a2;
- (void)checkHAuthorization;
- (BOOL)isStartLiveRequesting;
- (id)getTrackSubScene:(id)a0;
- (id)getLiveType;
- (void)trackLoadingWithRoom:(id)a0;
- (void)willStartLiveRequestHandler:(long long)a0;
- (void)trackLiveTakeRoomStart;
- (id)createLiveRequestParamsHandler;
- (void)startLiveRequestResponseHandler:(id)a0 error:(id)a1 needReturnAnchorVC:(BOOL)a2 requestParams:(id)a3 ntpTime:(long long)a4 startTime:(double)a5 clickType:(long long)a6 completion:(id /* block */)a7;
- (void)handleStartLiveMonitor:(long long)a0;
- (id)mediaTypeFromLiveType:(unsigned long long)a0;
- (void)startLiveResultHandler:(BOOL)a0 room:(id)a1 error:(id)a2 clickType:(long long)a3 needReturnAnchorVC:(BOOL)a4 completion:(id /* block */)a5;
- (void)trackLiveActionEvent:(BOOL)a0 room:(id)a1 clickType:(long long)a2;
- (id)lastFeedTrackerParams;
- (void).cxx_destruct;
- (id)challengeID;

@end

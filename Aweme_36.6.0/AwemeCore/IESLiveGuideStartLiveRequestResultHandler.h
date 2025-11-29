@class IESLiveGuideModel, IESLiveSkipCertificateApi;
@protocol IESLiveCreateRoomPreCheckService, IESLiveVerifyConfigAdapter, IESLiveInteractiveQuickStartServiceProtocol, IESLiveMonitor;

@interface IESLiveGuideStartLiveRequestResultHandler : NSObject

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) id<IESLiveVerifyConfigAdapter> verifyConfig;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) unsigned long long createRoomType;
@property (retain, nonatomic) id<IESLiveCreateRoomPreCheckService> preCheckService;
@property (retain, nonatomic) IESLiveSkipCertificateApi *skipApi;
@property (retain, nonatomic) id<IESLiveInteractiveQuickStartServiceProtocol> startService;

- (void)popupPermissionsAlertWithLiveType:(unsigned long long)a0 applyStatus:(long long)a1 enterFrom:(id)a2;
- (id)initWithGuideModel:(id)a0 attachingDIContext:(id)a1;
- (void)showAnchorProtocolAlertView;
- (void)roomCreated:(id)a0 withError:(id)a1 checkInfo:(id)a2 mediaType:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)mapFromHTSLiveType:(unsigned long long)a0;
- (void)handleCreateRoomError:(id)a0 checkInfo:(id)a1;
- (void)continueDealStartLiveResponse:(id)a0 error:(id)a1 success:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isValidRoom:(id)a0;
- (void)audioGameApiFetchWithRoom:(id)a0 completion:(id /* block */)a1;
- (void)handleCreateRoomError:(id)a0;
- (void)triggerFaceRecognitionWithScene:(id)a0 flow:(id)a1 ticket:(id)a2 uniqueId:(id)a3;
- (void)popupProfessionCertificatePanel:(id)a0;
- (void)handleErrorInfo:(id)a0;
- (BOOL)userNeedAuth:(long long)a0;
- (void)dealStartLiveResponse:(id)a0 error:(id)a1 requestParams:(id)a2 validParamsDic:(id)a3 invalidParamsDic:(id)a4 ntpTime:(long long)a5 mediaType:(id)a6 startTime:(double)a7 completion:(id /* block */)a8;
- (void).cxx_destruct;

@end

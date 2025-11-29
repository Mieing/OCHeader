@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVVoipWebServiceAdapterProtocol, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVVoipWebService : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> monitor;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigManager;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)webSocketRequestEnable;
- (id)__getRequestWithName:(id)a0 queryItems:(id)a1;
- (id)__postRequestWithName:(id)a0 jsonBody:(id)a1;
- (id)ackWithCallID:(id)a0 sequenceID:(id)a1;
- (id)ackV2WithSequenceID:(id)a0;
- (id)distributeRoom:(id)a0;
- (id)fetchMissCalls;
- (id)observeRoom:(BOOL)a0 withRoomID:(id)a1;
- (id)checkVoipRoomAliveWithID:(id)a0;
- (id)fetchSecurityCallAlertInfo:(id)a0 conversationID:(id)a1 conversationType:(long long)a2 dialogCode:(id)a3;
- (id)uploadVoIPPushToken:(id)a0;
- (id)enableShowPush:(id)a0;
- (id)voipPatchRequestWithCallID:(id)a0 status:(long long)a1 type:(long long)a2 callType:(long long)a3;
- (id)voipPullRequestWithConfiguration:(id)a0;
- (id)voipSwitchTypeWithCallID:(id)a0 toType:(long long)a1 callType:(long long)a2;
- (id)toggleCameraOff:(BOOL)a0 withRoomID:(id)a1;
- (id)updateSelfParticiantExt:(id)a0 withRoomID:(id)a1;
- (id)invoke1V1VoipWithUserIMID:(id)a0 clientID:(id)a1 preFetchToken:(id)a2 type:(long long)a3 cameraOff:(BOOL)a4 useRtcTestEnv:(BOOL)a5 initialState:(id)a6 confirmedCodeArray:(id)a7 bizType:(long long)a8 businessInfo:(id)a9 ext:(id)a10;
- (id)keepaliveWithCallID:(id)a0 cameraOff:(BOOL)a1 micOff:(BOOL)a2 voipStatusChangeList:(id)a3;
- (id)pullRoomInfoWithNewPathAndRoomID:(id)a0 roomVersion:(id)a1;
- (id)pullRoomsInfoWithRoomIDs:(id)a0;
- (id)createCallWithClientID:(id)a0 conversationShortID:(id)a1 participatorIMIDs:(id)a2 cameraOff:(BOOL)a3 source:(long long)a4 inviteText:(id)a5 confirmedCodeArray:(id)a6 bizType:(long long)a7 ext:(id)a8;
- (id)joinCallWithID:(id)a0 bizType:(id)a1;
- (id)inviteParticipators:(id)a0 groups:(id)a1 joinCall:(id)a2;
- (id)reportRecordStateWithCallID:(id)a0 callType:(long long)a1 start:(BOOL)a2;
- (id)__voipInfoV1WithDictionary:(id)a0;
- (long long)__requestVoipTypeWithVoipType:(long long)a0;
- (id)__voipInfoWithResponseDictionary:(id)a0;
- (id)__voipCallInfoWithResponseDictionary:(id)a0;
- (id)createDistributableRoomCallWithClientID:(id)a0 conversationShortID:(id)a1 participatorIMIDs:(id)a2 cameraOff:(BOOL)a3 source:(long long)a4 inviteText:(id)a5 bizType:(long long)a6 ext:(id)a7;
- (id)joinCallWithID:(id)a0;
- (void).cxx_destruct;

@end

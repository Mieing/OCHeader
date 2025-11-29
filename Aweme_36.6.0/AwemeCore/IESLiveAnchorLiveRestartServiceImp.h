@class HTSEventContext, IESLiveCheckExistChatroomAPI, NSString, IESLiveCheckExistAPI, IESLiveGCDTimer, IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData, HTSLiveRoom, IESLiveAnchorRoomConfigContext;
@protocol IESLiveEffectProcessLifyCycle, IESLiveRecoder;

@interface IESLiveAnchorLiveRestartServiceImp : NSObject <IESLiveAnchorLiveRestartService>

@property (nonatomic) double startTime;
@property (nonatomic) long long restartTime;
@property (retain, nonatomic) HTSLiveRoom *roomInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAnchorRoomConfigContext *roomContext;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData *chatroomInfo;
@property (retain, nonatomic) IESLiveCheckExistAPI *checkLiveRoomExistAPI;
@property (retain, nonatomic) IESLiveCheckExistChatroomAPI *checkChatRoomExistAPI;
@property (retain, nonatomic) IESLiveGCDTimer *loadingTimer;
@property (retain, nonatomic) id<IESLiveRecoder> recorder;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifyCycle;
@property (nonatomic) BOOL isRestarting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)restartLiveWithRoomContext:(id)a0;
- (void)updateTrackContext:(id)a0;
- (void)trackRestartResult:(long long)a0 msg:(id)a1;
- (void)startLoadingWithRoomContext:(id)a0;
- (void)getCurrentRoomInfo:(id /* block */)a0;
- (void)configRoomContext:(id)a0;
- (void)startLivingRoom;
- (void)startLoadingTimer:(id)a0;
- (void)stopLoadingTimer:(id)a0;
- (void)setupLivePipeline;
- (void)openLivingRoom;
- (void)setupRecorderIfNeed;
- (void)setupVideoProcesser;
- (void)setupEffectEnvironment;
- (id)createAnchorRoom;
- (void)getCurrentChatroomInfo:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clean;

@end

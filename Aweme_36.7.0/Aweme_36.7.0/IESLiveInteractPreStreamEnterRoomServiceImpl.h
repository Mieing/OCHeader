@class NSArray, NSString, IESLiveInteractionLayout;

@interface IESLiveInteractPreStreamEnterRoomServiceImpl : NSObject <IESLiveSocialInteractPreLoadExAction, HTSLiveAudienceActions, IESLiveInteractPreStreamEnterRoomService>

@property (retain, nonatomic) IESLiveInteractionLayout *preStreamEnterRoomLayout;
@property (copy, nonatomic) NSArray *preStreamEnterRoomUserList;
@property (nonatomic) BOOL didEnterRoomWithPreStreamData;
@property (nonatomic) unsigned long long finishStage;
@property (nonatomic) unsigned long long currentStage;
@property (nonatomic) BOOL preStreamEnterFinish;
@property (nonatomic) BOOL fakeViewRemoveOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)liveDidCloseAllRoom;
- (void)removeFakeView;
- (id)videoStreamColorWithLinkmicResult:(id)a0;
- (BOOL)couldEnterRoomWithPreStreamData;
- (void)markPreStreamEnterStage:(unsigned long long)a0;
- (void)registerPreStreamEnterFinishStage:(unsigned long long)a0;
- (void)logWithDescription:(id)a0 info:(id)a1;
- (id)nameWithStage:(unsigned long long)a0;
- (void)checkEnterRoomDidFinish;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAudio;

@end

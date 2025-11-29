@class IESLiveCheckExistAPI, HTSEventContext, NSString, IESLiveAnchorRoomConfigContext, HTSLiveRoom;

@interface IESLiveAnchorScreencastLiveRestartServiceImp : NSObject <IESLiveAnchorScreencastLiveRestartService>

@property (nonatomic) double startTime;
@property (nonatomic) long long restartTime;
@property (retain, nonatomic) HTSLiveRoom *roomInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAnchorRoomConfigContext *roomContext;
@property (retain, nonatomic) IESLiveCheckExistAPI *checkLiveRoomExistAPI;
@property (nonatomic) BOOL shouldResumeKTV;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isRestarting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)updateTrackContext:(id)a0;
- (void)restartLiveWithRoomContext:(id)a0 completion:(id /* block */)a1;
- (void)anchorLiveDidStop;
- (void)trackRestartResult:(long long)a0 msg:(id)a1;
- (void)getCurrentRoomInfo:(id /* block */)a0;
- (void)handlePreRestartFail;
- (void)screencastLiveRestart;
- (void)closeAnchorRoomCompletion;
- (void)exitScreencastLinkIfNeed;
- (void)exitScreencastKTVIfNeed;
- (void)screencastLiveInnerRestart;
- (void)cleanResumeConfig;
- (id)screencastLiveRestartInterface;
- (void)handleInnerRestartLiveResult:(BOOL)a0;
- (void)resumeIfNeed;
- (void)jumpToAnchorGuideVC;
- (void).cxx_destruct;

@end

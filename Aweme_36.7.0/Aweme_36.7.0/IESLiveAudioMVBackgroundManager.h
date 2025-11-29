@class IESLiveAudioMVSEIParserResult, IESLiveAudioMVInfoModel, IESLiveGCDTimer, IESLiveAudioMVBackgroundConfig, IESLiveInteractionMVPlayerManager, NSString;
@protocol IESLiveRoomService, IESLiveSEISenderService;

@interface IESLiveAudioMVBackgroundManager : NSObject <IESLiveSEIListener, IESLiveInteractionMVPlayerManagerDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveAudioMVInfoModel *mvInfo;
@property (retain, nonatomic) IESLiveInteractionMVPlayerManager *playerManager;
@property (nonatomic) BOOL isInMVMode;
@property (nonatomic) BOOL hasReportFirstRender;
@property (nonatomic) long long playDuration;
@property (nonatomic) double startPlayInterval;
@property (copy, nonatomic) id /* block */ firstRenderBlock;
@property (copy, nonatomic) id /* block */ stopCompletion;
@property (copy, nonatomic) id /* block */ waitingStopCompletion;
@property (retain, nonatomic) IESLiveAudioMVBackgroundConfig *audioMVBackgroundConfig;
@property (retain, nonatomic) IESLiveGCDTimer *sendSEITimer;
@property (weak, nonatomic) id<IESLiveSEISenderService> seiSenderService;
@property (retain, nonatomic) IESLiveAudioMVInfoModel *waitingMVInfo;
@property (copy, nonatomic) id /* block */ examineSuccessAction;
@property (nonatomic) double lastAdjustTime;
@property (retain, nonatomic) IESLiveAudioMVSEIParserResult *lastSEIResult;
@property (nonatomic) double lastReceivedSEITime;
@property (retain, nonatomic) IESLiveGCDTimer *examinePushTimer;
@property (nonatomic) BOOL didAddSEIListener;
@property (copy, nonatomic) id /* block */ didStartAction;
@property (copy, nonatomic) id /* block */ didStopAction;
@property (nonatomic) BOOL degradeMVBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)stopMVMode;
- (void)stopExaminePushTimer;
- (void)stopSendSEITimer;
- (void)generateAudioMVBackgroundPlayerWithConfig:(id)a0;
- (void)addSEIListener;
- (void)willStopLastMVPlay;
- (void)startSendSEITimer;
- (void)startMVMode;
- (void)didExamineSuccess;
- (void)startMVBackgroundWithMVInfo:(id)a0 audioMVBackgroundType:(unsigned long long)a1 stopCompletion:(id /* block */)a2;
- (void)removeSEIListener;
- (void)adjustPlayerOffsetWithForce:(BOOL)a0;
- (void)startExaminePushTimer;
- (void)handleMVExamineWithPush:(BOOL)a0;
- (void)sendMVSEI;
- (void)startMVBackgroundWithMVInfo:(id)a0 stopCompletion:(id /* block */)a1;
- (void)didMVBackgroundLoad;
- (void)setupFirstRenderBlock:(id /* block */)a0;
- (void)stopMVBackgroundWithStopCompletion:(id /* block */)a0;
- (BOOL)isMVPlaying;
- (long long)currentPlayDuration;
- (void).cxx_destruct;
- (void)clear;
- (id)playerView;
- (id)initWithRoom:(id)a0;

@end

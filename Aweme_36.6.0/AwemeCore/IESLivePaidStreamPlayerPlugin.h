@class NSString;
@protocol HTSLiveStreamPlayerProvider;

@interface IESLivePaidStreamPlayerPlugin : NSObject <HTSLiveStreamPlayerAction, HTSLiveAudienceActions, IESLivePipActions, IESLivePipActions, IESLivePaidStreamPlugin>

@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayer;
@property (nonatomic, getter=isLiveViewDidDisappear) BOOL liveViewDidDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startToShowPipWithShowType:(unsigned long long)a0;
- (void)closePipWithShowType:(unsigned long long)a0;
- (void)fromPipToRoomWithShowType:(unsigned long long)a0;
- (void)pipNeedToEnterNewRoom:(unsigned long long)a0;
- (void)didShowStageForPipModel:(id)a0;
- (void)didCloseStageForPipModel:(id)a0;
- (void)duringReturnToLiveForPipModel:(id)a0;
- (void)paidStreamDidStop:(id)a0;
- (void)paidStreamTrialWillStart:(id)a0;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 authDidEndWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 screenCapturedDidChange:(BOOL)a1;
- (void)liveWillAppear;
- (void)liveWillDisappear;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)muteStream;
- (void)unMuteStream;
- (void)streamPlayerDidReadyToRender;
- (void)playerDidEndplayInSmallWindow;
- (void)setPlayerStatusWhenCaptured:(BOOL)a0;
- (void)setPlayerStatusIfScreenCapturedWhenShowPip:(unsigned long long)a0;
- (void)setPlayerStatusIfScreenCapturedWhenClosePip:(unsigned long long)a0;
- (void).cxx_destruct;

@end

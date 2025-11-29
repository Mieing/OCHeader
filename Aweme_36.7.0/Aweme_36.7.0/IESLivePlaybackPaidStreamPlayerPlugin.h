@class NSString;
@protocol IESVSVideoPlayerRouter;

@interface IESLivePlaybackPaidStreamPlayerPlugin : NSObject <IESVSVideoPlayAction, IESLivePaidStreamPlugin>

@property (weak, nonatomic) id<IESVSVideoPlayerRouter> streamPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)paidStreamDidStop:(id)a0;
- (void)paidStreamTrialWillStart:(id)a0;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 authDidEndWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 screenCapturedDidChange:(BOOL)a1;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)onVideoPlay;
- (void)setPlayerStatusWhenCaptured:(BOOL)a0;
- (void).cxx_destruct;

@end

@class IESLiveFreeTrialToastView, NSString;
@protocol IESLivePlaybackCornerToastAction;

@interface IESLivePlaybackPaidStreamTrialToastPlugin : NSObject <IESLivePaidStreamPlugin>

@property (retain, nonatomic) id<IESLivePlaybackCornerToastAction> cornerToast;
@property (retain, nonatomic) IESLiveFreeTrialToastView *freeTrialToastView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)paidStreamDidStop:(id)a0;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (BOOL)showingTrialToast;
- (void)unInstallFreeTrialToast;
- (id)freeTrialToastString:(long long)a0;
- (void).cxx_destruct;

@end

@interface IESLivePaidStreamLogPlugin : NSObject <IESLivePaidStreamPlugin>

- (void)paidStreamDidStop:(id)a0;
- (void)paidStreamDidClose:(id)a0;
- (void)paidStreamTrialWillStart:(id)a0;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStreamTrialDidPause:(id)a0;
- (void)paidStreamTrialDidStop:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStreamAuthWillStart:(id)a0;
- (void)paidStream:(id)a0 authDidStartWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 authDidEndWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 willDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 didEndDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 actionForBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)paidStream:(id)a0 willInstallSecurityType:(unsigned long long)a1;
- (void)paidStreamWillStartScreenCaptured:(id)a0;
- (void)paidStream:(id)a0 screenCapturedDidChange:(BOOL)a1;
- (void)paidStreamWillDisplayScreenCapturedAlert:(id)a0;
- (void)paidStreamDidEndDisplayScreenCapturedAlert:(id)a0;
- (void)paidStream:(id)a0 willOpenPaidPanel:(unsigned long long)a1;
- (void)paidStream:(id)a0 didOpenPaidPanel:(unsigned long long)a1;
- (void)paidStreamAuthWillStartPolling:(id)a0;
- (void)paidStreamAuthDidEndPolling:(id)a0;
- (void)paidStreamAuthWillStartPromise:(id)a0;
- (void)paidStream:(id)a0 manualPromiseWithCompletionHandler:(id /* block */)a1;
- (void)paidStream:(id)a0 didEndPromiseWithError:(id)a1;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)logPaidStream:(id)a0 event:(id)a1 extraParams:(id)a2;
- (BOOL)paidStreamPluginShouldActive:(id)a0;

@end

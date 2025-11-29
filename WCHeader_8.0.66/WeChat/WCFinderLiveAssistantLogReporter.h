@interface WCFinderLiveAssistantLogReporter : WCFinderLiveAudienceLogReporter

- (void)reportPromoteAction:(long long)a0 actionType:(long long)a1 reportData:(id)a2 userType:(long long)a3;
- (void)reportPromoteAction:(long long)a0 actionType:(long long)a1 extra:(id)a2 userType:(long long)a3;
- (id)reportStructWithFinderLiveTask:(id)a0 actionType:(unsigned long long)a1 actionResult:(id)a2;

@end

@interface AWEIMGrowthImpl.StreakLiveActivityManager : NSObject <AWEUserMessage>

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)userDidSendMessageWithNoti:(id)a0;
- (void)transferToMessageVCWithNoti:(id)a0;
- (void)appDidBecomeActiveWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

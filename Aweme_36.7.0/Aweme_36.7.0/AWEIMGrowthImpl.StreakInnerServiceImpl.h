@interface AWEIMGrowthImpl.StreakInnerServiceImpl : HTSService <AWEIMStreakInnerService>

- (double)getStreakShowTime;
- (id)getStreakIconURLWithConversation:(id)a0;
- (id)getStreakIconURLWithLevel:(id)a0;
- (id)getStreakIconImageWithConversation:(id)a0;
- (id)getStreakIconImageWithLevel:(id)a0;
- (void)setupMajor;
- (void)setupSecondary;
- (void)createStreakRemindPushManager;
- (id)createStreakFlameView;
- (BOOL)canShowWidgetGuideWithIMMessageConversation:(id)a0;
- (id)init;

@end

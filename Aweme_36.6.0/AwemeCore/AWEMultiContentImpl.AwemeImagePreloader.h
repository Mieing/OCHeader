@interface AWEMultiContentImpl.AwemeImagePreloader : BDMultiContentContainer.DefaultImagePreloader

- (void)didReceiveMemoryDangerLevelTopNotification;
- (void)didReceiveMemoryBalanceRealTimeDangerLevelSecondaryNotification;

@end

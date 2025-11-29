@interface AWEDCFeedNotificationConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL shouldSubscribeDiggNotification;
@property (nonatomic) BOOL shouldSubscribeFavoriteNotification;

- (void)setupDefaultConfig;

@end

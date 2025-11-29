@interface AWEIMMessageTabFriendConversationBannerInteractor : AWEIMMessageTabCommonBannerInteractor

@property (nonatomic) BOOL dontTrackBannerShow;

+ (long long)bannerPriorityValue;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)trackBannerShow;
- (void)trackBannerWithEventType:(id)a0;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;

@end

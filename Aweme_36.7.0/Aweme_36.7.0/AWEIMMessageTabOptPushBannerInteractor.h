@interface AWEIMMessageTabOptPushBannerInteractor : AWEIMMessageTabCommonBannerInteractor

@property BOOL disableShow;
@property (nonatomic) BOOL didJumpToSystemSetting;

+ (Class)aAWEIMModuleConfigAdapterProtocolClass;
+ (long long)bannerPriorityValue;
+ (void)p_trackBannerClickWithShowReason:(id)a0 clickType:(id)a1;
+ (void)markCloseView;
+ (id)freqControlStorage;
+ (void)writeFreqControlStorage:(id)a0;
+ (void)p_trackBannerShowWithShowReason:(id)a0;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (id)aAWEIMModuleConfigAdapterProtocol;
- (id)bannerViewCreated;
- (void)openPushSettingComplete:(id /* block */)a0;
- (BOOL)p_imPrivatePush;
- (void)trackBannerViewDidShow;
- (void)dismissBannerViewWithPushEnabled:(BOOL)a0;
- (void)openReceiveRangeComplete:(id /* block */)a0;
- (void)onTabBarDidChangeToMessageTab;
- (void)shouldShowCacheBannerView:(id /* block */)a0;
- (void)willEnterForeground;

@end

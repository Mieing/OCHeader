@interface AWEIMMsgTabPrivateMsgTipBannerInteractor : AWEIMMessageTabCommonBannerInteractor

@property (nonatomic) long long exposureCount;
@property (nonatomic) BOOL disableShow;

+ (long long)bannerPriorityValue;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)messageTabDidDisappear;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;
- (void)p_trackBannerWithEventType:(id)a0;
- (void)p_recordExposureCount;
- (void)bannerWillAppearAgain;
- (void)autoChangeWhoCanMesssageMeSetWithCompletion:(id /* block */)a0;

@end

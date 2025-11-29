@class NSString, AWEIMPushGuideBannerV4Model;

@interface AWEIMMessageTabPushGuideV4BannerInteractor : AWEIMMessageTabCommonBannerInteractor <AWEPushBannerV4Delegate, AWEUserMessage>

@property (retain, nonatomic) AWEIMPushGuideBannerV4Model *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)bannerPriorityValue;

- (void)didFinishLoginWithUid:(id)a0;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)pushGuideBannerViewDidClose;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;
- (void)shouldShowCacheBannerView:(id /* block */)a0;
- (void)updateBannerViewIfNeeded;
- (BOOL)isIMListBannerShowing;
- (id)modelForCache;
- (void)setupDataWithCacheModel:(id)a0;
- (void)updateCacheBannerWithView:(id)a0 completion:(id /* block */)a1;
- (void)updateBannerOptExitRecordIfNeeded;
- (void)startBannerOptIconAnimationIfNeeded;
- (BOOL)shouldStartBannerOptIconAnimation;
- (void)didConfirm;
- (void)didCancel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

@class NSString, AWEIMPushGuideBannerModel;

@interface AWEIMMessageTabPushGuideBannerInteractor : AWEIMMessageTabCommonBannerInteractor <AWEIMPushGuideBannerViewDelegate>

@property (retain, nonatomic) AWEIMPushGuideBannerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)bannerPriorityValue;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)pushGuideBannerViewDidClose;
- (id)bannerViewCreated;
- (BOOL)shouldShowCacheBannerView;
- (void)shouldShowCacheBannerView:(id /* block */)a0;
- (id)modelForCache;
- (void)setupDataWithCacheModel:(id)a0;
- (void)updateCacheBannerWithView:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

@class NSString, UIView;
@protocol AWEIMMessageTabBannerInteractorDelegate;

@interface AWEIMMessageTabCommonBannerInteractor : NSObject <AWEIMSyncPriorityDispatchObjectProtocol>

@property (nonatomic) BOOL isBannerShowing;
@property (retain, nonatomic) UIView *bannerView;
@property (weak, nonatomic) id<AWEIMMessageTabBannerInteractorDelegate> delegate;
@property (nonatomic) BOOL showBannerAnimationWanted;
@property (nonatomic) BOOL dismissBannerAnimationWanted;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)bannerPriorityValue;
+ (id)bannerCache;
+ (id)identifier;
+ (BOOL)hasCache;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)autoDispatchFloatingView;
- (void)showBannerView;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;
- (void)shouldShowCacheBannerView:(id /* block */)a0;
- (id)modelForCache;
- (void)setupDataWithCacheModel:(id)a0;
- (void)updateCacheBannerWithView:(id)a0 completion:(id /* block */)a1;
- (void)handleCacheBannerView;
- (void)setBannerCache;
- (void)clearBannerCache;
- (void)bannerViewDidDismiss;
- (void)updateBannerCache;
- (void)dismissCacheBannerView;
- (void)setUpBannerDataModelForCache:(id)a0;
- (void).cxx_destruct;
- (void)dismissBannerView;

@end

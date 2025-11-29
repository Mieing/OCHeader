@class MMWebViewController, GCDragDecorateView, NSString;
@protocol GameCenterBannerNavBarProtocol, GameCenterBannerManagerDelegate;

@interface GameCenterBannerManager : MMUserService <UIScrollViewDelegate, MMServiceProtocol>

@property (nonatomic) double panStartBannerBottom;
@property (nonatomic) double bannerHwRatio;
@property (nonatomic) double bannerCapsuleHeight;
@property (nonatomic) double lastAnotherScrollViewContentOffsetY;
@property (retain, nonatomic) GCDragDecorateView *dragDecorateView;
@property (nonatomic) BOOL isBannerShow;
@property (nonatomic) BOOL anotherScrollViewOriginBounces;
@property (nonatomic) BOOL isBannerEnabled;
@property (retain, nonatomic) MMWebViewController *bannerWebController;
@property (nonatomic) long long bannerState;
@property (nonatomic) BOOL keepNavIconDark;
@property (weak, nonatomic) id<GameCenterBannerManagerDelegate> delegate;
@property (weak, nonatomic) id<GameCenterBannerNavBarProtocol> navDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getHandledBannerUrl;
- (void)loadWebBannerConfig:(id)a0;
- (void)embedWebBannerIn:(id)a0;
- (void)changeBannerViewHeightRatio:(double)a0;
- (void)changeBannerCapsuleHeight:(double)a0;
- (void)updateDecorateViewRadius:(double)a0;
- (void)updateDecorateViewShow:(BOOL)a0;
- (void)destoryBanner;
- (void)showBannerWithAutoExpand:(BOOL)a0 isCacheInit:(BOOL)a1;
- (void)loadBannerTimeout;
- (void)hideBanner;
- (void)expandBanner;
- (void)capsuleBanner;
- (void)disableScrollViewInteractionForShort;
- (void)anotherPartScrollViewDidScroll:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateTopBarAlpah:(double)a0 isIconDark:(BOOL)a1;
- (void)setLayoutUnderNavBar:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)saveBannerWebCache:(id)a0;
- (id)getBannerWebCache;
- (BOOL)shouldDisplayImmediately;
- (void).cxx_destruct;

@end

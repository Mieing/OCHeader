@class NSString, UIImageView, AWEBottomChallengeFavoriteBarContext, UIView, UILabel, UIButton;

@interface AWEBottomChallengeFavoriteBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) AWEBottomChallengeFavoriteBarContext *context;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *challengeNameLabel;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (nonatomic) BOOL requestFavoriteOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)onFavoriteButtonTapped_IMP:(id)a0;
- (BOOL)checkNetworkConnected;
- (void)trackFavoriteButtonTapped:(BOOL)a0;
- (void)onReceiveChallengeFavoriteChanged:(id)a0;
- (void)onFavoriteButtonTapped:(id)a0;
- (void)addFavoriteNotificationObserver;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end

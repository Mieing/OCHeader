@class AWEPlayletSkyLightCatchView, UIViewController, UIImageView, AWEPlayletSkyLightCapsuleView, NSString, AWEPlayletCentralizationSwipeDownGuideView;
@protocol AWEPlayletCentralizationCardViewControllerProtocol, AWEPlayletCentralizationFeedViewControllerProtocol, AWEPlayletCentralizationChildViewControllerProtocol;

@interface AWEPlayletCentralizationBaseViewController : UIViewController <AWEPlayletSkyLightCatchViewDelegate, AWEPlayletSkyLightCapsuleViewDelegate>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) AWEPlayletSkyLightCatchView *catchView;
@property (retain, nonatomic) AWEPlayletSkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWEPlayletCentralizationSwipeDownGuideView *swipeDownGuideView;
@property (retain, nonatomic) UIViewController<AWEPlayletCentralizationCardViewControllerProtocol> *cardViewController;
@property (retain, nonatomic) UIViewController<AWEPlayletCentralizationFeedViewControllerProtocol> *feedViewController;
@property (retain, nonatomic) UIImageView *fullImageView;
@property (nonatomic) double skylightViewHeight;
@property (nonatomic) BOOL hasAutoOpenSkylight;
@property (nonatomic) BOOL showSkylight;
@property (nonatomic) BOOL hasShowSwipeDownGuideView;
@property (nonatomic) long long initContainerStyle;
@property (retain, nonatomic) UIViewController<AWEPlayletCentralizationChildViewControllerProtocol> *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCapsuleViewTouched;
- (void)onCatchViewTouched;
- (void)onChangePlayVideoNotification:(id)a0;
- (BOOL)showSkylight:(BOOL)a0 animated:(BOOL)a1;
- (void)updateContainerStyle;
- (void)switchFeedStyleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showCapsuleView:(BOOL)a0 animated:(BOOL)a1;
- (void)updateFeedViewControllerFrameShowSkylight:(BOOL)a0;
- (void)switchCardStyleAnimated:(BOOL)a0 useVideoScreenShot:(BOOL)a1;
- (void)hideSwipeDownGuideView;
- (void)showSwipeDownGuideView;
- (BOOL)needShowSwipeDownGuideView;
- (void)onCatchViewPanned:(BOOL)a0;
- (void).cxx_destruct;
- (void)play;
- (void)viewDidLoad;
- (id)fullImage;

@end

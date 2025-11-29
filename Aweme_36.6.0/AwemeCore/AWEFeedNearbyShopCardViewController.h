@class AWEAwemeModel, AWENearbyFeedbackSheet, UIView, AWEFeedNearbyShopCardUIConfig, NSString, UIImageView, AWEGradientView, AWEFeedNearbyShopCardContentView, LOTAnimationView, AWEFeedNearbyPOIShopCardModel;
@protocol AWEPOIDynamicCardProtocol;

@interface AWEFeedNearbyShopCardViewController : UIViewController <AWENearbyFeedbackSheetDelegate>

@property (retain, nonatomic) AWENearbyFeedbackSheet *feedbackSheet;
@property (retain, nonatomic) AWEFeedNearbyPOIShopCardModel *poiShopCard;
@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) LOTAnimationView *backgroundLottieView;
@property (retain, nonatomic) LOTAnimationView *locationLottieView;
@property (retain, nonatomic) UIImageView *locationImgView;
@property (retain, nonatomic) UIImageView *locationIconView;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedNearbyShopCardContentView *contentView;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (nonatomic) BOOL hadReportTracking;
@property (retain, nonatomic) AWEFeedNearbyShopCardUIConfig *UIConfig;
@property (nonatomic) double topSpaceHeight;
@property (retain, nonatomic) UIView<AWEPOIDynamicCardProtocol> *dCardBG;
@property (retain, nonatomic) UIImageView *backgroundtextureImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (BOOL)isGeckoResourceReady;
- (void)didEndDisplay;
- (void)renderModel:(id)a0 extrParams:(id)a1;
- (void)loadCDN;
- (void)handleFeedbackDislikeWithType:(long long)a0 toast:(id)a1;
- (void)feedbackSheet:(id)a0 didClickItem:(id)a1 atIndex:(long long)a2;
- (id)nearbyService;
- (id)__bgImage;
- (void)loadCDNLocationIcon;
- (void)showDialog:(id)a0;
- (void)postDeleteShopCardAwemeNotification;
- (void)__setInitialState;
- (void)__setBGContainerEndState;
- (void)__setHeaderEndState;
- (void)__setSPUEndState;
- (void)__setButtonEndState;
- (BOOL)__shouldShowGradientView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)addAction;
- (void)willDisplay;
- (void)layoutUI;

@end

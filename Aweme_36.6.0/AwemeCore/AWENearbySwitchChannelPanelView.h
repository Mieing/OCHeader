@class CAGradientLayer, AWENearbySwitchChannelPanelContentView, UIVisualEffectView, AWENearbyContainerViewController, UIView, NSString;
@protocol AWECityManagerProtocol;

@interface AWENearbySwitchChannelPanelView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWENearbySwitchChannelPanelContentView *contentView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView;
@property (retain, nonatomic) UIVisualEffectView *whiteBackgroundView;
@property (retain, nonatomic) id<AWECityManagerProtocol> cityManager;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long preFeedType;
@property (nonatomic) long long currentFeedType;
@property (nonatomic) BOOL isShown;
@property (weak, nonatomic) AWENearbyContainerViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hidePanel:(id)a0;
- (void)trackPanelShow;
- (void)showPanelWithFeedType:(long long)a0;
- (id)initWithFeedType:(long long)a0;
- (void)checkIfHasCityCache;
- (void)setupPanelStyle;
- (void)handlePanelOuterClick;
- (void)switchBackground;
- (id)whiteLayerColors;
- (id)blurLayerColors;
- (id)whiteLayerLocations;
- (id)blurLayerLocations;
- (void)togglePanelWithShow:(BOOL)a0;
- (void)trackPanelHide:(id)a0;
- (id)stringClickPosition:(long long)a0;
- (void)trackPanelClick:(id)a0 cityModel:(id)a1 feedType:(long long)a2;
- (id)stringFeedType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupUI;

@end

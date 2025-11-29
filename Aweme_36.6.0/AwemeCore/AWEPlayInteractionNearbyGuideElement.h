@class NSString;

@interface AWEPlayInteractionNearbyGuideElement : AWEPlayInteractionLeftElement <AWENearbyGuideElementProtocol, AWEElementSelfFilterProtocol, AWEMessageReachVideoGuideDelegate>

@property (copy, nonatomic) id /* block */ watchTimeHandler;
@property (nonatomic) BOOL isPOIAnchorClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onAddCommentNotification:(id)a0;
- (void)onVideoFavoriteNotification:(id)a0;
- (void)onVideoPlayEnded:(id)a0;
- (void)__setupObserver;
- (void)onVideoShareNotification:(id)a0;
- (BOOL)currentAwemeEqual:(id)a0;
- (id)nearbyTabBubbleParams;
- (void)__showNearbyGuideWithBubbleType:(long long)a0;
- (void)__removeObserver;
- (BOOL)__shouldAddObserver;
- (id)__nearbyModuleService;
- (double)__watchTimeShowGuide:(BOOL)a0;
- (void)__showNearbyGuideWithVideoPlayTimes:(BOOL)a0;
- (void)onClickPOIAnchor:(id)a0;
- (void)__showNearbyGuide;
- (void)__removePlayPeriodObserver;
- (long long)__videoPlayTimes;
- (BOOL)__isFromCurrentAwemeItem:(id)a0 notification:(id)a1;
- (void)__showNearbyGuideWithVideoPlayTimesWithBubbleType:(long long)a0;
- (id)nearbyDiamondBubbleParams;
- (void).cxx_destruct;
- (void)dealloc;

@end

@class NSString, AWETabBarElementButtonViewModel;
@protocol AWEFeedAutoPlayManagerProtocol;

@interface AWEPadFeedTabBarCompactController : AWEBaseController <AWEPadFeedTabBarCompactControllerProtocol>

@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (retain, nonatomic) AWETabBarElementButtonViewModel *autoPlayElementViewModel;
@property (nonatomic) long long autoPlayButtonState;
@property (retain, nonatomic) AWETabBarElementButtonViewModel *danmakuElementViewModel;
@property (nonatomic) long long danmakuButtonState;
@property (retain, nonatomic) AWETabBarElementButtonViewModel *speedElementViewModel;
@property (retain, nonatomic) AWETabBarElementButtonViewModel *clearElementViewModel;
@property (nonatomic) BOOL hasAddClearButton;
@property (nonatomic) BOOL hasCellDisplay;
@property (nonatomic) double lastRefreshPlaybackRate;
@property (nonatomic) BOOL isShowingSpeedPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadTabBarAdapterClass;

- (void)clickClearButton;
- (id)aAWEPadModuleAdapter;
- (void)configureCellAfterSetParentVC:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)setupEvent;
- (id)aAWEPadTabBarAdapter;
- (BOOL)canShowDanmaku;
- (void)trackDanmakuShowIfNeeded;
- (id)getInteractionControllerWithCell:(id)a0;
- (void)refreshTabBarModel;
- (id)interactionTabCompactController;
- (void)refreshPlaybackRateIfNeeded;
- (BOOL)canShowSpeed;
- (void)refreshLeftElementIfNeeded;
- (void)refreshRightElementIfNeeded;
- (BOOL)canShowClear;
- (id)speedButtonImage;
- (void)clickAutoPlayButton;
- (void)clickDanmakuButton;
- (void)clickSpeedButtonWithClickInfo:(id)a0;
- (BOOL)isShowingPanel;
- (id)speedArray;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)currentInteractionController;
- (double)currentPlaybackRate;

@end

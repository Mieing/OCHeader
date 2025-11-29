@class NSString, IESLiveBackgroundView, UIImageView, NSArray, UIView, UIImage, IESLiveBackgroundStrategyFactory;

@interface HTSLivePlayerBackgroundFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveRoomThemeActions, IESLiveMultiTabAction>

@property (retain, nonatomic) IESLiveBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIImageView *matchElementView;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSArray *backgroundUrl;
@property (retain, nonatomic) UIImage *placeHolderImg;
@property (retain, nonatomic) IESLiveBackgroundStrategyFactory *strategyFactory;
@property (nonatomic) BOOL isInMultiTabTypeChat;
@property (nonatomic) BOOL backgroundImageOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)buildViews;
- (void)bindActions;
- (void)handleOrientationChanged:(long long)a0;
- (void)roomThemeNeedRefresh;
- (void)refreshMatchRoomLandscapeTheme:(BOOL)a0;
- (void)multiTabViewDidScrollToTab:(long long)a0;
- (void)addBackgroundMaskView;
- (BOOL)isAudioAndKTVLiveRoom:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)updateBackground;
- (void)messageReceived:(id)a0;
- (void)addViews;

@end

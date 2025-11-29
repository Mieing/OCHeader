@protocol AWECommerceComponentContext;

@interface AWEAwemeLikeFireworksEggManager : NSObject <IESLiveVideoGiftControllerDelegate, AWEAwemeLikeFireworksEggManagerProtocol, AWECommerceComponentProtocol> {
    void /* function */ toggleLeftInteractionContainer;
    void /* function */ getLikeButton;
    void /* unknown type, empty encoding */ isLikeEggShowing;
    void /* unknown type, empty encoding */ likeButtonHasFired;
    void /* unknown type, empty encoding */ targetLoop;
    void /* unknown type, empty encoding */ likeEggIsEnding;
    void /* unknown type, empty encoding */ adOperationGuideShowHandler;
    void /* unknown type, empty encoding */ longPressPanelShowHandler;
    void /* unknown type, empty encoding */ longPressPanelDismissHandler;
    void /* unknown type, empty encoding */ commentPanelShowHandler;
    void /* unknown type, empty encoding */ commentPanelDismissHandler;
    void /* unknown type, empty encoding */ loopHandler;
    void /* unknown type, empty encoding */ lokiLikeEggShowHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_likeButton;
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ likeEggModel;
    void /* unknown type, empty encoding */ contentLikeEggModel;
    void /* unknown type, empty encoding */ shouldUpdateTinyFireworksLabel;
    void /* unknown type, empty encoding */ isLokiLikeEgg;
    void /* unknown type, empty encoding */ isLokiLikeEggShowing;
    void /* unknown type, empty encoding */ likeEggType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fireworksContainerView;
    void /* unknown type, empty encoding */ splitLineImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logoImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wishesLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nickNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skipWishesButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tinyFireworks;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fireworks;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fireworksConfiguration;
    void /* unknown type, empty encoding */ likeButtonLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tinyFireworksLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topDescLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomDescLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_promptMask;
}

@property (nonatomic, weak) void /* function */ playInteractionViewController;
@property (nonatomic, weak) void /* function */ playVideoViewController;
@property (nonatomic, weak) void /* function */ adPromptView;
@property (nonatomic, copy) id /* block */ toggleLeftInteractionContainer;
@property (nonatomic, copy) id /* block */ getLikeButton;
@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (void)preloadFireworkResourceFor:(id)a0;
+ (void)removeCacheFor:(id)a0;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)frameCallBack:(double)a0;
- (id)initWithAweme:(id)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onUpdatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)likeButtonClicked:(id)a0;
- (void)lightFireworks;
- (void)skipClickAction;
- (void)fadeOutFireworks;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)viewDidDisappear;

@end

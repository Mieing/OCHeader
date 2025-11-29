@class AWEOriginalAdLynxComponentModel, NSString, AWEAdLynxCardVoicePlayerHelper, AWEAwemeModel, AWEBDARifleViewConfiguration, NSDate, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEAdLynxCardViewModel : NSObject <AWEAdLynxCardVoicePlayerDelegate> {
    AWEOriginalAdLynxComponentModel *_componentModel;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *vc;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEBDARifleViewConfiguration *configuration;
@property (retain, nonatomic) NSDate *showDate;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) AWEAdLynxCardVoicePlayerHelper *voicePlayerHelper;
@property (retain, nonatomic) NSString *endVoiceURL;
@property (nonatomic) BOOL needOtherShow;

- (id)globalProps;
- (double)changeButtonColorTime;
- (void)onViewWillAppear;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (long long)getTaskProgress;
- (id)initWithLynxComponent:(id)a0 aweme:(id)a1 interactionVC:(id)a2;
- (BOOL)isFullScreenCard;
- (void)onAdLynxCardStatusChange:(long long)a0;
- (double)getNativeLeftContainerViewHeight;
- (void)onViewWillDisappear;
- (void)onLynxCardClicked:(BOOL)a0 adExtraData:(id)a1 refer:(id)a2;
- (void)setFeedPlayer:(BOOL)a0;
- (void)preloadWithURLs:(id)a0;
- (void)openAnimationContainerWithIndex:(long long)a0;
- (void)sendEventToLikeWithName:(id)a0 eventParam:(id)a1;
- (id)trackRefer;
- (void)generateConfig;
- (BOOL)isAdRichAwemeLynxCard;
- (BOOL)isInteractiveAICard;
- (double)adVisibleTime;
- (void)trackError;
- (void)trackButtonPhase;
- (BOOL)isMysteryBoxCard;
- (BOOL)isAlphaVideoLynxCard;
- (BOOL)playURL:(id)a0 needVolumeDown:(BOOL)a1;
- (BOOL)openLandingPageWithExtraParams:(id)a0;
- (void)handleMixedInteractiveClickWithBoxIndex:(long long)a0 delayDuration:(long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)buttonStyle;
- (void)reset;
- (double)currentPlaybackTime;
- (BOOL)shouldPreload;
- (double)showSeconds;

@end

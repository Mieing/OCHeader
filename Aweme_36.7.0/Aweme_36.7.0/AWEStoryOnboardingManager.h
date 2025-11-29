@class NSString, DUXContentSheet;

@interface AWEStoryOnboardingManager : NSObject <DUXSheetDelegate, AWEUserMessage, AWEFamiliarSettingsSubscriber, AWEStoryOnboardingManagerProtocol>

@property (nonatomic) BOOL hasShownHalfScreenOnboarding;
@property (nonatomic) BOOL hasShownStoryTabOBD;
@property (retain, nonatomic) DUXContentSheet *alertSheet;
@property (nonatomic) BOOL didCloseStoryTabOBD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isStory25OnboardingEnabled;
+ (BOOL)isOnboardingEnabledWithScene:(unsigned long long)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)updateFamiliarSettings:(id)a0 fromRequest:(BOOL)a1;
- (void)reportOnboardingDisplayedWithScene:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)showOnboardingIfNeededWithScene:(unsigned long long)a0 trackingParams:(id)a1 willShow:(id /* block */)a2 willDismiss:(id /* block */)a3;
- (BOOL)shouldShowOnboardingWithScene:(unsigned long long)a0;
- (id)storyOnboardingSwitchSettings;
- (void)setStoryOnboardingSwitchSettings:(id)a0;
- (BOOL)isHalfScreenOnboardingScene:(unsigned long long)a0;
- (BOOL)isStoryTabOBDScene:(unsigned long long)a0;
- (id)sceneKeyForScene:(unsigned long long)a0;
- (long long)reportSceneFromOnboardingScene:(unsigned long long)a0;
- (id)storyOBDEventScene:(unsigned long long)a0;
- (id)storyOnboardingSwitchSettingsKey;
- (id)createAlertSheetWithVC:(id)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end

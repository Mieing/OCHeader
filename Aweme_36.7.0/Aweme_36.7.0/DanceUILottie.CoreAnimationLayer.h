@interface DanceUILottie.CoreAnimationLayer : DanceUILottie.BaseAnimationLayer {
    void /* unknown type, empty encoding */ lottieAnimationLayer;
    void /* unknown type, empty encoding */ didSetUpAnimation;
    void /* unknown type, empty encoding */ imageProvider;
    void /* unknown type, empty encoding */ textProvider;
    void /* unknown type, empty encoding */ fontProvider;
    void /* unknown type, empty encoding */ pendingAnimationConfiguration;
    void /* unknown type, empty encoding */ pendingAnimationConfigurationModification;
    void /* unknown type, empty encoding */ currentAnimationConfiguration;
    void /* unknown type, empty encoding */ animation;
    void /* unknown type, empty encoding */ valueProviderStore;
    void /* unknown type, empty encoding */ compatibilityTracker;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ loggingState;
    void /* unknown type, empty encoding */ currentPlaybackState;
}

@property (nonatomic) double animationProgress;

- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)display;
- (id)init;
- (void)layoutSublayers;
- (id)initWithCoder:(id)a0;

@end

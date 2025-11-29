@interface DanceUILottie.MainThreadAnimationLayer : CALayer {
    void /* unknown type, empty encoding */ respectAnimationFrameRate;
    void /* unknown type, empty encoding */ lottieAnimationLayer;
    void /* unknown type, empty encoding */ forceDisplayUpdateOnEachFrame;
    void /* unknown type, empty encoding */ animationLayers;
    void /* unknown type, empty encoding */ renderScale;
    void /* unknown type, empty encoding */ layerImageProvider;
    void /* unknown type, empty encoding */ layerTextProvider;
    void /* unknown type, empty encoding */ layerFontProvider;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic) double currentFrame;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)display;
- (id)init;
- (id)actionForKey:(id)a0;
- (id)initWithCoder:(id)a0;

@end

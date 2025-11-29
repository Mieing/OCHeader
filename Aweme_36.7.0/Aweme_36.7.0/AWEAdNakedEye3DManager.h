@protocol AWECommerceComponentContext;

@interface AWEAdNakedEye3DManager : NSObject <AWEAdNakedEye3DManagerProtocol, AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ optionKey;
    void /* unknown type, empty encoding */ subTagKey;
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ foregroundPlayer;
    void /* unknown type, empty encoding */ foregroundContainerView;
}

@property (nonatomic, weak) void /* function */ playInteractionViewController;
@property (nonatomic, weak) void /* function */ playVideoViewController;
@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (id)initWithAweme:(id)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onUpdatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)prepareForPlaying;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end

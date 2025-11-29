@protocol AWECommerceComponentContext;

@interface AWEAdNewVibrationManager : HTSService <AWECommerceComponentProtocol, AWEAdVibrationManagerProtocol> {
    void /* function */ playerCurrentPlaybackTime;
    void /* unknown type, empty encoding */ hapticEngine;
    void /* unknown type, empty encoding */ hapticPlayer;
    void /* unknown type, empty encoding */ isHapticScheduled;
    void /* unknown type, empty encoding */ ahap;
}

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;
@property (nonatomic, copy) id /* block */ playerCurrentPlaybackTime;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)onUpdatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)preloadVibrationResourceFor:(id)a0;
- (void)removeCacheFor:(id)a0;
- (void)closeAdOperationGuide;
- (id)initWithAweme:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)init;

@end

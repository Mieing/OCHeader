@protocol AWECommerceComponentContext;

@interface AWEAdVibrationManagerProtocol : HTSService <AWEAdVibrationManagerProtocol, AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ aweme;
    void /* function */ playerCurrentPlaybackTime;
    void /* unknown type, empty encoding */ closeAdOperationGuideHandler;
    void /* unknown type, empty encoding */ hapticEngine;
    void /* unknown type, empty encoding */ hapticPatternPlayer;
    void /* unknown type, empty encoding */ ahap;
}

@property (nonatomic, copy) id /* block */ playerCurrentPlaybackTime;
@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)preloadVibrationResourceFor:(id)a0;
- (void)removeCacheFor:(id)a0;
- (void)closeAdOperationGuide;
- (void)onServiceInit;
- (void)clearAllCache;
- (id)initWithAweme:(id)a0;
- (void)clearLocalJsonData;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end

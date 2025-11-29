@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

@interface BDARVideoLynxBridgeModule : BDARVLynxBridgeModule

@property (nonatomic) BOOL supportsHaptics;
@property (retain, nonatomic) CHHapticEngine *engine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> hapticPlayer;

+ (id)methodLookup;

- (id)initWithParam:(id)a0;
- (void)startImpression:(id)a0;
- (void)endImpression:(id)a0;
- (void)changeRewardVideoWithInfo:(id)a0;
- (void)setupHaptic;
- (id)getAskToStayTitle:(id)a0;
- (void)nextRewardVideo;
- (void)changeRewardVideo;
- (void)nextRewardInfoResolve:(id /* block */)a0 reject:(id /* block */)a1;
- (void)openFeedbackPanel:(id)a0 callback:(id /* block */)a1;
- (void)fetch:(id)a0 successCallback:(id /* block */)a1 failCallback:(id /* block */)a2;
- (void)didChooseAd:(id)a0 successCallback:(id /* block */)a1;
- (void)vibrate:(id)a0;
- (void)copyToClipboard:(id)a0 callback:(id /* block */)a1;
- (void)setupStatusBarWithHidden:(BOOL)a0;
- (void)startHaptic:(double)a0;
- (id)createPattern:(double)a0;
- (void)resolveActionWithParams:(id)a0 payloadData:(id)a1;
- (void).cxx_destruct;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)notifyStatus:(id)a0;

@end

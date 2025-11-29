@class IESLiveVideoGiftMetalConfiguration, NSString, IESLiveVideoGiftController;

@interface AWEUGPendantAlphaVideoView : AWEUGPendantContentBaseView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *expandedController;
@property (retain, nonatomic) IESLiveVideoGiftController *foldedController;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *expandedConfig;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *foldedConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldFrame;
@property (nonatomic) BOOL isExistedError;
@property (nonatomic) BOOL playSuccessfully;
@property (nonatomic) long long retryTimes;
@property (copy, nonatomic) id /* block */ contentPlaySuccessfullyHandler;
@property (copy, nonatomic) id /* block */ contentPlayFailedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 animationStart:(id /* block */)a3 animationEnd:(id /* block */)a4;
- (void)playLoopAniamtion;
- (void)animateWithDuration:(double)a0 timingFunction:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (id)addAlphaVideoControllerWithConfig:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)switchPlayingAlphaVideoWithFolded:(BOOL)a0;
- (void)performFoldingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performExpandingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performEdgingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performUnedgingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)trackAlphaVideoLogWithMessage:(id)a0;
- (void)monitorAlphaVideoPlayRetrySuccessfullyWithRetryTimes:(long long)a0;
- (void)monitorAlphaVideoPlayFailedWithError:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedAlphaVideo:(id)a3 expandedAlphaVideo:(id)a4;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 foldedAlphaVideo:(id)a3 expandedAlphaVideo:(id)a4;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)appDidBecomeActive;
- (void)addObservers;

@end

@interface AWELandscapeMediumVideoPlayerCell : AWELandscapeBasePlayerCell

- (void)updateInteractionViewState:(long long)a0 animated:(BOOL)a1;
- (void)createVideoPlayer;
- (void)exitLandscapeWithCompletion:(id /* block */)a0;
- (void)refreshLogExtraDict;
- (void)innerFeedExitWithCompletion:(id /* block */)a0;
- (void)commonExitWithCompletion:(id /* block */)a0;
- (void)landscapeVideoViewController:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)quitFromLandScapeWithShouldShowRewardedAdvertisingIfNeeded;

@end

@class NSString;

@interface BDNativeVideoComponent : BDNativeWebBaseComponent <BDMixVideoPlayerDelegate>

@property (nonatomic) BOOL autoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nativeTagName;
+ (id)nativeTagVersion;

- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)didPlayError:(id)a0;
- (id)insertInNativeContainerObject:(id)a0 params:(id)a1;
- (void)updateInNativeContainerObject:(id)a0 params:(id)a1;
- (void)didBufferChangeWithInfo:(id)a0;
- (void)didSeekEnd:(BOOL)a0;
- (void)didReady;
- (void)didChangePlaybackRate:(double)a0;
- (void)handleLogExtraWithVideoView:(id)a0 params:(id)a1;
- (void)handleAutoplayWithVideoView:(id)a0 params:(id)a1;
- (void)handleModelWithVideoView:(id)a0 params:(id)a1;
- (void)handleControlsWithVideoView:(id)a0 params:(id)a1;
- (void)handleMutedWithVideoView:(id)a0 params:(id)a1;
- (void)handlePoster:(id)a0 params:(id)a1;
- (void)handleObjectFitWithVideoView:(id)a0 params:(id)a1;
- (void)handleActionWithVideoView:(id)a0 params:(id)a1;
- (void)handleInitialTimeWithVideoView:(id)a0 params:(id)a1;
- (void)didEnd;
- (void)didStart;
- (void)didStop;
- (void)didPause;

@end

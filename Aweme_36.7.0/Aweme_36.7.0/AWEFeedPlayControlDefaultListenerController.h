@class NSString;

@interface AWEFeedPlayControlDefaultListenerController : AWEAwemeFeedBaseController <AWEFeedPlayControlServiceListenerProtocol, AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)holdStopPlayer;
- (void)willPlayCell:(id)a0 indexPath:(id)a1 currentModel:(id)a2;
- (void)didPlayCell:(id)a0 indexPath:(id)a1 currentModel:(id)a2;
- (void)videoBufferingPrepared:(id)a0;
- (void)modernVideoBufferingPrepared:(id)a0;
- (void)videoCacheEndedWhenPlay:(id)a0;
- (void)videoBufferLoadEnough:(id)a0;
- (void)videoBufferLoadNotEnough:(id)a0;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (id)shouldPreventPlayBeforePlayStateChanged;
- (id)shouldPreventPlayIfActive;
- (void)showOlderInteractiveGuideIfNeededWithNextLoop:(BOOL)a0;
- (void)playDiscoverHotSearchGuideAnimationWithCurrentModel:(id)a0;
- (void)cancelPreloadCellAndVideo;
- (void)play;
- (void)pause;
- (void)stop;

@end

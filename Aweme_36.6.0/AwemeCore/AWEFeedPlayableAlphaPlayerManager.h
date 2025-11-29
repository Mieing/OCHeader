@class NSString, CMCFeedPlayableContenxt;

@interface AWEFeedPlayableAlphaPlayerManager : HTSService <IESLiveVideoGiftControllerDelegate, AWEFeedPlayableAlphaPlayerManager>

@property (weak, nonatomic) CMCFeedPlayableContenxt *playableContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)preloadAlphaPlayerResource:(id)a0;
- (id)alphaPlayerView:(id)a0;
- (BOOL)canResume:(id)a0;
- (void)preloadFeedAlphaVideoResource:(id)a0;
- (void)p_downloadAlphaVideoWithURLStringIfNeeded:(id)a0;
- (id)alphaPlayerConfigWith:(id)a0;
- (void)trackPlayableAlphaPlayerLoad:(BOOL)a0 context:(id)a1;
- (id)commonParamsWithContext:(id)a0;
- (void)removePlayerViewIfNeed;
- (id)conversionPublicParamWith:(id)a0;
- (id)publicParamsWith:(id)a0;
- (id)playableUrlWith:(id)a0;
- (void)reset:(id)a0;
- (void)resume:(id)a0;
- (void).cxx_destruct;
- (void)pause:(id)a0;
- (id)cacheDirectory;
- (void)play:(id)a0;

@end

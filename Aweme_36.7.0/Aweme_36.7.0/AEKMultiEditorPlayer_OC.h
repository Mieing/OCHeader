@class NLEInterface_OC, NSString, NSMutableSet, AEKMediaSession_OC, NSObject;
@protocol AEKMultiEditorPlayerDelegate, AEKMultiImageCacheProtocol, AEKMultiEditorPlayerDataSource, OS_dispatch_queue;

@interface AEKMultiEditorPlayer_OC : NSObject <NLEPlayerStatusDelegate, AEKMultiEditorPlayerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) NSMutableSet *renderingNLESet;
@property (nonatomic) long long targetIndex;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) BOOL isAppUnactive;
@property (weak, nonatomic) NLEInterface_OC *currentPlayNLE;
@property (weak, nonatomic) NLEInterface_OC *targetNLE;
@property (weak, nonatomic) AEKMediaSession_OC *mediaSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AEKMultiEditorPlayerDelegate> delegate;
@property (weak, nonatomic) id<AEKMultiEditorPlayerDataSource> dataSource;
@property (retain, nonatomic) id<AEKMultiImageCacheProtocol> imageCache;
@property (nonatomic) unsigned long long playMode;
@property (nonatomic) BOOL disableAutoScrollTransfer;
@property (nonatomic) BOOL switchOptimize;
@property (nonatomic) BOOL asyncActive;

- (void)unactiveAll;
- (void)activeAtIndex:(long long)a0 completion:(id /* block */)a1;
- (void)tryDeactive;
- (void)didPlayComplete:(id)a0;
- (void)nleInstanceChanged;
- (void)didEnterForground;
- (id)currentNLE;
- (void)updateBinding:(id)a0;
- (void)deactiveNLE:(id)a0;
- (void)removeRenderingNLE:(id)a0;
- (id)nleAtIndex:(long long)a0;
- (void)switchToIndex:(long long)a0 autoTransfer:(BOOL)a1;
- (BOOL)shouldSwitchPlayerWithIndex:(long long)a0;
- (void)prefetchNLE;
- (void)cachePreviewImageForNLE:(id)a0 cacheKey:(id)a1 completion:(id /* block */)a2;
- (void)startPlayAtIndex:(long long)a0 curNLE:(id)a1 preNLE:(id)a2 isAutoTransfer:(BOOL)a3;
- (void)activeNLE:(id)a0 completion:(id /* block */)a1;
- (void)deactiveNLEForPlayingIndex:(long long)a0;
- (void)pauseIfNeeded:(id)a0;
- (void)activeNLE:(id)a0 optimizedCallBack:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldActiveIndex:(long long)a0 playingIndex:(long long)a1;
- (void)prefetchNLEAtIndex:(long long)a0 completion:(id /* block */)a1;
- (void)cachePreviewImageAtIndex:(long long)a0 completion:(id /* block */)a1;
- (void)addRenderingNLE:(id)a0;
- (BOOL)captureFrameForImageWithNLE:(id)a0;
- (void)cachePreviewImageAtIndexWithResult:(long long)a0 completion:(id /* block */)a1;
- (void)cachePreviewImageForNLEWithResult:(id)a0 cacheKey:(id)a1 completion:(id /* block */)a2;
- (id)mainTrackWithNLEModel:(id)a0;
- (void)deactiveForcedNLE:(id)a0;
- (void)resetToViews:(id)a0;
- (void)unactiveAtIndex:(long long)a0;
- (void)unactiveForcedAtIndex:(long long)a0;
- (void)switchToIndex:(long long)a0;
- (void)cacheCurrentPreviewImageOnCompletion:(id /* block */)a0;
- (void)cacheCurrentPreviewImageOnCompletionResult:(id /* block */)a0;
- (void)transferToPreferredInitialIndex:(long long)a0 nles:(id)a1;
- (void)runAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)willEnterBackground;
- (void)dealloc;
- (void)play:(id)a0;

@end

@class MMAsset;

@interface WCLivePhotoView : WCPlayableImageView {
    BOOL _isPendingToPlay;
}

@property (readonly, nonatomic) MMAsset *asset;

+ (id)generatePlayerArgsWithLocalLivePhotoPath:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asset:(id)a1 playerArgs:(id)a2;
- (id)initWithImage:(id)a0 asset:(id)a1 playerArgs:(id)a2;
- (void)_initWithAsset:(id)a0 playerArgs:(id)a1;
- (void)_init;
- (void)_loadAssetData;
- (void)_loadDisplayImageWithCompletionHandler:(id /* block */)a0;
- (void)_loadLivePhotoWithCompletionHandler:(id /* block */)a0;
- (void)_updatePlayerArgsWithLocalLivePhotoPath:(id)a0;
- (void)startPlaying;
- (void)pausePlaying;
- (void)clearPlayer;
- (void)_markPendingToPlay;
- (void)_resetPendingToPlay;
- (void)_startPlayingIfPending;
- (void).cxx_destruct;

@end

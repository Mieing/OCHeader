@class WCPlayerPlayArgs, MMProgressViewEx, UICollectionView, NSString, GameHaowanMediaWrap, MMAlbumForGameHaowan, WCPlayerView;
@protocol GameVideoGalleryViewControllerDelagate;

@interface GameVideoGalleryViewController : GameCenterNativeVc <UICollectionViewDataSource, UICollectionViewDelegate, WCPlayerDownloaderExt> {
    GameHaowanMediaWrap *_mediaWrap;
    WCPlayerPlayArgs *_playArgs;
    MMAlbumForGameHaowan *_album;
    long long _currentIndex;
    unsigned long long _galleryType;
    id _currentAsset;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) MMProgressViewEx *progressView;
@property (weak, nonatomic) id<GameVideoGalleryViewControllerDelagate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAlbum:(id)a0 andIndex:(long long)a1 galleryType:(unsigned long long)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupViews;
- (void)setupGoBackView;
- (void)setupActionView;
- (void)setupProgressView;
- (void)goBack;
- (void)askPerformAction;
- (void)performAction;
- (id)createPlayerView;
- (void)attachPlayerViewToCell:(id)a0;
- (void)setupCollectionView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)playAVAsset:(id)a0 url:(id)a1;
- (void)performCellAction:(long long)a0 asset:(id)a1;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)showNewUserTips;
- (void)trackEventExplosured;
- (void)trackEventExit;
- (void)trackEventCloudTips:(id)a0 appId:(id)a1;
- (void)trackEventShareHaowan:(id)a0 index:(long long)a1;
- (void)trackEventSwitchVideo:(id)a0 index:(long long)a1;
- (id)reportObjWithPosition:(long long)a0 action:(long long)a1;
- (id)buildTrackEventProps:(id /* block */)a0;
- (void).cxx_destruct;

@end

@class NSString, NSMutableSet, NSHashTable;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCEditImageAlbumMixedWraper : NSObject <ACCEditBuildListener, ACCEditImageAlbumMixedProtocolD>

@property (weak, nonatomic) id<ACCImageAlbumEditorSessionProtocol> player;
@property (retain, nonatomic) NSHashTable *subscriberArray;
@property (retain, nonatomic) NSMutableSet *stopPlayFlagKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableAutoPlay;
@property (readonly, nonatomic) BOOL isAutoPlaying;
@property (readonly, nonatomic) BOOL isPreviewMode;

- (void)scrollToIndex:(long long)a0;
- (void)onEditSessionInit:(id)a0;
- (double)currentPlayTime;
- (void)removeTimeObserver;
- (void)setEditSessionProvider:(id)a0;
- (void)releasePlayer;
- (void)pauseMusic;
- (void)replayMusic;
- (void)addTimeObserver;
- (void)resetWithContainerView:(id)a0;
- (void)continuePlayMusic;
- (void)replaceMusic:(id)a0;
- (void)setImagePlayerScrollEnable:(BOOL)a0;
- (void)setImagePlayerIsPreviewMode:(BOOL)a0;
- (void)setImagePlayerPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)currentImageEditorIndex;
- (id)currentImageItemModel;
- (id)currentImageEditorContentView;
- (long long)totalImagePlayerImageCount;
- (struct CGSize { double x0; double x1; })imageLayerSizeAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })imageSizeAtIndex:(long long)a0;
- (void)setPlayerBottomOffset:(double)a0;
- (void)exportImagesWithProgress:(id /* block */)a0 onSucceed:(id /* block */)a1 onFaild:(id /* block */)a2;
- (void)reloadCurrentPlayerItem;
- (void)reloadPlayerItemAtIndex:(long long)a0;
- (void)setAutoPlayInterval:(double)a0;
- (void)setDisableTransitionAnimation:(BOOL)a0;
- (void)startAutoPlayWithKey:(id)a0;
- (void)startAutoPlayForPeview;
- (void)stopAutoPlayWithKey:(id)a0;
- (void)stopAutoPlayForPeview;
- (double)progressBottomInsert;
- (id)playerGestureView;
- (void)exportImagesWithProgress:(id /* block */)a0 onSucceed:(id /* block */)a1 onFaild:(id /* block */)a2 needUniqueImageId:(BOOL)a3;
- (void)updatePageProgressViewShowStatus:(BOOL)a0;
- (void)updatePageProgressAnimationStatus;
- (void)updateInteractionContainerAlpha:(double)a0;
- (void)p_updateAutoPlayStatus;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end

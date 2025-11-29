@class WCActionSheet, NSString, NSMutableDictionary, ForwardMessageLogicController, NSMutableArray, WCPlayerView;

@interface WAMediaPreviewViewController : WAPhotoViewController <WCPlayerConfigDelegate, WCActionSheetDelegate, FullScreenGestureDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate> {
    NSMutableDictionary *m_dicVideoView;
    WCPlayerView *m_currentPlayerView;
    NSMutableArray *m_mediaList;
    WCActionSheet *m_actionSheet;
    NSMutableDictionary *m_dicDownloadItem;
    ForwardMessageLogicController *m_forwardMsgLogic;
    BOOL m_playAtOnce;
    NSMutableArray *m_tempPathList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)initMediaViewerWithSources:(id)a0 current:(int)a1 appId:(id)a2 appScene:(unsigned long long)a3 referer:(id)a4;
- (id)viewAtPage:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)a0;
- (id)imageAtPage:(unsigned int)a0;
- (id)playerViewAtPage:(unsigned int)a0;
- (void)onSingleTap:(id)a0;
- (void)OnLongPress:(id)a0;
- (id)createPlayerViewWithIndex:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configPlayerViewWithUrl:(id)a0 playerInfo:(id)a1 mediaWrap:(id)a2;
- (id)genErrorView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFullscreenRect;
- (void)onChangePage;
- (BOOL)isCurrentPageVideo;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)onFullScreenClose;
- (void)onFullScreenItemDragToClose;
- (void)multiImageScrollViewWillBeginDragging;
- (void)fetchAllVideoDataWithMediaItem:(id)a0 OperateType:(unsigned long long)a1;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)OnCdnDownloadError:(id)a0;
- (void)saveVideo:(id)a0;
- (void)saveVideoOnGetAllData:(id)a0;
- (void)addToFavorites:(id)a0;
- (void)addToFavoritesOnGetAllData:(id)a0;
- (void)forwardVideo:(id)a0;
- (void)forwardVideoOnGetAllData:(id)a0;
- (id)genForwardMessageWrapWithMediaItem:(id)a0;
- (id)genFavoriteItemWithMediaItem:(id)a0;
- (id)genVideoInfoWithMediaItem:(id)a0;
- (id)convertWeAppVideo2FavItem:(id)a0;
- (id)getCurrentViewController;
- (void)animateTransition:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateCurrentPageFrame;
- (void)addTempFilePath:(id)a0;
- (void)removeTempFiles;
- (id)tryGetThumbImageView:(id)a0;
- (void)updateThumbImageAtIndex:(unsigned int)a0;
- (void)onVideoPlay;
- (void).cxx_destruct;

@end

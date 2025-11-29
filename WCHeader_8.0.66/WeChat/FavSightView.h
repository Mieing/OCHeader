@class WCPlayerConfigControlView, NSString, WCPlayerPlayArgs, FavSightFullScreenViewController, FavSightInfo, WCPlayerView;
@protocol FavSightViewDelegate;

@interface FavSightView : MMUIView <GroupNoticeDownloadExt, IFavCdnDownloadMgrExt, FavVideoCompressExt, FavSightFullScreenViewControllerDelegate, ICdnComMgrExt, GroupNoticeUploadExt, IRecordDownloadExt, FavFullScreenImageViewControllerDelegate, WCPlayerViewUIDelegate, FavPlayerViewProtocol> {
    WCPlayerView *m_sightView;
    WCPlayerConfigControlView *m_controlView;
    WCPlayerPlayArgs *m_playerInfo;
    FavSightFullScreenViewController *m_viewController;
    FavSightInfo *m_sightInfo;
    BOOL m_fileReady;
    BOOL m_bFullScreen;
    BOOL m_downloading;
}

@property (nonatomic) BOOL receiveUploadVideoFail;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL hideIcon;
@property (weak, nonatomic) id<FavSightViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(double)a0 favSightInfo:(id)a1 fullScreen:(BOOL)a2;
- (id)getHDThumbPath:(id)a0;
- (id)tryGetImgFromVideoPath:(id)a0 thumbImagePath:(id)a1;
- (void)onClickSight;
- (void)dealloc;
- (void)onSingleTap;
- (void)setSightDelegate:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isVideoPlaying;
- (void)playVideo;
- (void)pauseVideo;
- (void)stopPlayer;
- (void)refreshThumb;
- (double)getSightHeight;
- (void)setVideoPath:(id)a0;
- (void)onHide;
- (BOOL)isToolViewHidden;
- (void)setToolViewHidden:(BOOL)a0;
- (void)setIconViewHidden:(BOOL)a0;
- (void)showDownloadIcon;
- (void)setLoadingState:(BOOL)a0;
- (void)fetchAllVideoData;
- (void)setDownloadState;
- (BOOL)isNeedDownload;
- (void)setAnimateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onWillAnimateShow;
- (void)onWilAnimateClose;
- (void)onDidAnimateShow;
- (void)didFullScreenAnimationCompleted;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)setDisPlayViewHidden:(BOOL)a0;
- (void)checkData;
- (BOOL)isFileExistAndComplete:(id)a0;
- (void)OnFavCdnDownload:(id)a0 TotalLength:(unsigned long long)a1 FinishLength:(unsigned long long)a2;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (void)OnCdnDownload:(id)a0;
- (void)OnDownloadRecordMessageOK:(id)a0 DataId:(id)a1 bThumb:(BOOL)a2;
- (void)onGroupNoticeDownloadData:(id)a0 retCode:(int)a1;
- (void)onFavVideoCompressFinish:(id)a0 isSuccess:(BOOL)a1;
- (void)onJumpToUrl:(id)a0;
- (void)onExitFullScreen;
- (void)onUploadGroupNoticeData:(id)a0 finishedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)onUploadGroupNoticeData:(id)a0 success:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getOriginImageViewRectWithSimpleImgInfo:(id)a0;
- (void)playerViewDidZoom:(id)a0;
- (void).cxx_destruct;

@end

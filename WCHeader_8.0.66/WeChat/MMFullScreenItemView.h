@class UIView, NSString, UIImage, WCLivePhotoView, UIImageView, MMUILabel, SimpleImgInfo, SightIconView;
@protocol MMFullScreenItemViewDelegate, FavPlayerViewProtocol;

@interface MMFullScreenItemView : UIView <FavSightViewDelegate, WCPlayerConfigDelegate> {
    SightIconView *m_sightIconView;
    MMUILabel *m_hintLabel;
    BOOL m_isItemShowing;
    UIImageView *m_imageView;
    BOOL m_hasPlayVideo;
}

@property (retain, nonatomic) WCLivePhotoView *livePhotoView;
@property (weak, nonatomic) id<MMFullScreenItemViewDelegate> delegate;
@property (retain, nonatomic) SimpleImgInfo *imgInfo;
@property (retain, nonatomic) UIView<FavPlayerViewProtocol> *playerView;
@property (readonly, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resize;
- (void)setContentMode:(long long)a0;
- (void)initContentView:(id)a0;
- (void)tryPlaySight;
- (void)onWillAnimateShow;
- (void)setAnimateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onWilAnimateClose;
- (void)onShow;
- (void)didFullScreenAnimationCompleted;
- (void)onHide;
- (BOOL)isItemShowing;
- (void)releaseContentView;
- (void)showFavDataExpiredView;
- (void)FavDataExpiredViewResize;
- (void)HideDataExpiredView;
- (BOOL)isReady;
- (void)updateImage:(id)a0;
- (void)onSingleTap;
- (BOOL)isNeedLazyDownload;
- (void)onScreenDragBegin;
- (void)onScreenDragCancel;
- (void)onScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)displayLivePhoto;
- (void)stopDisplayLivePhoto;
- (void)onFavSightSizeDidChange:(id)a0;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)a0;
- (void)onToolViewAutoClose;
- (BOOL)onClickPlayButton;
- (void)onClickToolView;
- (void)onPlayerStartPlay;
- (void)onGetVideoViewBottomLineCenterY:(double *)a0 leftPartOffset:(double *)a1 rightPartWidth:(double *)a2 rightPartMargin:(double *)a3;
- (void)onPlayerClickCloseButton;
- (void)tryToDownLoadVideo;
- (void)onPlayerDisplayFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

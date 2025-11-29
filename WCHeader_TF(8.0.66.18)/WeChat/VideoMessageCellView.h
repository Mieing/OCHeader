@class VideoMessageViewModel, NSString, UIView, UIDragInteraction, MMDragManager, UIButton, UIImageView, YYAsyncImageView, CAGradientLayer, MMUILabel, UILabel, SightIconView;

@interface VideoMessageCellView : CommonMessageCellView <IVideoExt, MMDragDelegate, MsgImgFullScreenTransitionObject> {
    YYAsyncImageView *m_thumbImageView;
    SightIconView *m_sightIconView;
    UIView *m_videoInfoBgView;
    CAGradientLayer *m_videoInfoMaskLayer;
    UILabel *m_videoTimeLabel;
    UILabel *m_videoSizeLabel;
    UILabel *m_pauseTipsLabel;
    int m_uiStatus;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
}

@property (retain, nonatomic) UIButton *iconClickBgButton;
@property (retain, nonatomic) UIView *downloadSuccTipsView;
@property (retain, nonatomic) MMUILabel *downloadSuccTipsLabel;
@property (retain, nonatomic) MMUILabel *progressLabel;
@property (readonly, nonatomic) VideoMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)updateStatus;
- (void)updateUploadStatus;
- (void)updateDownloadStatus;
- (id)displayViewForImageBrowser;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showRectForMenuController;
- (void)showVideo;
- (void)addMagicTapActions:(id)a0;
- (BOOL)handleMagicTapAction:(id)a0;
- (void)initThumbImageView;
- (void)initSightIconView;
- (void)initVideoInfoView;
- (id)operationMenuItems;
- (void)onSliencePlay:(id)a0;
- (void)doForward;
- (void)onVideoForwardToFinder:(id)a0;
- (void)onTouchUpInside;
- (void)onClickSightIcon:(id)a0;
- (void)tryRestartSendingTask;
- (void)restartSendingTask;
- (void)asyncCheckAsset;
- (void)onAssetCheckFinish:(BOOL)a0;
- (id)liftingItemWithImage:(id)a0 parameters:(id)a1;
- (void)liftingImageNeedRemove;
- (void)onAppear;
- (void)onCancelButtonClicked:(id)a0;
- (void)StartUploadVideo:(id)a0;
- (void)onClickToPlayWithSoundable:(BOOL)a0;
- (void)OnVideoThumbDidChange:(id)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)a0;
- (void).cxx_destruct;

@end

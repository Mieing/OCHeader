@class CAGradientLayer, BTVideoItemCellViewModel, SightIconView, UIView, BTVideoItemCellAutoPlayerView, MMUILabel;

@interface BTVideoItemCellView : BTReaderItemCellView {
    CAGradientLayer *m_maskLayer;
    UIView *m_playerBtnContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    MMUILabel *m_autoPlayVideoTimeLabel;
    CAGradientLayer *m_autoPlayVideoTitleMaskLayer;
    BTVideoItemCellAutoPlayerView *m_lastAddedPlayerView;
}

@property (readonly, nonatomic) BTVideoItemCellViewModel *viewModel;

- (void)initTopReaderItem;
- (void)initNormalReaderItem;
- (void)initCoverView;
- (void)initCoverMaskLayer;
- (id)getTitleViewColor:(BOOL)a0;
- (void)onUpdateViewModel;
- (void)initPlayIconView;
- (void)initTimeLabel;
- (void)updateTimeLabel;
- (void)updateTitleView:(BOOL)a0;
- (void)updateViewByVideoAutoPlayStatus;
- (void)initVideoPlayerView;
- (void)initVideoTimeLabel;
- (void)initVideoPlayTitleCoverMaskLayer;
- (void)updateVideoTimeLabel;
- (void)setVideoPlayTitleCoverMaskLayer;
- (void)removeVideoPlayTitleCoverMaskLayer;
- (void)updateViewWhenStatusIsPlay;
- (void)updateViewWhenStatusIsDestory;
- (void)doAnimationFromCoverImageToVideoPlayerView;
- (void)onVideoPlayerBeginBuffering;
- (void)onVideoPlayerPlay;
- (void)onVideoPlayerPrepareToPlay;
- (void)resetLastAddedPlayerView;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
